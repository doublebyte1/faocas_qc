#include <QTest>
#include "globaldefs.h"
#include "frmvessel.h"

FrmVessel::FrmVessel(RoleDef* inRoleDef, Sample* inSample, RuleChecker* ruleCheckerPtr, QWidget *parent, Qt::WFlags flags):
PreviewTab(4,inRoleDef,inSample,tr("Vessel"),ruleCheckerPtr,parent,flags){

    setupUi(this);

    installEventFilters();

    connect(pushNext, SIGNAL(clicked()), this,
    SLOT(next()));

    connect(pushPrevious, SIGNAL(clicked()), this,
    SLOT(goBack()));

    tAVessel=0;
    tCellVessels=0;
    tStrataVessels=0;
    viewVessel=0;
    mapper1=0;
    mapper2=0;
    nullDelegate=0;

    initModels();
    initUI();
    initMappers();

}

FrmVessel::~FrmVessel()
{
    if (tAVessel!=0) delete tAVessel;
    if (viewVessel!=0) delete viewVessel;
    if (nullDelegate!=0) delete nullDelegate;
    if (mapper1!=0) delete mapper1;
    if (mapper2!=0) delete mapper2;
    if (tCellVessels!=0) delete tCellVessels;
    if (tStrataVessels!=0) delete tStrataVessels;
}

void FrmVessel::initHelpIds()
{
    m_widgetInfo.insert(cmbVessel,"Medfisis::Identify_the_Vessel");
    m_widgetInfo.insert(groupDetails,"Medfisis::Sub-form_VesselDetails");
    m_widgetInfo.insert(cmbOrigin,"Medfisis::sample_origin");
    m_widgetInfo.insert(cmbStatus,"Medfisis::sample_status");
}

void FrmVessel::onItemSelection()
{
    pushNext->setEnabled(tableView->selectionModel()->hasSelection());
    pushPrevious->setEnabled(tableView->selectionModel()->hasSelection());

}

bool FrmVessel::filterSampledCellVessels(QModelIndex index)
{
    //id_Sampled_Cell_Vessels
    QModelIndex idx=viewVessel->index(index.row(),3);
    if (!idx.isValid()){
        emit showError (tr("Could not preview this vessel!"));
        return false;
    }

    QString id=idx.data().toString();

    tCellVessels->setFilter("ID="+id);
    if (tCellVessels->rowCount()!=1){
        emit showError (tr("Could not preview this vessel!"));
        return false;
    }

    return true;
}

void FrmVessel::previewRow(QModelIndex index)
{
    QModelIndex idx=this->viewVessel->index(index.row(),0);
    if (!idx.isValid()){
        emit showError (tr("Could not preview this cell!"));
        return;
    }

    updateSample(idx);

    if (!abstractPreviewRow(index)){
        //emit showError (tr("Could not preview this record!"));
        qDebug() << tr("Record discarded!") << endl;
    }else{
        mapper1->toLast();

        if (!m_sample->bLogBook){
            if (!filterSampledCellVessels(index)){
                emit showError (tr("Could not preview this record!"));
            }else{
                mapper2->toLast();
            }
        }
    }
}

void FrmVessel::setPreviewQuery()
{
    if (m_sample==0) return;
    QString strQuery;
    int id;
    if (m_sample->bLogBook){//logbook

        strQuery=
        "select     abstract_sampled_vessels.id, ref_vessels.name as \"vessel name\", ref_sample_status.name as status"
        " from         abstract_sampled_vessels inner join"
        "		      ref_vessels on abstract_sampled_vessels.vesselid = ref_vessels.vesselid inner join"
        "		      sampled_strata_vessels on abstract_sampled_vessels.id_sampled_strata_vessels = sampled_strata_vessels.id inner join"
        "		      ref_sample_status on abstract_sampled_vessels.id_sample_status = ref_sample_status.id"
        "		      where     (sampled_strata_vessels.id_minor_strata = :id)"
        "		      order by abstract_sampled_vessels.id desc"
        ;
        id=m_sample->minorStrataId;

    } else{//sampling
        strQuery=
        "select     abstract_sampled_vessels.id, ref_vessels.name as \"vessel name\", ref_sample_status.name as status, id_sampled_cell_vessels"
         " from         abstract_sampled_vessels inner join"
         "                    sampled_cell_vessels on abstract_sampled_vessels.id_sampled_cell_vessels = sampled_cell_vessels.id inner join"
         "                    ref_vessels on abstract_sampled_vessels.vesselid = ref_vessels.vesselid inner join"
         "                    ref_sample_status on abstract_sampled_vessels.id_sample_status = ref_sample_status.id"
         "            where     (sampled_cell_vessels.id_cell_vessel_types = :id)"
         "                     order by abstract_sampled_vessels.id desc"
         ;
        id=m_sample->vesselTypeId;
    }

    QSqlQuery query;
    query.prepare( strQuery );
    query.bindValue(0,id);
    if (!query.exec()){
        emit showError(tr("Could not obtain filter for Vessels!"));
        return;
    }

    viewVessel->setQuery(query);

    tableView->hideColumn(0);
    tableView->hideColumn(3);
    resizeToVisibleColumns(tableView);
}

