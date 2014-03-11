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

#ifndef CUSTOMMSGBOX_H
#define CUSTOMMSGBOX_H

#include <QtGui>
#include "ui_msgbox.h"

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

//! CustomMsgBox Class
/*!
//This custom msgbox is used to display errors to the user, without exiting the event loop;
regular messageboxes, exit the event loop, causing the application to crash on errors;
I don't know why, but the icon does not come ok when inside Visual Studio (bug?)!
*/

class CustomMsgBox: public QDialog, public Ui::CustomMsgBoxDialog
{
	Q_OBJECT

	public:
		CustomMsgBox(QWidget *parent = 0);
		~CustomMsgBox();

		void fillDialog(QString strTitle, QString strMessage);

};

#endif // CUSTOMMSGBOX_H
