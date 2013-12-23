#include <QTest>
//#include "globaldefs.h"
#include "frmtrip.h"

FrmTrip::FrmTrip(RoleDef* inRoleDef, Sample* inSample, RuleChecker* ruleCheckerPtr, QWidget *parent, Qt::WFlags flags):
PreviewTab(5,inRoleDef,inSample, tr("Fishing Trip"), ruleCheckerPtr, parent, flags){

    setupUi(this);

    installEventFilters();

    connect(pushNext, SIGNAL(clicked()), this,
    SLOT(next()));

    connect(pushPrevious, SIGNAL(clicked()), this,
    SLOT(goBack()));

    connect(this, SIGNAL(blockCatchUISignals(const bool)), catchInputCtrl,
    SIGNAL(blockWidgetsSignals(const bool)));

    tTrips=0;
    tRefGears=0;
    tTripGears=0;
    tRefZones=0;
    tTripZones=0;
    viewTrips=0;
    mapper1=0;
    multiModelI=0;
    multiModelI2=0;
    nullDelegate=0;

    initModels();
    initUI();
}

FrmTrip::~FrmTrip()
{
    if (tTrips!=0) delete tTrips;
    if (tRefGears!=0) delete tRefGears;
    if (tTripGears!=0) delete tTripGears;
    if (tRefZones!=0) delete tRefZones;
    if (tTripZones!=0) delete tTripZones;
    if (viewTrips!=0) delete viewTrips;
    if (nullDelegate!=0) delete nullDelegate;
    if (mapper1!=0) delete mapper1;
    if (multiModelI!=0) delete multiModelI;
    if (multiModelI2!=0) delete multiModelI2;
}

void FrmTrip::initHelpIds()
{
    m_widgetInfo.insert(tableView,"Medfisis::Enter_the_Fishing_Trip");
    m_widgetInfo.insert(groupDetails,"Medfisis::Sub-form_Fishing_TripDetails");
    m_widgetInfo.insert(spinProf,"Medfisis::professional_fishermen");
    m_widgetInfo.insert(spinPart,"Medfisis::part-time_fishermen");
}

void FrmTrip::onItemSelection()
{
    pushNext->setEnabled(tableView->selectionModel()->hasSelection());
    pushPrevious->setEnabled(tableView->selectionModel()->hasSelection());
}

void FrmTrip::previewRow(QModelIndex index)
{
    emit blockCatchUISignals(true);

    QModelIndex idx=viewTrips->index(index.row(),0);
    if (!idx.isValid()){
        emit showError (tr("Could not preview this trip!"));
        return;
    }

    updateSample(idx);

    if (!abstractPreviewRow(index)){
        qDebug() << tr("Record discarded!") << endl;
        //emit showError (tr("Could not preview this record!"));
    }else{

        int intId=idx.data().toInt();//for the MultiModelI

        mapper1->toLast();

        //preview record on the listView
        multiModelI->setParentId(intId);
        multiModelI->model2List("id_fishing_trip");

        //preview record on the listView
        multiModelI2->setParentId(intId);
        multiModelI2->model2List("id_fishing_trip");
    }

    emit blockCatchUISignals(true);
}

void FrmTrip::setPreviewQuery()
{
    //TODO: REVIEW THIS; the idea is to compare the time with Unix time 0 ('allballs'::time); if it is the case, than we don't have a valid time
    // for this record, and we just assigned it as 'missing';
    if (m_sample==0) return;
    QString strQuery=
            "select     sampled_fishing_trips.id, ref_samplers.name as sampler, to_char(start_dt, 'DD/Mon/YYYY') as \"start date\",  to_char(end_dt, 'DD/Mon/YYYY') as \"end date\",  "
            "            case when"
            "            (select start_time)=(select 'allballs'::time)"
            "            then 'missing' else  "
            "            to_char(start_time, 'hh:mm:ss') end \"start time\","
            "        case when"
            "            (select end_time)=(select 'allballs'::time)"
            "            then 'missing' else  "
            "            to_char(end_time, 'hh:mm:ss') end \"end time\""
            "        from         sampled_fishing_trips inner join"
            "             ref_samplers on sampled_fishing_trips.id_sampler = ref_samplers.id "
            "where     (sampled_fishing_trips.id_abstract_sampled_vessels = :id) order by id desc"
    ;

    QSqlQuery query;
    query.prepare( strQuery );
    query.bindValue(0,m_sample->sampVesselId);
    if (!query.exec()){
        emit showError(tr("Could not obtain filter for Sampled Fishing Trips!"));
        return;
    }

    viewTrips->setQuery(query);

    tableView->hideColumn(0);
    resizeToVisibleColumns(tableView);
}