void FrmVessel::initModels()
{
    if (viewVessel!=0) delete viewVessel;
    viewVessel = new QSqlQueryModel;

    if (tCellVessels!=0) delete tCellVessels;

    //two mappers to implement the polymorphism of abstract sampled vessels

     tCellVessels = new QSqlTableModel;
     tCellVessels->setTable("Sampled_Cell_Vessels");
     tCellVessels->setEditStrategy(QSqlTableModel::OnManualSubmit);
     tCellVessels->sort(0,Qt::AscendingOrder);
     tCellVessels->select();

    if (tStrataVessels!=0) delete tStrataVessels;

     tStrataVessels = new QSqlTableModel;
     tStrataVessels->setTable("Sampled_Strata_Vessels");
     tStrataVessels->setEditStrategy(QSqlTableModel::OnManualSubmit);
     tStrataVessels->sort(0,Qt::AscendingOrder);
     tStrataVessels->select();

}

void FrmVessel::initUI()
{
    setHeader();

    this->groupDetails->setVisible(false);
    setGroupDetails(groupDetails);
    setButtonBox(buttonBox);
    initPreviewTable(tableView,viewVessel);
    setNewButton(pushNew);
    setEditButton(pushEdit);
    setRemoveButton(pushRemove);
    setNextButton(pushNext);
    setPreviousButton(pushPrevious);

    //initializing the container for the readonly!S
    m_lWidgets << cmbVessel;
    m_lWidgets << cmbStatus;
    m_lWidgets << cmbOrigin;
    m_lWidgets << textComments;
    m_lWidgets << spinET;
    //m_lWidgets << spinCT;

    //pushNext->setEnabled(false);

    setUIPermissions();
}

void FrmVessel::initMapper1()
{
    if (m_mapperBinderPtr!=0) {delete m_mapperBinderPtr; m_mapperBinderPtr=0;}
    if (mapper1!=0) delete mapper1;
    mapper1= new QDataWidgetMapper(this);
    mapper1->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    if (tAVessel==0) return;

    mapper1->setModel(tAVessel);

    if (nullDellegate!=0) delete nullDellegate;
    QList<int> lOthers;
    lOthers << 2 << 3 << 4 << 5 << 6;
    QList<int> lText;
    lText << 7;
    nullDellegate=new NullRelationalDelegate(lOthers,lText);
    mapper1->setItemDelegate(nullDellegate);

    cmbVessel->setModel(tAVessel->relationModel(2));
    cmbVessel->setModelColumn(
        tAVessel->relationModel(2)->fieldIndex("name"));

    cmbOrigin->setModel(tAVessel->relationModel(3));
    cmbOrigin->setModelColumn(
        tAVessel->relationModel(3)->fieldIndex("name"));

    cmbStatus->setModel(tAVessel->relationModel(4));
    cmbStatus->setModelColumn(
        tAVessel->relationModel(4)->fieldIndex("name"));

    mapper1->addMapping(cmbVessel, 2);
    mapper1->addMapping(cmbOrigin, 3);
    mapper1->addMapping(cmbStatus, 4);
    mapper1->addMapping(textComments,7);

    QList<QDataWidgetMapper*> lMapper;
    lMapper << mapper1 << mapper2;
    m_mapperBinderPtr=new MapperRuleBinder(m_ruleCheckerPtr, m_sample, lMapper, this->objectName());
    if (!initBinder(m_mapperBinderPtr))
        emit showError(tr("Could not init binder!"));
}

