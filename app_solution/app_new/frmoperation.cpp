//#include <QTest>
#include "frmoperation.h"

FrmOperation::FrmOperation(RoleDef* inRoleDef, Sample* inSample, RuleChecker* ruleCheckerPtr, QWidget *parent, Qt::WFlags flags):
PreviewTab(6, inRoleDef, inSample,tr("Fishing Operation"), ruleCheckerPtr, parent, flags){

    setupUi(this);

    installEventFilters();

    connect(pushNext, SIGNAL(clicked()), this,
    SLOT(next()));

    connect(pushPrevious, SIGNAL(clicked()), this,
    SLOT(goBack()));

    connect(this, SIGNAL(blockCatchUISignals(const bool)), catchInputCtrl,
    SIGNAL(blockWidgetsSignals(const bool)));

    tOperations=0;
    tOpCat=0;
    tRefCat=0;
    multiModelI=0;
    viewOperations=0;
    mapper1=0;
    nullDelegate=0;

    initModels();
    initUI();
}

FrmOperation::~FrmOperation()
{
    if (tOpCat!=0) delete tOpCat;
    if (tRefCat!=0) delete tRefCat;
    if (multiModelI!=0) delete multiModelI;
    if (tOperations!=0) delete tOperations;
    if (viewOperations!=0) delete viewOperations;
    if (nullDelegate!=0) delete nullDelegate;
    if (mapper1!=0) delete mapper1 ;
}

void FrmOperation::initHelpIds()
{
    m_widgetInfo.insert(tableView,"FaoCAS::characterise_fishing_operation");
    m_widgetInfo.insert(groupDetails,"FaoCAS::Sub-form_Fishing_OperationDetails");
    m_widgetInfo.insert(listCategories,"FaoCAS::commercial_category");
}

void FrmOperation::onItemSelection()
{
    pushNext->setEnabled(tableView->selectionModel()->hasSelection());
    pushPrevious->setEnabled(tableView->selectionModel()->hasSelection());
}

void FrmOperation::previewRow(QModelIndex index)
{
    emit blockCatchUISignals(true);

    QModelIndex idx=viewOperations->index(index.row(),0);
    if (!idx.isValid()){
        emit showError (tr("Could not preview this operation!"));
        return;
    }

    updateSample(idx);

    if (!abstractPreviewRow(index)){
        //emit showError (tr("Could not preview this record!"));
        qDebug() << tr("Record discarded!") << endl;
    }else{

        int intId=idx.data().toInt();//for the MultiModelI
        //QString id=idx.data().toString();

        mapper1->toLast();

        //preview record on the listView
        multiModelI->setParentId(intId);
        multiModelI->model2List("id_fishing_operation");

    }

    emit blockCatchUISignals(false);
}

void FrmOperation::setPreviewQuery()
{
    if (m_sample==0) return;
    QString strQuery=
            "select     sampled_fishing_operations.id, ref_gears.name as \"gear used\", to_char(start_dt, 'DD/Mon/YYYY') as \"start date\",  to_char(end_dt, 'DD/Mon/YYYY') as \"end date\",  "

            "    case when"
            "            (select start_time)=(select 'allballs'::time)"
            "    then 'missing' else  "

            "    to_char(start_time, 'HH24:MI:SS') end \"start time\","

            "    case when"
            "            (select end_time)=(select 'allballs'::time)"
            "    then 'missing' else  "

            "    to_char(end_time, 'HH24:MI:SS') end \"end time\""

            "     from         sampled_fishing_operations inner join"
            "                          ref_gears on sampled_fishing_operations.id_gear = ref_gears.id "
            "     where     (sampled_fishing_operations.id_fishing_trip = :id) order by id desc"
    ;

    QSqlQuery query;
    query.prepare( strQuery );
    query.bindValue(0,m_sample->tripId);
    if (!query.exec()){
        emit showError(tr("Could not obtain filter for Sampled Fishing Operations!"));
        return;
    }

    viewOperations->setQuery(query);

    tableView->hideColumn(0);
    resizeToVisibleColumns(tableView);
}

