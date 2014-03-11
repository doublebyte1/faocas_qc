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

#ifndef GENERICSORTPROXYMODEL_H
#define GENERICSORTPROXYMODEL_H
 
#include <QSortFilterProxyModel>
 
class GenericSortProxyModel : public QSortFilterProxyModel
{
public:
GenericSortProxyModel(QObject *parent=0);
void setparametros(QList<bool> booleanColumns);
protected:
virtual Qt::ItemFlags flags ( const QModelIndex & index ) const;
virtual QVariant data ( const QModelIndex & index, int role ) const;
virtual bool setData ( const QModelIndex & index, const QVariant & value, int role );
 
private:
QList<bool> booleanSet;
QVariant nullVariant;
 
};
 
#endif // GENERICSORTPROXYMODEL_H