void FrmVessel::initMappers()
{
    //mapper for the stuff on Sampled cell Vessels
    if (mapper2!=0) delete mapper2;
    mapper2= new QDataWidgetMapper(this);
    mapper2->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    mapper2->setModel(tCellVessels);
    mapper2->addMapping(spinET, 2);
    mapper2->addMapping(spinCT, 3);
    mapper2->toLast();
}

void FrmVessel::beforeShow()
{
    this->groupDetails->setVisible(false);
    this->groupFT->setVisible(!m_sample->bLogBook);
    setSourceText(lbSource,m_sample->bLogBook);
    initVesselModel();
}

bool FrmVessel::comitNonAbstractVessels(const bool bLogbook, int& id_Sampled_Cell_Vessels, int& id_Sampled_Strata_Vessels)
{
    QSqlQuery query;

    if (bLogbook)
    {
        query.prepare( "SELECT     id FROM sampled_cell_vessels WHERE id_cell_vessel_types="
                       " (SELECT id FROM         sampled_cell_vessel_types"
                       " WHERE     (comments = 'n/a'))" );//n.b.: when there are no names, we rely on the comment..

        if (!query.exec() || query.numRowsAffected()!=1){
            emit showError(tr("Could not create a non abstract record for this vessel (logbook)!"));
            return false;
        }
        query.first();
        id_Sampled_Cell_Vessels=query.value(0).toInt();
        return comitStrataVessels(id_Sampled_Strata_Vessels);
    }else{
        query.prepare( "SELECT     id FROM sampled_strata_vessels WHERE id_minor_strata="
                       "( SELECT ID FROM         ref_minor_strata"
                       " WHERE     (name = 'n/a') )" );

        if (!query.exec() || query.numRowsAffected()!=1){
            emit showError(tr("Could not create a non abstract record for this vessel (sampled)!"));
            return false;
        }
        query.first();
        id_Sampled_Strata_Vessels=query.value(0).toInt();
        return comitCellVessels(id_Sampled_Cell_Vessels);
    }

    return true;
}

bool FrmVessel::comitCellVessels(int& id)
{
    while(tCellVessels->canFetchMore())
        tCellVessels->fetchMore();

    //We dont need to introduce a record here, cause it has been done with the map
    QModelIndex idx=tCellVessels->index(tCellVessels->rowCount()-1,1);
    if (!idx.isValid()) return false;
    tCellVessels->setData(idx,m_sample->vesselTypeId);

    //submit
    if (!mapper2->submit()) return false;
    if (!tCellVessels->submitAll()) return false;

    //and get the id
    idx=tCellVessels->index(tCellVessels->rowCount()-1,0);
    if (!idx.isValid()) return false;
    id=idx.data().toInt();

    return true;
}

bool FrmVessel::comitStrataVessels(int& id)
{
    insertRecordIntoModel(tStrataVessels);

    while(tStrataVessels->canFetchMore())
        tStrataVessels->fetchMore();

    QModelIndex idx=tStrataVessels->index(tStrataVessels->rowCount()-1,1);
    if (!idx.isValid()) return false;
    tStrataVessels->setData(idx,m_sample->minorStrataId);

    if (!tStrataVessels->submitAll()) return false;

    idx=tStrataVessels->index(tStrataVessels->rowCount()-1,0);
    id=idx.data().toInt();

    return true;
}

bool FrmVessel::reallyApply()
{
    bool bError=false;

    if (mapper1->submit()){

        //setting the vessel source
        QSqlQuery query;
        query.prepare( "SELECT     id"
                       " FROM         ref_source"
                       " WHERE     (name = :name)");
        query.bindValue(0,qApp->translate("frame", (m_sample->bLogBook? strLogbook: strSampling) ));

        if (!query.exec() || query.numRowsAffected()!=1){
            emit showError(tr("Could not obtain filter for Vessels!"));
            return false;
        }
        query.first();

        while(tAVessel->canFetchMore())
            tAVessel->fetchMore();

        QModelIndex idx=tAVessel->index(tAVessel->rowCount()-1,1);
        if (!idx.isValid()){
            emit showError(tr("Could not create a record for this vessel!"));
            return false;
        }

        tAVessel->setData(idx,query.value(0).toInt());

        int id_cell, id_strata;
        if (!comitNonAbstractVessels(m_sample->bLogBook,id_cell,id_strata))
        {
            if (tCellVessels->lastError().type()!=QSqlError::NoError)
                emit showError(tCellVessels->lastError().text());
            else if (tStrataVessels->lastError().type()!=QSqlError::NoError)
                emit showError(tStrataVessels->lastError().text());
            bError=true;
        }else{

            //commit sampled cell vessels
            QModelIndex idx=tAVessel->index(tAVessel->rowCount()-1,5);
            if (!idx.isValid()) return false;
            tAVessel->setData(idx,id_cell);
            //commit sampled strata vessels
            idx=tAVessel->index(tAVessel->rowCount()-1,6);
            if (!idx.isValid()) return false;
            tAVessel->setData(idx,id_strata);

            //comiting abstract sampled vessels
            bError=!
                tAVessel->submitAll();
            if (bError){
                if (tAVessel->lastError().type()!=QSqlError::NoError)
                    emit showError(tAVessel->lastError().text());
                else
                    emit showError(tr("Could not write cell in the database!"));
            }
        }
    }

    buttonBox->button(QDialogButtonBox::Apply)->setEnabled(bError);

    emit lockControls(!bError,m_lWidgets);
    buttonBox->button(QDialogButtonBox::Apply)->setVisible(!bError);

    if (!bError){
        mapper1->toLast();
        mapper2->toLast();
        return afterApply();
    }

    return false;
}

