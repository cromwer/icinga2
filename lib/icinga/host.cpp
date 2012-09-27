/******************************************************************************
 * Icinga 2                                                                   *
 * Copyright (C) 2012 Icinga Development Team (http://www.icinga.org/)        *
 *                                                                            *
 * This program is free software; you can redistribute it and/or              *
 * modify it under the terms of the GNU General Public License                *
 * as published by the Free Software Foundation; either version 2             *
 * of the License, or (at your option) any later version.                     *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              *
 * GNU General Public License for more details.                               *
 *                                                                            *
 * You should have received a copy of the GNU General Public License          *
 * along with this program; if not, write to the Free Software Foundation     *
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.             *
 ******************************************************************************/

#include "i2-icinga.h"

using namespace icinga;

REGISTER_CLASS(Host);

bool Host::m_InitializerDone = false;

Host::Host(const Dictionary::Ptr& properties)
	: DynamicObject(properties)
{
	if (!m_InitializerDone) {
		ConfigItem::OnCommitted.connect(boost::bind(&Host::ObjectCommittedHandler, this, _1));
		ConfigItem::OnRemoved.connect(boost::bind(&Host::ObjectRemovedHandler, this, _1));

		m_InitializerDone = true;
	}

	RegisterAttribute("alias", Attribute_Config);
	RegisterAttribute("hostgroups", Attribute_Config);
}

String Host::GetAlias(void) const
{
	String value = Get("alias");
	if (!value.IsEmpty())
		return value;
	else
		return GetName();
}

bool Host::Exists(const String& name)
{
	return (DynamicObject::GetObject("Host", name));
}

Host::Ptr Host::GetByName(const String& name)
{
	DynamicObject::Ptr configObject = DynamicObject::GetObject("Host", name);

	if (!configObject)
		throw_exception(invalid_argument("Host '" + name + "' does not exist."));

	return dynamic_pointer_cast<Host>(configObject);
}

Dictionary::Ptr Host::GetGroups(void) const
{
	return Get("hostgroups");
}

set<String> Host::GetParents(void)
{
	set<String> parents;

	Dictionary::Ptr dependencies = Get("dependencies");
	if (dependencies) {
		dependencies = Service::ResolveDependencies(GetSelf(), dependencies);

		Value dependency;
		BOOST_FOREACH(tie(tuples::ignore, dependency), dependencies) {
			Service::Ptr service = Service::GetByName(dependency);

			String parent = service->GetHost()->GetName();

			/* ignore ourselves */
			if (parent == GetName())
				continue;

			parents.insert(parent);
		}
	}

	return parents;
}

Dictionary::Ptr Host::GetMacros(void) const
{
	return Get("macros");
}

bool Host::IsReachable(void)
{
	Dictionary::Ptr dependencies = Get("dependencies");
	if (dependencies) {
		dependencies = Service::ResolveDependencies(GetSelf(), dependencies);

		Value dependency;
		BOOST_FOREACH(tie(tuples::ignore, dependency), dependencies) {
			Service::Ptr service = Service::GetByName(dependency);

			if (!service->IsReachable() ||
			    (service->GetState() != StateOK && service->GetState() != StateWarning)) {
				return false;
			}
		}
	}

	return true;
}

bool Host::IsUp(void)
{
	Dictionary::Ptr hostchecks = Get("hostchecks");
	if (hostchecks) {
		hostchecks = Service::ResolveDependencies(GetSelf(), hostchecks);

		Value hostcheck;
		BOOST_FOREACH(tie(tuples::ignore, hostcheck), hostchecks) {
			Service::Ptr service = Service::GetByName(hostcheck);

			if (service->GetState() != StateOK && service->GetState() != StateWarning) {
				return false;
			}
		}
	}

	return true;
}