void FrmTrip::initModels()
{
    if (viewTrips!=0) delete viewTrips;
    viewTrips = new QSqlQueryModel;

    viewTrips->setHeaderData(0, Qt::Horizontal, tr("Sampler"));
    viewTrips->setHeaderData(1, Qt::Horizontal, tr("Start Date"));
    viewTrips->setHeaderData(2, Qt::Horizontal, tr("Start Time"));
    viewTrips->setHeaderData(3, Qt::Horizontal, tr("End Date"));
    viewTrips->setHeaderData(4, Qt::Horizontal, tr("End Time"));

    if (tRefGears!=0) delete tRefGears;

     tRefGears = new QSqlQueryModel;
     tRefGears->setQuery(
        "SELECT     id, name"
        " FROM         ref_gears ORDER BY ID ASC"
         );

    if (tTripGears!=0) delete tTripGears;

    tTripGears=new QSqlTableModel();
    tTripGears->setTable(QSqlDatabase().driver()->escapeIdentifier("sampled_fishing_trips_gears",
        QSqlDriver::TableName));
    tTripGears->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tTripGears->sort(0,Qt::AscendingOrder);
    tTripGears->select();

    QString strDep="select count(id) from sampled_fishing_operations WHERE (id_fishing_trip=:id)";

     multiModelI=new MultiModelI(listGears,tRefGears,tTripGears,
         strDep);

    if (tRefZones!=0) delete tRefZones;

     tRefZones = new QSqlQueryModel;
     tRefZones->setQuery(
        "SELECT     id, name"
        " FROM         ref_fishing_zones ORDER BY ID ASC"
         );

    if (tTripZones!=0) delete tTripZones;

    tTripZones=new QSqlTableModel();
    tTripZones->setTable(QSqlDatabase().driver()->escapeIdentifier("sampled_fishing_trips_zones",
        QSqlDriver::TableName));
    tTripZones->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tTripZones->sort(0,Qt::AscendingOrder);
    tTripZones->select();

     multiModelI2=new MultiModelI(listZones,tRefZones,tTripZones,
         strDep);
}

void FrmTrip::initUI()
{
    setHeader();

    this->groupDetails->setVisible(false);
    initPreviewTable(tableView,viewTrips);
    setButtonBox(buttonBox);
    setGroupDetails(groupDetails);
    setNewButton(pushNew);
    setEditButton(pushEdit);
    setRemoveButton(pushRemove);
    setNextButton(pushNext);
    setPreviousButton(pushPrevious);

    setUIPermissions();

    //initializing the container for the readonly!S
    m_lWidgets << cmbSampler;
    m_lWidgets << spinProf;
    m_lWidgets << spinPart;
    m_lWidgets << dtStart;
    m_lWidgets << timeStart;
    m_lWidgets << dtEnd;
    m_lWidgets << timeEnd;
    m_lWidgets << catchInputCtrl;
    m_lWidgets << textComments;
    m_lWidgets << spinNOE;
    m_lWidgets << listGears;
    m_lWidgets << listZones;
    m_lWidgets << cmbSite;
    m_lWidgets << pushClear;
}