void FrmVessel::uI4NewRecord()
{
    genericUI4NewRecord();

    textComments->clear();

    //if there are records, defaults for the first one
    if (cmbVessel->count()>0)
        cmbVessel->setCurrentIndex(0);
}

void FrmVessel::createRecord()
{
    genericCreateRecord();
    mapper1->toLast();

    if (!m_sample->bLogBook){
        if (tCellVessels==0) return;
        if (mapper2==0) return;

        insertRecordIntoModel(tCellVessels);
        mapper2->toLast();
    }

    uI4NewRecord();//init UI*/

    //signal for the rule checker default values
    emit addRecord();
}

void FrmVessel::initVesselModel()
{
    if (tAVessel!=0) delete tAVessel;

    tAVessel=new QSqlRelationalTableModel();
    tAVessel->setTable(QSqlDatabase().driver()->escapeIdentifier("Abstract_Sampled_Vessels",
        QSqlDriver::TableName));
    tAVessel->setRelation(2, QSqlRelation("ref_vessels", "vesselid", "name"));
    tAVessel->setRelation(3, QSqlRelation("ref_sample_origin", "id", "name"));
    tAVessel->setRelation(4, QSqlRelation("ref_sample_status", "id", "name"));
    tAVessel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tAVessel->sort(0,Qt::AscendingOrder);
    tAVessel->select();

    setPreviewModel(tAVessel);
}

