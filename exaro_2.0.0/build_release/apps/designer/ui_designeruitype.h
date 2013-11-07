/********************************************************************************
** Form generated from reading UI file 'designeruitype.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESIGNERUITYPE_H
#define UI_DESIGNERUITYPE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_designerUiType
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *widgetRadioButton;
    QRadioButton *dialogRadioButton;
    QRadioButton *customRadioButton;
    QPushButton *pushButton;

    void setupUi(QDialog *designerUiType)
    {
        if (designerUiType->objectName().isEmpty())
            designerUiType->setObjectName(QString::fromUtf8("designerUiType"));
        designerUiType->resize(157, 210);
        verticalLayout_2 = new QVBoxLayout(designerUiType);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(designerUiType);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widgetRadioButton = new QRadioButton(groupBox);
        widgetRadioButton->setObjectName(QString::fromUtf8("widgetRadioButton"));
        widgetRadioButton->setChecked(true);

        verticalLayout->addWidget(widgetRadioButton);

        dialogRadioButton = new QRadioButton(groupBox);
        dialogRadioButton->setObjectName(QString::fromUtf8("dialogRadioButton"));

        verticalLayout->addWidget(dialogRadioButton);

        customRadioButton = new QRadioButton(groupBox);
        customRadioButton->setObjectName(QString::fromUtf8("customRadioButton"));

        verticalLayout->addWidget(customRadioButton);


        verticalLayout_2->addWidget(groupBox);

        pushButton = new QPushButton(designerUiType);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(designerUiType);
        QObject::connect(pushButton, SIGNAL(clicked()), designerUiType, SLOT(accept()));

        QMetaObject::connectSlotsByName(designerUiType);
    } // setupUi

    void retranslateUi(QDialog *designerUiType)
    {
        designerUiType->setWindowTitle(QApplication::translate("designerUiType", "Ui", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("designerUiType", "[ Ui base class ]", 0, QApplication::UnicodeUTF8));
        widgetRadioButton->setText(QApplication::translate("designerUiType", "Q&Widget", 0, QApplication::UnicodeUTF8));
        dialogRadioButton->setText(QApplication::translate("designerUiType", "Q&Dialog", 0, QApplication::UnicodeUTF8));
        customRadioButton->setText(QApplication::translate("designerUiType", "&Custom", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("designerUiType", "&Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class designerUiType: public Ui_designerUiType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESIGNERUITYPE_H