void FrmTrip::initMapper1()
{
    emit blockCatchUISignals(true);

    if (m_mapperBinderPtr!=0) {delete m_mapperBinderPtr; m_mapperBinderPtr=0;}
    if (mapper1!=0) delete mapper1;
    mapper1= new QDataWidgetMapper(this);
    mapper1->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    if (tTrips==0) return;

    mapper1->setModel(tTrips);

    if (nullDellegate!=0) delete nullDellegate;

    QList<int> lOthers;
    QList<int> lText;
    for (int i=4; i < 22; ++i){
        if (i!=16)
            lOthers << i;
        else
            lText << i;
    }

    nullDellegate=new NullRelationalDelegate(lOthers,lText);
    mapper1->setItemDelegate(nullDellegate);

    cmbSite->setModel(tTrips->relationModel(4));
    cmbSite->setModelColumn(
        tTrips->relationModel(4)->fieldIndex("name"));

    cmbSampler->setModel(tTrips->relationModel(5));
    cmbSampler->setModelColumn(
        tTrips->relationModel(5)->fieldIndex("name"));

    catchInputCtrl->pCmbWeightUnits()->setModel(tTrips->relationModel(12));
    catchInputCtrl->pCmbWeightUnits()->setModelColumn(
        tTrips->relationModel(12)->fieldIndex("name"));

    catchInputCtrl->pCmbBoxUnits()->setModel(tTrips->relationModel(15));
    catchInputCtrl->pCmbBoxUnits()->setModelColumn(
        tTrips->relationModel(15)->fieldIndex("name"));

    catchInputCtrl->pCmbUnitUnits()->setModel(tTrips->relationModel(20));
    catchInputCtrl->pCmbUnitUnits()->setModelColumn(
        tTrips->relationModel(20)->fieldIndex("name"));

    mapper1->addMapping(cmbSite, 4);
    mapper1->addMapping(cmbSampler, 5);
    mapper1->addMapping(spinProf, 6);
    mapper1->addMapping(spinPart, 7);

    mapper1->addMapping(spinNOE, 8);
    mapper1->addMapping(spinNOC, 9);

    mapper1->addMapping(catchInputCtrl->pDoubleSpinTotalE(), 10);
    mapper1->addMapping(catchInputCtrl->pDoubleSpinTotalC(), 11);
    mapper1->addMapping(catchInputCtrl->pCmbWeightUnits(), 12);
    mapper1->addMapping(catchInputCtrl->pDoubleSpinNoBoxesE(), 13);
    mapper1->addMapping(catchInputCtrl->pDoubleSpinNoBoxesC(), 14);
    mapper1->addMapping(catchInputCtrl->pCmbBoxUnits(), 15);
    mapper1->addMapping(textComments,16);
    mapper1->addMapping(catchInputCtrl->pDoubleSpinWeightBox(), 17);
    mapper1->addMapping(catchInputCtrl->pSpinUnitsE(), 18);
    mapper1->addMapping(catchInputCtrl->pDoubleSpinWeightUnit(), 19);
    mapper1->addMapping(catchInputCtrl->pCmbUnitUnits(), 20);
    mapper1->addMapping(catchInputCtrl->pSpinUnitsC(), 21);

    mapper1->addMapping(dtStart, 22);
    mapper1->addMapping(timeStart, 23);
    mapper1->addMapping(dtEnd, 24);
    mapper1->addMapping(timeEnd, 25);

    QList<QDataWidgetMapper*> lMapper;
    lMapper << mapper1;
    m_mapperBinderPtr=new MapperRuleBinder(m_ruleCheckerPtr, m_sample, lMapper, this->objectName());
    if (!initBinder(m_mapperBinderPtr))
        emit showError(tr("Could not init binder!"));

    emit blockCatchUISignals(false);
}

void FrmTrip::beforeShow()
{
    this->groupDetails->setVisible(false);
    if (m_sample->bLogBook)
        m_lWidgets << cmbSite;

    setSourceText(lbSource,m_sample->bLogBook);
    initTripModel();

}

