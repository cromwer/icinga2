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

#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include "base/dynamicobject.h"
#include "base/timer.h"
#include "ido/dbobject.h"
#include "ido/dbquery.h"

namespace icinga
{

/**
 * A database connection.
 *
 * @ingroup ido
 */
class DbConnection : public DynamicObject
{
public:
	DECLARE_PTR_TYPEDEFS(DbConnection);

	static void StaticInitialize(void);

	void SetObjectID(const DbObject::Ptr& dbobj, const DbReference& dbref);
	DbReference GetObjectID(const DbObject::Ptr& dbobj) const;

	void SetInsertID(const DbObject::Ptr& dbobj, const DbReference& dbref);
	DbReference GetInsertID(const DbObject::Ptr& dbobj) const;

	void SetConfigUpdate(const DbObject::Ptr& dbobj, bool hasupdate);
	bool GetConfigUpdate(const DbObject::Ptr& dbobj) const;

	void SetStatusUpdate(const DbObject::Ptr& dbobj, bool hasupdate);
	bool GetStatusUpdate(const DbObject::Ptr& dbobj) const;

	String GetTablePrefix(void) const;

protected:
	virtual void Start(void);

	virtual void InternalSerialize(const Dictionary::Ptr& bag, int attributeTypes) const;
	virtual void InternalDeserialize(const Dictionary::Ptr& bag, int attributeTypes);

	virtual void ExecuteQuery(const DbQuery& query) = 0;
	virtual void ActivateObject(const DbObject::Ptr& dbobj) = 0;
	virtual void DeactivateObject(const DbObject::Ptr& dbobj) = 0;

	void UpdateAllObjects(void);

private:
	String m_TablePrefix;

	std::map<DbObject::Ptr, DbReference> m_ObjectIDs;
	std::map<DbObject::Ptr, DbReference> m_InsertIDs;
	std::set<DbObject::Ptr> m_ConfigUpdates;
	std::set<DbObject::Ptr> m_StatusUpdates;
	static Timer::Ptr m_ProgramStatusTimer;

	static void InsertRuntimeVariable(const String& key, const Value& value);
	static void ProgramStatusHandler(void);
};

}

#endif /* DBCONNECTION_H */
