#include "catchinputctrl.h"

static const char *strWeight = 
     QT_TRANSLATE_NOOP("sections", "by Weight");
static const char *strUnits = 
     QT_TRANSLATE_NOOP("sections", "by Units");
static const char *strBoxes = 
     QT_TRANSLATE_NOOP("sections", "by Boxes");

CatchInputCtrl::CatchInputCtrl(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);

    connect(this, SIGNAL(blockWidgetsSignals(const bool)), this,
    SLOT(onBlockWidgetsSignals(const bool)));
}

CatchInputCtrl::~CatchInputCtrl()
{

}

void CatchInputCtrl::onBlockWidgetsSignals(bool bBlock)
{
    doubleSpinTotalE->blockSignals(bBlock);
    doubleSpinTotalC->blockSignals(bBlock);
    cmbWeightUnits->blockSignals(bBlock);
    doubleSpinNoBoxesE->blockSignals(bBlock);
    doubleSpinNoBoxesC->blockSignals(bBlock);
    doubleSpinWeightBox->blockSignals(bBlock);
    cmbBoxUnits->blockSignals(bBlock);
    spinUnitsE->blockSignals(bBlock);
    spinUnitsC->blockSignals(bBlock);
    doubleSpinWeightUnit->blockSignals(bBlock);
    cmbUnitUnits->blockSignals(bBlock);
}

bool CatchInputCtrl::checkUnits(QComboBox* cmb)
{
    if (cmbWeightUnits->currentText()!= cmb->currentText()){

     /*int ret = */QMessageBox::warning(this, tr("Catch Input Control"),
                                    tr("For now we only support calculations in the same units.\n"
                                       "Please ensure that the units on \"Weight\" and \"Units\" are the same,\n"
                                       " if you want to visualize the totals!"),
                                       QMessageBox::Ok);

        return false;
    }

    return true;
}

void CatchInputCtrl::adjustTotalWeightFromBoxWeight(double val)
{
    if (!checkUnits(cmbBoxUnits)) return;

    doubleSpinTotalE->setValue(val*doubleSpinNoBoxesE->value());
    updateWeightLabel(QVariant(val*doubleSpinNoBoxesE->value()).toString());
}

void CatchInputCtrl::adjustTotalWeightFromNoBoxes(double val)
{
    if (!checkUnits(cmbBoxUnits)) return;

    doubleSpinTotalE->setValue(val*doubleSpinWeightBox->value());
    updateWeightLabel(QVariant(val*doubleSpinWeightBox->value()).toString());
}

void CatchInputCtrl::adjustTotalWeightFromUnits(double val)
{
    if (!checkUnits(cmbUnitUnits)) return;

    doubleSpinTotalE->setValue((double)(val*(double)spinUnitsE->value()));
    updateWeightLabel(QVariant(val*(double)spinUnitsE->value()).toString());
}

void CatchInputCtrl::adjustTotalWeightFromUnits(int val)
{
    if (!checkUnits(cmbUnitUnits)) return;

    doubleSpinTotalE->setValue((double)val*doubleSpinWeightUnit->value());
    updateWeightLabel(QVariant((double)val*doubleSpinWeightUnit->value()).toString());
}

void CatchInputCtrl::onWeightUnitChange(QString strUnits)
{
    updateWeightLabel(QVariant(doubleSpinTotalE->value()).toString());
}

void CatchInputCtrl::onUnitsUnitChange(QString strUnits)
{
    if (!checkUnits(cmbUnitUnits)) return;
    updateWeightLabel(QVariant(doubleSpinTotalE->value()).toString());
}

void CatchInputCtrl::onBoxUnitChange(QString strUnits)
{
    if (!checkUnits(cmbBoxUnits)) return;
    updateWeightLabel(QVariant(doubleSpinTotalE->value()).toString());
}

void CatchInputCtrl::updateWeightLabel(QString strNew)
{
    toolBox->setItemText(0,
        qApp->translate("sections", strWeight) + tr(" (Total: ") + strNew + tr(" ") + cmbWeightUnits->currentText() + tr(" )")); 
}
