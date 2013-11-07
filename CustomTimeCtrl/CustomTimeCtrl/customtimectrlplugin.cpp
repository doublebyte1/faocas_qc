#include "customtimectrl.h"
#include <QtCore/QtPlugin>
#include "customtimectrlplugin.h"


CustomTimeCtrlPlugin::CustomTimeCtrlPlugin(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void CustomTimeCtrlPlugin::initialize(QDesignerFormEditorInterface *core)
{
    if (initialized)
        return;

    initialized = true;
}

bool CustomTimeCtrlPlugin::isInitialized() const
{
    return initialized;
}

QWidget *CustomTimeCtrlPlugin::createWidget(QWidget *parent)
{
    return new CustomTimeCtrl(parent);
}

QString CustomTimeCtrlPlugin::name() const
{
    return "CustomTimeCtrl";
}

QString CustomTimeCtrlPlugin::group() const
{
    return "My Plugins";
}

QIcon CustomTimeCtrlPlugin::icon() const
{
    return QIcon (":/agenda.png");
}

QString CustomTimeCtrlPlugin::toolTip() const
{
    return tr("Widget that encapsulates a date/time control");
}

QString CustomTimeCtrlPlugin::whatsThis() const
{
    return tr("This is a widget to encapsulate a date/time control");
}

bool CustomTimeCtrlPlugin::isContainer() const
{
    return false;
}

QString CustomTimeCtrlPlugin::domXml() const
{
    return
        //tr("<widget class=\"QWidget\" name=\"centralwidget\"> <widget class=\"QWidget\" name=\"DateTime\"> <property name=\"geometry\"> <rect> <x>0</x> <y>0</y> <width>509</width> <height>79</height> </rect> </property> <property name=\"windowTitle\"> <string/> </property> <property name=\"statusTip\"> <string>Date Time Input</string> </property> <property name=\"whatsThis\"> <string>Widget to Input DateTime</string> </property> <layout class=\"QHBoxLayout\" name=\"horizontalLayout\"> <item> <widget class=\"QGroupBox\" name=\"groupDate\"> <property name=\"toolTip\"> <string>Input the date here</string> </property> <property name=\"statusTip\"> <string>Input date</string> </property> <property name=\"whatsThis\"> <string>Widget to input date</string> </property> <property name=\"title\"> <string/> </property> <property name=\"flat\"> <bool>true</bool> </property> <layout class=\"QFormLayout\" name=\"formLayout\"> <property name=\"fieldGrowthPolicy\"> <enum>QFormLayout::AllNonFixedFieldsGrow</enum> </property> <item row=\"0\" column=\"0\"> <widget class=\"QLabel\" name=\"lbDate\"> <property name=\"text\"> <string>Date</string> </property> <property name=\"buddy\"> <cstring>dateEdit</cstring> </property> </widget> </item> <item row=\"0\" column=\"1\"> <widget class=\"QDateEdit\" name=\"dateEdit\"> <property name=\"calendarPopup\"> <bool>true</bool> </property> </widget> </item> <item row=\"1\" column=\"0\" colspan=\"2\"> <widget class=\"QLabel\" name=\"lbDateFormat\"> <property name=\"text\"> <string>-&gt; DATE FORMAT</string> </property> </widget> </item> </layout> </widget> </item> <item> <widget class=\"QGroupBox\" name=\"groupTime\"> <property name=\"toolTip\"> <string>Input the time here</string> </property> <property name=\"statusTip\"> <string>Input time</string> </property> <property name=\"whatsThis\"> <string>Widget to input time</string> </property> <property name=\"title\"> <string/> </property> <property name=\"flat\"> <bool>true</bool> </property> <layout class=\"QFormLayout\" name=\"formLayout_2\"> <property name=\"fieldGrowthPolicy\"> <enum>QFormLayout::AllNonFixedFieldsGrow</enum> </property> <item row=\"0\" column=\"0\"> <widget class=\"QLabel\" name=\"lbTime\"> <property name=\"text\"> <string>Time</string> </property> <property name=\"buddy\"> <cstring>timeEdit</cstring> </property> </widget> </item> <item row=\"0\" column=\"1\"> <widget class=\"QTimeEdit\" name=\"timeEdit\"> <property name=\"calendarPopup\"> <bool>false</bool> </property> </widget> </item> <item row=\"1\" column=\"0\" colspan=\"2\"> <widget class=\"QLabel\" name=\"lbTimeFormat\"> <property name=\"text\"> <string>-&gt; TIME FORMAT</string> </property> </widget> </item> </layout> </widget> </item> </layout> </widget> </widget>");
        "<widget class=\"CustomTimeCtrl\" name=\"customTimeCtrl\">\n"
        " <property name=\"geometry\">\n"
        "  <rect>\n"
        "   <x>0</x>\n"
        "   <y>0</y>\n"
        "   <width>100</width>\n"
        "   <height>100</height>\n"
        "  </rect>\n"
        " </property>\n"
        "</widget>\n";
}

QString CustomTimeCtrlPlugin::includeFile() const
{
    return "customtimectrl.h";
}

Q_EXPORT_PLUGIN2(customtimectrl, CustomTimeCtrlPlugin)