template<typename TDict>
static void CopyServiceAttributes(const Host::Ptr& host, TDict serviceDesc,
    const ConfigItemBuilder::Ptr& builder)
{
	/* TODO: we only need to copy macros if this is an inline definition,
	 * i.e. host->GetProperties() != service, however for now we just
	 * copy them anyway. */
	Value macros = serviceDesc->Get("macros");
	if (!macros.IsEmpty())
		builder->AddExpression("macros", OperatorPlus, macros);

	Value checkInterval = serviceDesc->Get("check_interval");
	if (!checkInterval.IsEmpty())
		builder->AddExpression("check_interval", OperatorSet, checkInterval);

	Value retryInterval = serviceDesc->Get("retry_interval");
	if (!retryInterval.IsEmpty())
		builder->AddExpression("retry_interval", OperatorSet, retryInterval);

	Value sgroups = serviceDesc->Get("servicegroups");
	if (!sgroups.IsEmpty())
		builder->AddExpression("servicegroups", OperatorPlus, sgroups);

	Value checkers = serviceDesc->Get("checkers");
	if (!checkers.IsEmpty())
		builder->AddExpression("checkers", OperatorSet, checkers);

	Value dependencies = serviceDesc->Get("dependencies");
	if (!dependencies.IsEmpty())
		builder->AddExpression("dependencies", OperatorPlus,
		    Service::ResolveDependencies(host, dependencies));

	Value hostchecks = serviceDesc->Get("hostchecks");
	if (!hostchecks.IsEmpty())
		builder->AddExpression("dependencies", OperatorPlus,
		    Service::ResolveDependencies(host, hostchecks));
}

void Host::ObjectCommittedHandler(const ConfigItem::Ptr& item)
{
	if (item->GetType() != "Host")
		return;

	/* ignore abstract host objects */
	if (!Host::Exists(item->GetName()))
		return;

	Host::Ptr host = Host::GetByName(item->GetName());

	Dictionary::Ptr oldServices = host->Get("convenience_services");

	Dictionary::Ptr newServices;
	newServices = boost::make_shared<Dictionary>();

	Dictionary::Ptr serviceDescs = host->Get("services");

	if (serviceDescs) {
		String svcname;
		Value svcdesc;
		BOOST_FOREACH(tie(svcname, svcdesc), serviceDescs) {
			stringstream namebuf;
			namebuf << item->GetName() << "-" << svcname;
			String name = namebuf.str();

			ConfigItemBuilder::Ptr builder = boost::make_shared<ConfigItemBuilder>(item->GetDebugInfo());
			builder->SetType("Service");
			builder->SetName(name);
			builder->AddExpression("host_name", OperatorSet, item->GetName());
			builder->AddExpression("alias", OperatorSet, svcname);

			CopyServiceAttributes(host, host, builder);

			if (svcdesc.IsScalar()) {
				builder->AddParent(svcdesc);
			} else if (svcdesc.IsObjectType<Dictionary>()) {
				Dictionary::Ptr service = svcdesc;

				String parent = service->Get("service");
				if (parent.IsEmpty())
					parent = svcname;

				builder->AddParent(parent);

				CopyServiceAttributes(host, service, builder);
			} else {
				throw_exception(invalid_argument("Service description must be either a string or a dictionary."));
			}

			ConfigItem::Ptr serviceItem = builder->Compile();
			serviceItem->Commit();

			newServices->Set(name, serviceItem);
		}
	}

	if (oldServices) {
		ConfigItem::Ptr service;
		BOOST_FOREACH(tie(tuples::ignore, service), oldServices) {
			if (!service)
				continue;

			if (!newServices->Contains(service->GetName()))
				service->Unregister();
		}
	}

	host->Set("convenience_services", newServices);
}

void Host::ObjectRemovedHandler(const ConfigItem::Ptr& item)
{
	if (item->GetType() != "Host")
		return;

	DynamicObject::Ptr host = item->GetDynamicObject();

	if (!host)
		return;

	Dictionary::Ptr services = host->Get("convenience_services");

	if (!services)
		return;

	ConfigItem::Ptr service;
	BOOST_FOREACH(tie(tuples::ignore, service), services) {
		service->Unregister();
	}
}