void FrmOperation::initModels()
{
    if (viewOperations!=0) delete viewOperations;
    viewOperations = new QSqlQueryModel;

    if (tRefCat!=0) delete tRefCat;

     tRefCat = new QSqlQueryModel;
     tRefCat->setQuery(
        "SELECT   id, name FROM         ref_commercial_categories ORDER BY ID"
         );

    if (tOpCat!=0) delete tOpCat;

    tOpCat=new QSqlTableModel();
    tOpCat->setTable(QSqlDatabase().driver()->escapeIdentifier("Sampled_Fishing_Operations_Categories",
        QSqlDriver::TableName));
    tOpCat->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tOpCat->sort(0,Qt::AscendingOrder);
    tOpCat->select();

    multiModelI=new MultiModelI(listCategories,tRefCat,tOpCat,"select count(id) from Sampled_catch WHERE (id_fishing_operation=:id)");
}

void FrmOperation::initUI()
{
    setHeader();

    this->groupDetails->setVisible(false);
    initPreviewTable(tableView,viewOperations);
    setButtonBox(buttonBox);
    setGroupDetails(groupDetails);
    setNewButton(pushNew);
    setEditButton(pushEdit);
    setRemoveButton(pushRemove);
    setNextButton(pushNext);
    setPreviousButton(pushPrevious);

    setUIPermissions();

    //initializing the container for the readonly!S
    m_lWidgets << spinOrder;
    m_lWidgets << cmbFishingZone;
    m_lWidgets << cmbGear;
    m_lWidgets << dtStart;
    m_lWidgets << dtEnd;
    m_lWidgets << timeStart;
    m_lWidgets << timeEnd;
    m_lWidgets << spinNoUnits;
    m_lWidgets << doubleSpinSize;
    m_lWidgets << catchInputCtrl;
    m_lWidgets << textComments;
    m_lWidgets << listCategories;
    m_lWidgets << pushClear;

    //pushNext->setEnabled(false);
}

void FrmOperation::initMapper1()
{
    emit blockCatchUISignals(true);

    if (m_mapperBinderPtr!=0) {delete m_mapperBinderPtr; m_mapperBinderPtr=0;}
    if (mapper1!=0) delete mapper1;
    mapper1= new QDataWidgetMapper(this);
    mapper1->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    if (tOperations==0) return;

    mapper1->setModel(tOperations);

    if (nullDellegate!=0) delete nullDellegate;
    QList<int> lOthers;
    for (int i=2; i < 17; ++i){
        lOthers << i;
    }
    lOthers << 18;
    QList<int> lText;
    lText << 17;
    nullDellegate=new NullRelationalDelegate(lOthers,lText);
    mapper1->setItemDelegate(nullDellegate);

    cmbFishingZone->setModel(tOperations->relationModel(16));
    cmbFishingZone->setModelColumn(
        tOperations->relationModel(16)->fieldIndex("Name"));

    cmbGear->setModel(tOperations->relationModel(2));
    cmbGear->setModelColumn(
        tOperations->relationModel(2)->fieldIndex("Name"));

    catchInputCtrl->pCmbWeightUnits()->setModel(tOperations->relationModel(5));
    catchInputCtrl->pCmbWeightUnits()->setModelColumn(
        tOperations->relationModel(5)->fieldIndex("Name"));

    catchInputCtrl->pCmbBoxUnits()->setModel(tOperations->relationModel(8));
    catchInputCtrl->pCmbBoxUnits()->setModelColumn(
        tOperations->relationModel(8)->fieldIndex("Name"));

    catchInputCtrl->pCmbUnitUnits()->setModel(tOperations->relationModel(12));
    catchInputCtrl->pCmbUnitUnits()->setModelColumn(
        tOperations->relationModel(12)->fieldIndex(tr("Name")));

    mapper1->addMapping(cmbGear, 2);
    mapper1->addMapping(catchInputCtrl->pDoubleSpinTotalE(), 3);
    mapper1->addMapping(catchInputCtrl->pDoubleSpinTotalC(), 4);
    mapper1->addMapping(catchInputCtrl->pCmbWeightUnits(), 5);
    mapper1->addMapping(catchInputCtrl->pDoubleSpinNoBoxesE(), 6);
    mapper1->addMapping(catchInputCtrl->pDoubleSpinNoBoxesC(), 7);
    mapper1->addMapping(catchInputCtrl->pCmbBoxUnits(), 8);
    mapper1->addMapping(catchInputCtrl->pDoubleSpinWeightBox(), 9);
    mapper1->addMapping(catchInputCtrl->pSpinUnitsE(), 10);
    mapper1->addMapping(catchInputCtrl->pSpinUnitsC(), 11);
    mapper1->addMapping(catchInputCtrl->pCmbUnitUnits(), 12);
    mapper1->addMapping(spinNoUnits, 13);
    mapper1->addMapping(doubleSpinSize, 14);
    mapper1->addMapping(spinOrder, 15);
    mapper1->addMapping(cmbFishingZone, 16);
    mapper1->addMapping(catchInputCtrl->pDoubleSpinWeightUnit(), 18);

    mapper1->addMapping(dtEnd, 19, QString("dateTime").toAscii());
    mapper1->addMapping(dtStart, 20, QString("dateTime").toAscii());
    mapper1->addMapping(timeEnd, 21, QString("time").toAscii());
    mapper1->addMapping(timeStart, 22, QString("time").toAscii());

    mapper1->addMapping(textComments,17);

    QList<QDataWidgetMapper*> lMapper;
    lMapper << mapper1;
    m_mapperBinderPtr=new MapperRuleBinder(m_ruleCheckerPtr, m_sample, lMapper, this->objectName());
    if (!initBinder(m_mapperBinderPtr))
        emit showError(tr("Could not init binder!"));

    emit blockCatchUISignals(false);
}

