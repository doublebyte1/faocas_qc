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
#include "ui_frmTip.h"

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

#ifndef FRMTIP_H
#define FRMTIP_H

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

//! FrmTip Class
/*!
This class implements a dialog to show an informative message at the startup of the application.
It provides a signal to write the option in the windows registry.
*/

class FrmTip : public QDialog, public Ui::frmtip
{
    Q_OBJECT

    public:
        FrmTip(QWidget *parent = 0, Qt::WFlags flags = 0);
        ~FrmTip();

    signals:
        //! Show startup Msg
        /*! This signals indicates if we need to show the startup msg; it is triggered by a checkbox on the UI
        \par bShow boolean indicating if we have to show the msg
        */
        void            showStartupMsg(bool bShow);

    private:

};

#endif // FRMTIP_H
