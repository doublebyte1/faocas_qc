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
#include "ui_frmlegend.h"
#include "globaldefs.h"

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

//////////////////////////////////////////////////////////////////////
#ifndef FRMLEGEND_H
#define FRMLEGEND_H

//! Frm Legend Class
/*!
This class implements the dialog with the legend from the details form (vessel changes setup);
*/

class FrmLegend : public QDialog, public Ui::FrmLegend
{
    Q_OBJECT

    public:
        FrmLegend(QWidget *parent = 0, Qt::WFlags flags = 0);
        ~FrmLegend();

    private:
        void                        init();

        bool                        initGenericTreeItem(const QString strTitle,
                                            const QString strDescription, QTreeWidgetItem* item);
        bool                        initTreeChild(const QFont& font1, const QFont& font2, const QIcon& icon, const QString strTitle,
                                            const QString strDescription, QTreeWidgetItem* item);
        bool                        initTreeParent(const QFont font, const QString strTitle,
                                            const QString strDescription, QTreeWidgetItem* item);

        QTreeWidgetItem*            levels;
        QTreeWidgetItem*            recycled;
        QTreeWidgetItem*            root;
        QTreeWidgetItem*            bin;
        QTreeWidgetItem*            gls;
        QTreeWidgetItem*            ls;
        QTreeWidgetItem*            vessel;
        QTreeWidgetItem*            glsd;
        QTreeWidgetItem*            lsd;
        QTreeWidgetItem*            vesseld;
        QTreeWidgetItem*            status;
        QTreeWidgetItem*            unmovable;
        QTreeWidgetItem*            merged;
};
#endif //FRMLEGEND_H
