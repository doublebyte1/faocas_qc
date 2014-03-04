#include "passwddelegate.h"
#include "simplecrypt.h"

SimpleCrypt crypto(Q_UINT64_C(0x0c2ad4a4acb9f023)); //some random number

PasswdDelegate::PasswdDelegate(QList<int> colsOthers, QList<int> colsText, QList<int> colsPass,QObject *parent):
    NullRelationalDelegate(colsOthers,colsText,parent), m_colsPass(colsPass)
{

}
void PasswdDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if (m_colsOthers.contains(index.column()) || m_colsText.contains(index.column()) ){
        NullRelationalDelegate::setModelData(editor,model,index);
    }else if (m_colsPass.contains(index.column())){

            model->setData(index, crypto.encryptToString(editor->property("text").toString()));

    }
    else QSqlRelationalDelegate::setModelData(editor,model,index);
}

void PasswdDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    if (m_colsOthers.contains(index.column()) || m_colsText.contains(index.column())){
        NullRelationalDelegate::setEditorData(editor,index);
    }else if (m_colsPass.contains(index.column())){

           editor->setProperty("text", crypto.decryptToString(index.data().toString()));

    }
    else QSqlRelationalDelegate::setEditorData(editor,index);
}

