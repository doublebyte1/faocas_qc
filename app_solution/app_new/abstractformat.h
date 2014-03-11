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

#ifndef ABSTRACTFORMAT_H
#define ABSTRACTFORMAT_H

#include <QtSql>
#include <boost/shared_ptr.hpp>

using namespace boost;

  #if defined(WIN32) && defined(_DEBUG)
     #define DEBUG_NEW new( _NORMAL_BLOCK, __FILE__, __LINE__ )
     #define new DEBUG_NEW
  #endif

typedef QMultiMap<QString, QMap<QString, QMap<QString, QString> > >            MapKeys;

//! Abstract Format Class
/*!
This is the top level class for all formats
*/

class AbstractFormat
{
typedef shared_ptr<AbstractFormat>                                             absFormatPtr;

    public:
        AbstractFormat(const QString name=0, const QString extension=0, const QString description=0);
        virtual ~AbstractFormat();

        //! Export
        /*!
        This is the virtual function that actually writes the data on the chosen format; 
        it should be *always* implemented in the derived classes.
        N.b.: we didnt call it export(), because it's a reserved word...
         \return Boolean value as success or failure
        */
        virtual bool                    exportNow()=0;
        virtual bool                    importNow()=0;

        QString                         getName()const {return m_name;}
        QString                         getExtension()const {return m_extension;}
        QString                         getDescription()const {return m_description;}

        //! Set FileName
        /*!
        This is the virtual function that sets the file where we want to write the data to.
        N.b.: We must set this before exporting!
         \param strFileName A file name
         \sa setExportFormat(QString strFormat), setEditor(QTextEdit* editor)
        */
        virtual void        setFileName(QString strFileName)=0;

        //! Construct Filter for the File Dialog
        /*!
        This is a convenient function that loops through all the implemented formats and constructs a correspondent filter, to display in the file dialog.
          \param strFilter memory address of a string to store the filter
          \return Boolean value as success or failure
          \sa findFormat(const QString& strExtension, QList<absFormatPtr>& formatList)
        */
        static bool                     buildFormatFilter(QString& strFilter, QList<absFormatPtr>& formatList);
        //! Return Export Format
        /*!
        This is a convenient function, that receives a string with a certain format and returns a pointer to a AbstractDocFormat;
          \param strExtension file extension (without the ".")
          \sa buildFormatFilter(QString& strFilter, QList<absFormatPtr>& formatList)
        */
        static AbstractFormat*          findFormat(const QString& strExtension, QList<absFormatPtr>& formatList);

    protected:
        const QString                   m_name;//!< export format name, as it is used internally
        const QString                   m_extension;//!< export format extension (without the "."!)
        const QString                   m_description;//!< description to be displayed on the file dialog


};
#endif // ABSTRACTFORMAT_H