void FrmVessel::filterModel4Combo()
{
    QSqlQuery query;
    QString strQuery;

    if (!m_sample->bLogBook){

        strQuery =
                "select     ref_vessels.vesselid "
                "         from         fr_als2vessel inner join"
                "                              ref_vessels on fr_als2vessel.vesselid = ref_vessels.vesselid"
                "         where     (fr_als2vessel.id_sub_frame ="
                "                                  (select     id"
                "                                    from          fr_sub_frame"
                "                                    where      (type ="
                "                                                               (select     id"
                "                                                                 from          ref_frame"
                "                                                                 where      (name = 'root'))) and (id_frame = " + QVariant(m_sample->frameId).toString() + " ))) and (fr_als2vessel.id_abstract_landingsite ="
                "                                  (select     id_abstract_landingsite"
                "                                    from          sampled_cell"
                "                                    where      (id =  " + QVariant(m_sample->cellId).toString() + " ))) and (fr_als2vessel.vesselid not in"
                "                                  (select     vesselid"
                "                                    from          abstract_changes_temp_vessel"
                "                                    where      (id_cell =  " + QVariant(m_sample->cellId).toString() + ") and (to_ls ="
                "                                                               (select     id"
                "                                                                 from          ref_abstract_landingsite"
                "                                                                 where      (name = 'outside'))))) and "

                        //filter by vessel types here
                 "        ref_vessels.vesseltype=(select id_vessel_type "
                 "        from         sampled_cell_vessel_types "
                 "        where     (id = " + QVariant(m_sample->vesselTypeId).toString() + " ))"

                 "        union"
                 "        select     ref_vessels_1.vesselid"
                 "        from         fr_als2vessel as fr_als2vessel_1 inner join"
                 "                             ref_vessels as ref_vessels_1 on fr_als2vessel_1.vesselid = ref_vessels_1.vesselid"
                 "        where     (ref_vessels_1.vesselid in"
                 "                                 (select     vesselid"
                 "                                   from          abstract_changes_temp_vessel as abstract_changes_temp_vessel_1"
                 "                                   where      (id_cell =  " + QVariant(m_sample->cellId).toString() + ") and (to_ls ="
                 "                                                              (select     id_abstract_landingsite"
                 "                                                                from          sampled_cell as sampled_cell_1"
                 "                                                                where      (id = " + QVariant(m_sample->cellId).toString() + ")))))"

            ;

    }else{
        strQuery =
                "        select     vesselid, fr_gls2als.id_gls"
                "         from         fr_als2vessel"
                "         inner join fr_gls2als on fr_als2vessel.id_abstract_landingsite=fr_gls2als.id_abstract_landingsite"
                "         where     (fr_gls2als.id_sub_frame ="
                "                                  (select     id"
                "                                     from          fr_sub_frame"
                "                                     where      (type ="
                "                                                               (select     id"
                "                                                                 from          ref_frame"
                "                                                                 where      (name = 'root'))) and (id_frame = " + QVariant(m_sample->frameId).toString() + " ))"
                "         )"
                "         and     (fr_als2vessel.id_sub_frame ="
                "                                  (select     id"
                "                                     from          fr_sub_frame"
                "                                     where      (type ="
                "                                                               (select     id"
                "                                                                 from          ref_frame"
                "                                                                 where      (name = 'root'))) and (id_frame =  " + QVariant(m_sample->frameId).toString() + " ))"
                "         )"
                "         and fr_als2vessel.id_abstract_landingsite in"
                "         (select fr_gls2als.id_abstract_landingsite from fr_gls2als where fr_gls2als.id_sub_frame="
                "                                  (select     id"
                "                                     from          fr_sub_frame"
                "                                     where      (type ="
                "                                                               (select     id"
                "                                                                 from          ref_frame"
                "                                                                 where      (name = 'root'))) and (id_frame =  " + QVariant(m_sample->frameId).toString() + " ))"
                "         and fr_gls2als.id_gls in"
                "         (select     id_gls"
                "         from         ref_minor_strata"
                "         where     (id = " + QVariant(m_sample->minorStrataId).toString() + " )) )"
         ;
    }

    //qDebug() << strQuery << endl;

    query.prepare(strQuery);
    if (!query.exec()){
        emit showError(tr("Could not obtain filter for Vessels!"));
        return;
    }

    QString strFilter("");
     while (query.next()) {
        strFilter.append("vesselid=" + query.value(0).toString());
        strFilter.append(" OR ");
     }
     if (!strFilter.isEmpty())
         strFilter=strFilter.remove(strFilter.size()-QString(" or ").length(),QString(" or ").length());

    tAVessel->relationModel(2)->setFilter(strFilter);

        //first we set the relation; then we create a mapper and assign the (amended) model to the mapper;
    initMapper1();
}

bool FrmVessel::getNextLabel(QString& strLabel)
{
    if (!tableView->selectionModel()->hasSelection())
        return false;

    //sending the name
    QModelIndex idx=viewVessel->index(tableView->selectionModel()->currentIndex().row(),1);
    strLabel=idx.data().toString();
    return true;
}

bool FrmVessel::applyChanges()
{
    //bool bError=true;
    int cur1= mapper1->currentIndex();

    bool bError=!submitMapperAndModel(mapper1);
    if (!bError){
        if (!m_sample->bLogBook){

            int cur2= mapper2->currentIndex();

            //submit
            bError=!mapper2->submit();
            if (!bError){
                bError=!tCellVessels->submitAll();
                if (bError){
                    if (tCellVessels->lastError().type()!=QSqlError::NoError)
                        emit showError(tCellVessels->lastError().text());
                    else
                        emit showError(tr("Could not write sampled cell vessel changes in the database!"));
                }
            }

            mapper2->setCurrentIndex(cur2);
        }

    }
    mapper1->setCurrentIndex(cur1);

    if (!bError) emit editLeave(true,false);
    return !bError;
}

void FrmVessel::editFinished()
{
    setPreviewQuery();
    pushEdit->setChecked(false);
    pushNew->setEnabled(!pushEdit->isChecked());
    pushRemove->setEnabled(!pushEdit->isChecked());
    emit lockControls(true,m_lWidgets);
}

void FrmVessel::onEditLeave(const bool bFinished, const bool bDiscarded)
{
    if (bFinished){
        editFinished();
    }
}