void FrmOperation::beforeShow()
{
    this->groupDetails->setVisible(false);

    setSourceText(lbSource,m_sample->bLogBook);
    initOperationModel();
}

bool FrmOperation::reallyApply()
{
        bool bError=false;

        if (!listCategories->selectionModel()->hasSelection()){
            emit showError(tr("You must select one or more commercial categories for this trip!"));
            bError=true;
        }else{
            if (mapper1->submit()){
                bError=!
                    tOperations->submitAll();
                    if (bError){
                        if (tOperations->lastError().type()!=QSqlError::NoError)
                            emit showError(tOperations->lastError().text());
                        else
                            emit showError(tr("Could not write operation in the database!"));
                    }else{
                        //Comiting Sampled_Fishing_Operations_Categories
                        QModelIndex idd=tOperations->index(tOperations->rowCount()-1,0);
                        multiModelI->setParentId(idd.data().toInt());
                        QString strError;
                        if (!multiModelI->list2Model(strError)){
                            emit showError(tr("Could not associate commercial categories to this fishing operation!"));
                            bError=true;
                        }

                    }
            }

            //}
        }
        //button->setEnabled(bError);
        buttonBox->button(QDialogButtonBox::Apply)->setEnabled(bError);

        emit lockControls(!bError,m_lWidgets);
        if (!bError){
            buttonBox->button(QDialogButtonBox::Apply)->hide();
        }else{
            buttonBox->button(QDialogButtonBox::Apply)->show();
        }

        if (!bError)
            return afterApply();

    return false;
}

void FrmOperation::uI4NewRecord()
{
    genericUI4NewRecord();

    textComments->clear();
    listCategories->clearSelection();

    if (cmbFishingZone->count())
        cmbFishingZone->setCurrentIndex(0);
    if (cmbGear->count())
        cmbGear->setCurrentIndex(0);
}

void FrmOperation::createRecord()
{
    emit blockCatchUISignals(true);

    genericCreateRecord();
    mapper1->toLast();

    while(tOperations->canFetchMore())
        tOperations->fetchMore();

    //Fields that we have to fill behind the scenes...
    QModelIndex idx=tOperations->index(tOperations->rowCount()-1,1);
    tOperations->setData(idx,m_sample->tripId);//id_fishing_trip

    uI4NewRecord();//init UI

    //signal for the rule checker default values
    emit addRecord();

    emit blockCatchUISignals(false);
}

void FrmOperation::initOperationModel()
{
    if (tOperations!=0) delete tOperations;

    tOperations=new QSqlRelationalTableModel();
    tOperations->setTable(QSqlDatabase().driver()->escapeIdentifier("sampled_fishing_operations",
        QSqlDriver::TableName));

    tOperations->setRelation(2, QSqlRelation("ref_gears", "id", "name"));
    tOperations->setRelation(5, QSqlRelation("ref_units", "id", "name"));
    tOperations->setRelation(8, QSqlRelation("ref_units", "id", "name"));
    tOperations->setRelation(12, QSqlRelation("ref_units", "id", "name"));
    tOperations->setRelation(16, QSqlRelation("ref_fishing_zones", "id", "name"));

    tOperations->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tOperations->sort(0,Qt::AscendingOrder);
    tOperations->select();

    setPreviewModel(tOperations);
}