bool FrmTrip::reallyApply()
{
    bool bError=false;

    if (!listZones->selectionModel()->hasSelection()){
        emit showError(tr("You must select one or more zones for this trip!"));
        bError=true;
    }else{

        if (!listGears->selectionModel()->hasSelection()){
            emit showError(tr("You must select one or more gears for this trip!"));
            bError=true;
        }else{

            if (mapper1->submit()){
                bError=!
                        tTrips->submitAll();
                if (bError){
                        if (tTrips->lastError().type()!=QSqlError::NoError)
                            emit showError(tTrips->lastError().text());
                        else
                            emit showError(tr("Could not write trip in the database!"));
                }else{
                    QModelIndex idd=tTrips->index(tTrips->rowCount()-1,0);

                    //multimodel for gears
                    multiModelI->setParentId(idd.data().toInt());
                    QString strError;
                    if (!multiModelI->list2Model(strError)){
                        emit showError(strError);
                        bError=true;
                    }
                    //multimodel for zones
                    multiModelI2->setParentId(idd.data().toInt());
                    if (!multiModelI2->list2Model(strError)){
                        emit showError(strError);
                        bError=true;
                    }

                }
            }
        }
    }
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

void FrmTrip::uI4NewRecord()
{
    genericUI4NewRecord();

    textComments->clear();
    listGears->clearSelection();
    listZones->clearSelection();

    if (cmbSampler->count()> 0) cmbSampler->setCurrentIndex(0);
    if (cmbSite->count()> 0) cmbSite->setCurrentIndex(0);
}

void FrmTrip::createRecord()
{
    //block the signals while introducing record, so we dont have to validate the units mismatch
    emit blockCatchUISignals(true);

    genericCreateRecord();
    mapper1->toLast();

    while(tTrips->canFetchMore())
        tTrips->fetchMore();

    //Fields that we have to fill behind the scenes...
    QModelIndex idx=tTrips->index(tTrips->rowCount()-1,1);
    tTrips->setData(idx,m_sample->sampVesselId);//id_abstract_sampled_vessels

    //TODO: on sample fill the abstract landing site
    if (!m_sample->bLogBook){
        cmbSite->setCurrentIndex(0);
        cmbSite->setEnabled(false);
    }

    tTripGears->setFilter("");

    uI4NewRecord();//init UI

    //signal for the rule checker default values
    emit addRecord();

    emit blockCatchUISignals(false);
}

void FrmTrip::initTripModel()
{
    if (tTrips!=0) delete tTrips;

    tTrips=new QSqlRelationalTableModel();
    tTrips->setTable(QSqlDatabase().driver()->escapeIdentifier("sampled_fishing_trips",
        QSqlDriver::TableName));

    tTrips->setRelation(4, QSqlRelation("ref_abstract_landingsite", "id", "name"));
    tTrips->setRelation(5, QSqlRelation("ref_samplers", "id", "name"));
    tTrips->setRelation(12, QSqlRelation("ref_units", "id", "name"));
    tTrips->setRelation(15, QSqlRelation("ref_units", "id", "name"));
    tTrips->setRelation(20, QSqlRelation("ref_units", "id", "name"));
    tTrips->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tTrips->sort(0,Qt::AscendingOrder);
    tTrips->select();

    setPreviewModel(tTrips);
}

void FrmTrip::filterModel4Combo()
{
    if (!m_sample) return;

    QSqlQuery query;
    QString strQuery, strFilter;

    if (m_sample->bLogBook){

        if (m_sample->minorStrataId==-1){
            emit showError(tr("Could not identify the stratum of this frame!"));
            return;
        }

        strQuery=
            "select     ref_abstract_landingsite.id"
                    " from         ref_minor_strata inner join"
                    "                      fr_time on ref_minor_strata.id_frame_time = fr_time.id inner join"
                    "                      fr_frame on fr_time.id_frame = fr_frame.id inner join"
                    "                      fr_sub_frame on fr_frame.id = fr_sub_frame.id_frame inner join"
                    "                      fr_gls2als on fr_sub_frame.id = fr_gls2als.id_sub_frame inner join"
                    "                      ref_abstract_landingsite on fr_gls2als.id_abstract_landingsite = ref_abstract_landingsite.id"
                " where     (ref_minor_strata.id ="  + QVariant(m_sample->minorStrataId).toString() +  ") and (fr_gls2als.id_gls ="
                    "                  (select     id_gls"
                    "                    from          ref_minor_strata as ref_minor_strata_1"
                "                    where      (id ="  + QVariant(m_sample->minorStrataId).toString() + ")))"
        ;//for getting all the boats on the frame, just remove the last condition

        query.prepare(strQuery);
        if (!query.exec()){
            emit showError(tr("Could not obtain filter for Landing Sites!"));
        return;
        }

        QString strFilter("");
        while (query.next()) {
            strFilter.append("id=" + query.value(0).toString());
            strFilter.append(" or ");
        }
        if (!strFilter.isEmpty())
            strFilter=strFilter.remove(strFilter.size()-QString(" or ").length(),QString(" or ").length());

        tTrips->relationModel(4)->setFilter(strFilter);

    }else{

        strQuery=
        "SELECT     id_abstract_landingsite"
        " FROM         sampled_cell"
        " WHERE     (id = :id)"
        ;

        query.prepare(strQuery);

        if (m_sample->cellId==-1){
            emit showError(tr("There is a problem with the type of this frame!"));
            return;
        }
        query.bindValue(0,m_sample->cellId);

        if (!query.exec() || query.numRowsAffected()!=1){
            emit showError(tr("Could not obtain filter for landing sites!"));
            return;
        }

        query.first();
        strFilter.append("id=" + query.value(0).toString());

        if (!strFilter.isEmpty()){
            tTrips->relationModel(4)->setFilter(strFilter);
        }

    }

    initMapper1();
}

bool FrmTrip::getNextLabel(QString& strLabel)
{
    if (!tableView->selectionModel()->hasSelection())
        return false;

    //sending the name
    QModelIndex idx=viewTrips->index(tableView->selectionModel()->currentIndex().row(),2);//startdate
    strLabel=idx.data().toString();
    return true;
}

void FrmTrip::editFinished()
{
    setPreviewQuery();
    pushEdit->setChecked(false);
    pushNew->setEnabled(!pushEdit->isChecked());
    pushRemove->setEnabled(!pushEdit->isChecked());
    emit lockControls(true,m_lWidgets);
}

void FrmTrip::onEditLeave(const bool bFinished, const bool bDiscarded)
{
    if (bFinished){
        editFinished();
    }
}

bool FrmTrip::applyChanges()
{
    bool bError=false;

    if (!listZones->selectionModel()->hasSelection()){
        emit showError(tr("You must select one or more zones for this trip!"));
        bError=true;
    }else{

        if (!listGears->selectionModel()->hasSelection()){
            emit showError(tr("You must select one or more gears for this trip!"));
            bError=true;
        }else{
/*
            QString strError; //TODO: PORT THIS LATER
            if (!checkDependantDates(tTrips->tableName(), customDtStart->dateTime(),
                customDtEnd->dateTime(),tTrips->tableName(),m_sample->tripId, strError))
            {
                emit showError(strError);
                bError=true;
            }else{
*/
                    int cur= mapper1->currentIndex();
                    bError=!submitMapperAndModel(mapper1);
                    if (!bError){
                        mapper1->setCurrentIndex(cur);

                        if (tTrips->rowCount()!=1) return false;
                        QModelIndex idd=tTrips->index(0,0);

                        //Comiting Sampled_Fishing_Trips_Gears
                        multiModelI->setParentId(idd.data().toInt());
                        QString strError;
                        if (!multiModelI->list2Model(strError,false)){
                            emit showError(strError);
                            bError=true;
                        }

                        //Comiting Sampled_Fishing_Trips_Zones
                        multiModelI2->setParentId(idd.data().toInt());
                        if (!multiModelI2->list2Model(strError,false)){
                            emit showError(strError);
                            bError=true;
                        }

                    }// mapper 1 submission
                //} else emit showError(tr("Could not edit dates in the database!"));
            //}//check dependant dates
        }//if list gears has selection
    }//if list zones has selection

    if (!bError) emit editLeave(true,false);
    return !bError;
}

