/***************************************************************
** This file is part of FAO's Faocas.
**
** Faocas is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** Faocas is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
**You should have received a copy of the GNU General Public License
**along with Faocas.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************/

#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
#include "globaldefs.h"

/*!
    This file defines a helper function to open a *default* connection to the Database.
    New connections must have a name!
*/

static bool createConnection(const QString strHost, const QString strDatabase, const QString strUser,
                                            const QString strPass, const QString strDriver, const int port)
{
       QSqlDatabase db = QSqlDatabase::addDatabase( strDriver );
        db.setHostName(strHost);
        db.setPort(port);
        db.setDatabaseName(strDatabase);
        db.setUserName(strUser);
        db.setPassword(strPass);
        //Open the Database
        if  (!db.open()){
            QString error;
            error = db.lastError().text();
            qDebug() <<  error ;
            return false;
        }
    //TODO: remove this when redoing the mac address function!
    db.setDatabaseName(strDatabase);
    return true;
}

#endif
