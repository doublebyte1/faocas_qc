/********************************************************************************
** Form generated from reading UI file 'designerquerywidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGNERQUERYWIDGET_H
#define UI_DESIGNERQUERYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_designerQueryWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *m_createButton;
    QSpacerItem *spacerItem;
    QToolButton *m_editButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *m_editName;
    QSpacerItem *spacerItem1;
    QToolButton *m_deleteButton;
    QListWidget *m_listWidget;

    void setupUi(QWidget *designerQueryWidget)
    {
        if (designerQueryWidget->objectName().isEmpty())
            designerQueryWidget->setObjectName(QString::fromUtf8("designerQueryWidget"));
        designerQueryWidget->resize(457, 149);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(designerQueryWidget->sizePolicy().hasHeightForWidth());
        designerQueryWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(designerQueryWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_createButton = new QToolButton(designerQueryWidget);
        m_createButton->setObjectName(QString::fromUtf8("m_createButton"));

        hboxLayout->addWidget(m_createButton);

        spacerItem = new QSpacerItem(51, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        m_editButton = new QToolButton(designerQueryWidget);
        m_editButton->setObjectName(QString::fromUtf8("m_editButton"));

        hboxLayout->addWidget(m_editButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        m_editName = new QToolButton(designerQueryWidget);
        m_editName->setObjectName(QString::fromUtf8("m_editName"));

        hboxLayout->addWidget(m_editName);

        spacerItem1 = new QSpacerItem(51, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        m_deleteButton = new QToolButton(designerQueryWidget);
        m_deleteButton->setObjectName(QString::fromUtf8("m_deleteButton"));

        hboxLayout->addWidget(m_deleteButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 2);

        m_listWidget = new QListWidget(designerQueryWidget);
        m_listWidget->setObjectName(QString::fromUtf8("m_listWidget"));

        gridLayout->addWidget(m_listWidget, 1, 0, 1, 1);


        retranslateUi(designerQueryWidget);

        QMetaObject::connectSlotsByName(designerQueryWidget);
    } // setupUi

    void retranslateUi(QWidget *designerQueryWidget)
    {
        designerQueryWidget->setWindowTitle(QApplication::translate("designerQueryWidget", "Queries", 0, QApplication::UnicodeUTF8));
        m_createButton->setText(QApplication::translate("designerQueryWidget", "Create", 0, QApplication::UnicodeUTF8));
        m_editButton->setText(QApplication::translate("designerQueryWidget", "Edit query", 0, QApplication::UnicodeUTF8));
        m_editName->setText(QApplication::translate("designerQueryWidget", "Edit name", 0, QApplication::UnicodeUTF8));
        m_deleteButton->setText(QApplication::translate("designerQueryWidget", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class designerQueryWidget: public Ui_designerQueryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGNERQUERYWIDGET_H
