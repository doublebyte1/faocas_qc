/***************************************************************************
 *   This file is part of the eXaro project                                *
 *   Copyright (C) 2008 by BogDan Vatra                                    *
 *   bog_dan_ro@yahoo.com                                                  *
 **                   GNU General Public License Usage                    **
 *                                                                         *
 *   This library is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 *                                                                         *
 **                  GNU Lesser General Public License                    **
 *                                                                         *
 *   This library is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU Lesser General Public License as        * 
 *   published by the Free Software Foundation, either version 3 of the    *
 *   License, or (at your option) any later version.                       *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library.                                      * 
 *   If not, see <http://www.gnu.org/licenses/>.                           *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 ****************************************************************************/

#include <QtCore>
#include <QBrush>
#include <QPainter>
#include <QStyleOptionGraphicsItem>

#include "pagefooter.h"

inline void initMyResource()
{
	Q_INIT_RESOURCE(pageFooter);
}

PageFooter::PageFooter(QGraphicsItem* parent, QObject* parentObject): BandInterface(parent, parentObject)
{
	initMyResource();
	setBandType(Report::BandInterface::PageFooter);
	setResizeFlags(FixedPos | ResizeTop);
}


PageFooter::~PageFooter()
{
}

bool PageFooter::canContain(QObject * object)
{
	return (!dynamic_cast<Report::BandInterface*>(object) && dynamic_cast<Report::ItemInterface*>(object));
}

QRectF PageFooter::boundingRect() const
{
	return QRectF(0, 0, width(), height());
}

void PageFooter::paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * /*widget*/)
{
	QRectF rect = (option->type == QStyleOption::SO_GraphicsItem) ? boundingRect() : option->exposedRect;

	setupPainter(painter);

	painter->fillRect(rect, painter->brush());

	if (option->type == QStyleOption::SO_GraphicsItem)
	{
		drawSelection(painter, rect);
		drawTitle(tr("Page footer"), TitleLeft, Qt::AlignCenter);
	}

	adjustRect(rect);

	if (frame()&DrawLeft)
		painter->drawLine(rect.left(), rect.top(), rect.left(), rect.bottom());

	if (frame()&DrawRight)
		painter->drawLine(rect.right(), rect.top(), rect.right(), rect.bottom());

	if (frame()&DrawTop)
		painter->drawLine(rect.left(), rect.top(), rect.right(), rect.top());

	if (frame()&DrawBottom)
		painter->drawLine(rect.left(), rect.bottom(), rect.right(), rect.bottom());
}

QIcon PageFooter::toolBoxIcon()
{
	return QIcon(":/pageFooter.png");
}

QString PageFooter::toolBoxText()
{
	return tr("Page footer");
}

QString PageFooter::toolBoxGroup()
{
	return tr("Bands");
}

QObject * PageFooter::createInstance(QGraphicsItem* parent, QObject* parentObject)
{
	return new PageFooter(parent, parentObject);
}

Q_EXPORT_PLUGIN2(pageFooter, PageFooter)