void FrmOperation::filterModel4Combo()
{
    if (!m_sample) return;

    QSqlQuery query;
    QString strQuery;

    if (m_sample->tripId==-1){
            emit showError(tr("Could not identify the trip for this operation!"));
            return;
        }

    strQuery=
        "SELECT     id_fishing_gear"
        " FROM         sampled_fishing_trips_gears"
        " WHERE     (id_fishing_trip = " + QVariant(m_sample->tripId).toString() + ")";

    query.prepare(strQuery);
    if (!query.exec()){

        if (query.lastError().type()!=QSqlError::NoError){
                emit showError(query.lastError().text());
        }else emit showError(tr("Could not obtain filter for gears!"));

        return;
    }

    QString strFilter("");
    while (query.next()) {
        strFilter.append("id=" + query.value(0).toString());
        strFilter.append(" or ");
    }
    if (!strFilter.isEmpty())
        strFilter=strFilter.remove(strFilter.size()-QString(" or ").length(),QString(" or ").length());

    tOperations->relationModel(2)->setFilter(strFilter);

    strQuery=
        "SELECT     id_fishing_zone"
        " FROM         sampled_fishing_trips_zones"
        " WHERE     (id_fishing_trip = " + QVariant(m_sample->tripId).toString() + ")";

    query.prepare(strQuery);
    if (!query.exec()){

        if (query.lastError().type()!=QSqlError::NoError){
                emit showError(query.lastError().text());
        }else emit showError(tr("Could not obtain filter for Zones!"));

        return;
    }

    strFilter="";
    while (query.next()) {
        strFilter.append("id=" + query.value(0).toString());
        strFilter.append(" or ");
    }
    if (!strFilter.isEmpty())
        strFilter=strFilter.remove(strFilter.size()-QString(" or ").length(),QString(" or ").length());

    tOperations->relationModel(16)->setFilter(strFilter);

    initMapper1();
}

bool FrmOperation::getNextLabel(QString& strLabel)
{
    if (!tableView->selectionModel()->hasSelection())
        return false;

    //sending the name
    QModelIndex idx=viewOperations->index(tableView->selectionModel()->currentIndex().row(),3);
    strLabel=idx.data().toString();
    return true;
}

void FrmOperation::editFinished()
{
    setPreviewQuery();
    pushEdit->setChecked(false);
    pushNew->setEnabled(!pushEdit->isChecked());
    pushRemove->setEnabled(!pushEdit->isChecked());
    emit lockControls(true,m_lWidgets);
}

void FrmOperation::onEditLeave(const bool bFinished, const bool bDiscarded)
{
    if (bFinished){
        editFinished();
    }
}

bool FrmOperation::applyChanges()
{
    bool bError=false;

    if (!listCategories->selectionModel()->hasSelection()){
        emit showError(tr("You must select one or more categories for this operation!"));
        bError=true;
    }else{

        /*TODO: PUT THIS BACK!
        QString strError;
        if (!checkDependantDates(tOperations->tableName(), customDtStart->dateTime(),
            customDtEnd->dateTime(),tOperations->tableName(),m_sample->operationId, strError))
        {
            emit showError(strError);
            bError=true;
        }else{*/

                if (!bError){
                    int cur= mapper1->currentIndex();
                    bError=!submitMapperAndModel(mapper1);
                    if (!bError){
                        mapper1->setCurrentIndex(cur);

                        //Comiting Sampled_Fishing_Operations_Categories
                        if (tOperations->rowCount()!=1) return false;

                        QModelIndex idd=tOperations->index(0,0);
                        multiModelI->setParentId(idd.data().toInt());
                        QString strError;
				if (!multiModelI->list2Model(strError,false)){
				    emit showError(strError);
				    bError=true;
				}
			}
		}//bError			
//        }//check dependant dates
    }//list categories
    if (!bError) emit editLeave(true,false);
    return !bError;
}
