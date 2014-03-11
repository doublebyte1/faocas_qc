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

#include <QDir>
#include <QtGui>

#ifndef GLOBALDEFS_H
#define GLOBALDEFS_H

//! Global Defs
/*!
This is just a file where we store all the string constants, in a translating friendly way,
so that we are able to change them easily on a global basis.
*/

static const char *strNa = 
     QT_TRANSLATE_NOOP("null_replacements", "n/a");

static const char *strMissing = 
     QT_TRANSLATE_NOOP("null_replacements", "missing");

static const char *strOther = 
     QT_TRANSLATE_NOOP("null_replacements", "other");

static const char *strUnknown = 
     QT_TRANSLATE_NOOP("null_replacements", "unknown");

static const char *strOutside = 
     QT_TRANSLATE_NOOP("bin", "outside");

static const char *strBin = 
     QT_TRANSLATE_NOOP("bin", "bin");

static const char *strInactive = 
     QT_TRANSLATE_NOOP("bin", "Inactive");

static const char *strDragged = 
     QT_TRANSLATE_NOOP("dragged", "Dragged by parent");

static const char *strRoot = 
     QT_TRANSLATE_NOOP("frame", "root");

static const char *strActive = 
     QT_TRANSLATE_NOOP("frame", "Active");

static const char *strLogbook = 
     QT_TRANSLATE_NOOP("frame", "logbook");

static const char *strSampling = 
     QT_TRANSLATE_NOOP("frame", "sampling");

//static const QString strReportsDir =
  //  QDir::currentPath() + QDir::separator() + "reports";

static const char *strEmpty = 
     QT_TRANSLATE_NOOP("empty", "empty");

static const QString strDatabaseDriver = 
     "SQL SERVER";
     //"SQL Server Native Client 10.0";

#endif// GLOBALDEFS_H
