/********************************************************************************
** Form generated from reading UI file 'designeruiwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGNERUIWIDGET_H
#define UI_DESIGNERUIWIDGET_H

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

class Ui_designerUiWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *m_addButton;
    QSpacerItem *spacerItem;
    QToolButton *m_editButton;
    QSpacerItem *horizontalSpacer;
    QToolButton *m_editName;
    QSpacerItem *spacerItem1;
    QToolButton *m_deleteButton;
    QListWidget *m_listWidget;

    void setupUi(QWidget *designerUiWidget)
    {
        if (designerUiWidget->objectName().isEmpty())
            designerUiWidget->setObjectName(QString::fromUtf8("designerUiWidget"));
        designerUiWidget->resize(457, 149);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(designerUiWidget->sizePolicy().hasHeightForWidth());
        designerUiWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(designerUiWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_addButton = new QToolButton(designerUiWidget);
        m_addButton->setObjectName(QString::fromUtf8("m_addButton"));

        hboxLayout->addWidget(m_addButton);

        spacerItem = new QSpacerItem(51, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        m_editButton = new QToolButton(designerUiWidget);
        m_editButton->setObjectName(QString::fromUtf8("m_editButton"));

        hboxLayout->addWidget(m_editButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        m_editName = new QToolButton(designerUiWidget);
        m_editName->setObjectName(QString::fromUtf8("m_editName"));

        hboxLayout->addWidget(m_editName);

        spacerItem1 = new QSpacerItem(51, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        m_deleteButton = new QToolButton(designerUiWidget);
        m_deleteButton->setObjectName(QString::fromUtf8("m_deleteButton"));

        hboxLayout->addWidget(m_deleteButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 2);

        m_listWidget = new QListWidget(designerUiWidget);
        m_listWidget->setObjectName(QString::fromUtf8("m_listWidget"));

        gridLayout->addWidget(m_listWidget, 1, 0, 1, 1);


        retranslateUi(designerUiWidget);

        QMetaObject::connectSlotsByName(designerUiWidget);
    } // setupUi

    void retranslateUi(QWidget *designerUiWidget)
    {
        designerUiWidget->setWindowTitle(QApplication::translate("designerUiWidget", "Uis", 0, QApplication::UnicodeUTF8));
        m_addButton->setText(QApplication::translate("designerUiWidget", "Create", 0, QApplication::UnicodeUTF8));
        m_editButton->setText(QApplication::translate("designerUiWidget", "Edit ui", 0, QApplication::UnicodeUTF8));
        m_editName->setText(QApplication::translate("designerUiWidget", "Edit name", 0, QApplication::UnicodeUTF8));
        m_deleteButton->setText(QApplication::translate("designerUiWidget", "Delete", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class designerUiWidget: public Ui_designerUiWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGNERUIWIDGET_H
