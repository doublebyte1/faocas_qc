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

#include <QtGui>
#include <QtSql>
#include <QtWebKit>
#include "ui_frmprjpage.h"

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

//////////////////////////////////////////////////////////////////////
#ifndef FRMPRJPAGE_H
#define FRMPRJPAGE_H

//! Frm Project Page
/*!
This class implements a form, containing a web browser that points to the project page
*/

class FrmPrjPage : public QWidget, Ui::frmprjpage
{
    Q_OBJECT

    public:
        FrmPrjPage(QWidget *parent = 0, Qt::WFlags flags = 0);
        ~FrmPrjPage();

    private slots:
	#ifndef WIN32			
        void handleSslErrors(QNetworkReply* reply, const QList<QSslError> &errors);
	#endif		
};

#endif //FRMPRJPAGE_H
