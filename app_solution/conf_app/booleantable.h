/***************************************************************
** This file is part of FAO's Faocas Configurator.
**
** Faocas Configurator is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** Faocas Configurator is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
**You should have received a copy of the GNU General Public License
**along with Faocas Configurator.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************/

#include <QtGui>

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

#ifndef BOOLEANTABLE_H
#define BOOLEANTABLE_H

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

//! BooleanTable Class
/*!
This class implements tableview that transposes the columns of the database to rows, and translates
a logical column in two (enable/disable).
*/

class BooleanTable : public QTableView
{
    Q_OBJECT

    public:
        BooleanTable(QWidget *parent = 0);
        ~BooleanTable();

    void                                showOnlyLastRow();
    void                                showAllRows();

    private:

};

#endif // BOOLEANTABLE_H
