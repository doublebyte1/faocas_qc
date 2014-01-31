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
