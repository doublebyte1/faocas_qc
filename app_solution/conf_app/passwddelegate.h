#ifndef PASSWDDELEGATE_H
#define PASSWDDELEGATE_H

#include <QtGui>
#include <QtSql>

#include "nullrelationaldelegate.h"

//! Password Delegate Class
/*!
This class implements a delegate between model and mapper, allowing to encrypt and decrypt passwords.
The passwords are stored in the database as 'cyphertext' and they are manipulated by the user as 'plain text'.
To encrypt/decrypt the passwords a compiled key is applied, based on the SimpleCrypt class.
To prevent the controls from going "empty", it has derived derived from NullRelationalDelegate.
*/

class PasswdDelegate : public NullRelationalDelegate
    {
        Q_OBJECT

        public:
            //! A constructor
            /*!
               In this constructor, we take two lists, one with the indexes that point
               to the base class behaviour, and another one (for text fields) for which we actually
               override the function; in this way, we are able to reuse the Relational SQL
               Delegate for all situations.
              \param colsOthers a STL list with columns that use the base class delegate
              \param colsText a STL list with columns that use special null-handling text delegate
              \param colsPass a STL list with columns that store passwords, requiring encryption/decryption.
            */
            PasswdDelegate (QList<int> colsOthers, QList<int> colsText,QList<int> colsPass,
                QObject *parent = 0);

        public:
            void setEditorData(QWidget *editor, const QModelIndex &index) const;
            void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;

        private:
            QList<int>         m_colsText;
            QList<int>         m_colsOthers;
            QList<int>         m_colsPass;
};

#endif // PASSWDDELEGATE_H
