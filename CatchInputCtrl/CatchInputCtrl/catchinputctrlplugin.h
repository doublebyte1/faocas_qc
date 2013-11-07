#ifndef CATCHINPUTCTRLPLUGIN_H
#define CATCHINPUTCTRLPLUGIN_H

#include <QDesignerCustomWidgetInterface>

//! Plugin Class.
/*!
  //This is the class exposed as a plugin; it is ihneritated from
  QDesignerCustomWidgetInterface, which is an custom class for Qt designer plugins.
*/

class CatchInputCtrlPlugin : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    CatchInputCtrlPlugin(QObject *parent = 0);

    bool isContainer() const;
    bool isInitialized() const;
    QIcon icon() const;//!< Icon for this plugin;
    QString domXml() const;
    QString group() const;//!< Group for this plugin, in the Designer;
    QString includeFile() const;//!< Include file for the plugin;
    QString name() const;//!< Plugin name;
    QString toolTip() const;//!< Plugin tooltip;
    QString whatsThis() const;//!< Plugin whatsThis;
    QWidget *createWidget(QWidget *parent);//!< Method that instantiates the catchinputctrl class (and therefore the control);
    void initialize(QDesignerFormEditorInterface *core);

private:
    bool initialized;
};

#endif // CATCHINPUTCTRLPLUGIN_H
