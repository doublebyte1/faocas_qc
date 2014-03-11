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

#ifndef FRMCHANGEREASONS_H
#define FRMCHANGEREASONS_H

#include <QtGui>
#include <QtSql>
#include "ui_frmchangereasons.h"

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

//////////////////////////////////////////////////////////////////////

//! Frm Change Reasons Class
/*!
This class implements the widget that is shown each time we move
nodes around the tree widget; it connects with the database structure that
stores the reasons for this temporary or permanent change.
*/

class FrmChangeReasons : public QDialog, public Ui::FrmChangeReasons
{
    Q_OBJECT

    public:
        FrmChangeReasons(QWidget *parent = 0, Qt::WFlags flags = 0);
        ~FrmChangeReasons();

        void            setVesselReasons(const bool bVessel){m_VesselReasons=bVessel;};
        bool            getDbIndex(int& id);

    protected:
        void    showEvent ( QShowEvent * event );

    private slots:

    private:
        void             init();
        bool             m_VesselReasons;
        QSqlTableModel*  tChanges;

};
#endif //FRMCHANGEREASONS_H
