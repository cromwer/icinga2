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

#include "livestatus/orfilter.h"
#include <boost/foreach.hpp>

using namespace icinga;
using namespace livestatus;

OrFilter::OrFilter(void)
{ }

bool OrFilter::Apply(const Table::Ptr& table, const Value& row)
{
	if (m_Filters.empty())
		return true;

	BOOST_FOREACH(const Filter::Ptr& filter, m_Filters) {
		if (filter->Apply(table, row))
			return true;
	}

	return false;
}
