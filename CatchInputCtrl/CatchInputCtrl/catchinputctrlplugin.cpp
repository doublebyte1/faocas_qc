#include "catchinputctrl.h"

#include <QtCore/QtPlugin>
#include "catchinputctrlplugin.h"


CatchInputCtrlPlugin::CatchInputCtrlPlugin(QObject *parent)
    : QObject(parent)
{
    initialized = false;
}

void CatchInputCtrlPlugin::initialize(QDesignerFormEditorInterface *core)
{
    if (initialized)
        return;

    initialized = true;
}

bool CatchInputCtrlPlugin::isInitialized() const
{
    return initialized;
}

QWidget *CatchInputCtrlPlugin::createWidget(QWidget *parent)
{
    return new CatchInputCtrl(parent);
}

QString CatchInputCtrlPlugin::name() const
{
    return "CatchInputCtrl";
}

QString CatchInputCtrlPlugin::group() const
{
    return "My Plugins";
}

QIcon CatchInputCtrlPlugin::icon() const
{
    return QIcon (":/fish");
}

QString CatchInputCtrlPlugin::toolTip() const
{
    return tr("This widget allows to input the catch totals, using different methods");
}

QString CatchInputCtrlPlugin::whatsThis() const
{
    return tr("This widget allows to input the catch totals, using different methods");
}

bool CatchInputCtrlPlugin::isContainer() const
{
    return false;
}

QString CatchInputCtrlPlugin::domXml() const
{
    return "<widget class=\"CatchInputCtrl\" name=\"catchInputCtrl\">\n"
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

QString CatchInputCtrlPlugin::includeFile() const
{
    return "catchinputctrl.h";
}

Q_EXPORT_PLUGIN2(catchinputctrl, CatchInputCtrlPlugin)
