//#include "globaldefs.h"
#include "frmvesseltype.h"

FrmVesselType::FrmVesselType(RoleDef* inRoleDef, Sample* inSample, RuleChecker* ruleCheckerPtr, QWidget *parent, Qt::WFlags flags):
PreviewTab(3,inRoleDef,inSample,tr("Vessel Type"), ruleCheckerPtr, parent, flags){

    setupUi(this);

    installEventFilters();

    connect(pushNext, SIGNAL(clicked()), this,
    SLOT(next()));

    connect(pushPrevious, SIGNAL(clicked()), this,
    SLOT(goBack()));

    mapper1=0;
    tSVesselTypes=0;
    viewVesselTypes=0;
    nullDellegate=0;

    initModels();
    initUI();
}

FrmVesselType::~FrmVesselType()
{
    if (tSVesselTypes!=0) delete tSVesselTypes;
    if (nullDellegate!=0) delete nullDellegate;
    if (mapper1!=0) delete mapper1;
    if (viewVesselTypes!=0) delete viewVesselTypes;
}

void FrmVesselType::initHelpIds()
{
    m_widgetInfo.insert(tableView,"Medfisis::Identify_the_Vessel_Type");
    m_widgetInfo.insert(groupDetails,"Medfisis::Sub-form_Vessel_TypeDetails");
    m_widgetInfo.insert(cmbTypes,"Medfisis::vessel_type");
}

void FrmVesselType::onItemSelection()
{
    pushNext->setEnabled(tableView->selectionModel()->hasSelection());
    pushPrevious->setEnabled(tableView->selectionModel()->hasSelection());
}

void FrmVesselType::initMappers()
{
    if (m_mapperBinderPtr!=0) {delete m_mapperBinderPtr; m_mapperBinderPtr=0;}
    if (mapper1!=0) delete mapper1;
    mapper1= new QDataWidgetMapper(this);
    mapper1->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    mapper1->setModel(tSVesselTypes);

    if (nullDellegate!=0) delete nullDellegate;
    QList<int> lOthers;
    lOthers << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << 10;
    QList<int> lText;
    lText << 11;
    nullDellegate=new NullRelationalDelegate(lOthers,lText);
    mapper1->setItemDelegate(nullDellegate);

    qDebug() << tSVesselTypes->relationModel(2)->filter() << endl;

    cmbTypes->setModel(tSVesselTypes->relationModel(2));
    cmbTypes->setModelColumn(
        tSVesselTypes->relationModel(2)->fieldIndex("name"));

    mapper1->addMapping(cmbTypes, 2);

    mapper1->addMapping(spinNE, 3);
    mapper1->addMapping(spinNC, 4);
    mapper1->addMapping(spinAE, 5);
    mapper1->addMapping(spinAC, 6);
    mapper1->addMapping(spinIE, 7);
    mapper1->addMapping(spinIC, 8);
    mapper1->addMapping(spinOE, 9);
    mapper1->addMapping(spinOC, 10);

    mapper1->addMapping(textComments,11);

    QList<QDataWidgetMapper*> lMapper;
    lMapper << mapper1;
    m_mapperBinderPtr=new MapperRuleBinder(m_ruleCheckerPtr, m_sample, lMapper, this->objectName());
    if (!initBinder(m_mapperBinderPtr))
        emit showError(tr("Could not init binder!"));
}

void FrmVesselType::previewRow(QModelIndex index)
{
    QModelIndex idx=this->viewVesselTypes->index(index.row(),0);
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
    }
}

void FrmVesselType::setPreviewQuery()
{
    if (m_sample==0) return;

    viewVesselTypes->setQuery(
        "select     sampled_cell_vessel_types.id, ref_vessel_types.name \"vessel type\""
        " from         sampled_cell_vessel_types inner join"
        "                      ref_vessel_types on sampled_cell_vessel_types.id_vessel_type = ref_vessel_types.id"
        " where     (sampled_cell_vessel_types.id_cell =" + QVariant(m_sample->cellId).toString() + ")"
        " order by sampled_cell_vessel_types.id desc"
    );

    //qDebug() << viewVesselTypes->query().lastQuery() << endl;

    tableView->hideColumn(0);
    resizeToVisibleColumns(tableView);

}

void FrmVesselType::beforeShow()
{
    this->groupDetails->setVisible(false);
    setSourceText(lbSource, m_sample->bLogBook);
    initVesselTypeModel();
}

bool FrmVesselType::reallyApply()
{
        bool bError=false;

        if (mapper1->submit()){
                    bError=!
                        tSVesselTypes->submitAll();
                    if (bError){
                        if (tSVesselTypes->lastError().type()!=QSqlError::NoError)
                            emit showError(tSVesselTypes->lastError().text());
                        else
                            emit showError(tr("Could not write vessel type in the database!"));
                    }//mapper1->toLast();
        }else bError=true;

        buttonBox->button(QDialogButtonBox::Apply)->setEnabled(bError);
        //button->setEnabled(bError);

        emit lockControls(!bError,m_lWidgets);
        if (!bError){
            buttonBox->button(QDialogButtonBox::Apply)->hide();
        }else{
            buttonBox->button(QDialogButtonBox::Apply)->show();
        }

        if (!bError){
            bError=afterApply();
        }
        return !bError;
}

void FrmVesselType::uI4NewRecord()
{
    genericUI4NewRecord();

    textComments->clear();
    cmbTypes->setCurrentIndex(-1);

}

void FrmVesselType::createRecord()
{
    genericCreateRecord();

    while(tSVesselTypes->canFetchMore())
       tSVesselTypes->fetchMore();

    mapper1->toLast();

    QModelIndex idx=tSVesselTypes->index(tSVesselTypes->rowCount()-1,1);
    tSVesselTypes->setData(idx,m_sample->cellId);//id_cell

    uI4NewRecord();//init UI

    //signal for the rule checker default values
    emit addRecord();
}

void FrmVesselType::filterModel4Combo()
{
    QString strQuery(
                "SELECT DISTINCT"
                "  ref_vessel_types.id,"
                "  ref_vessel_types.name"
                " FROM "
                "  public.fr_frame, "
                "  public.fr_sub_frame,"
                "  public.ref_frame, "
                "  public.fr_f2gls, "
                "  public.ref_group_of_landingsites,"
                "  public.fr_gls2als,"
                "  public.ref_abstract_landingsite,"
                "  public.fr_als2vessel,"
                "  public.ref_vessels,"
                "  public.ref_vessel_types"
                " WHERE "
                "  fr_sub_frame.id_frame = fr_frame.id AND"
                "  fr_sub_frame.type = ref_frame.id AND"
                "  fr_f2gls.id_sub_frame = fr_sub_frame.id AND"
                "  fr_f2gls.id_gls = ref_group_of_landingsites.id AND"
                "  fr_gls2als.id_sub_frame = fr_sub_frame.id AND  "
                "  fr_gls2als.id_gls = fr_f2gls.id_gls AND "
                "  fr_gls2als.id_abstract_landingsite=ref_abstract_landingsite.id and"
                "  fr_als2vessel.id_abstract_landingsite=fr_gls2als.id_abstract_landingsite AND"
                "  fr_als2vessel.id_sub_frame=fr_sub_frame.id AND"
                "  fr_als2vessel.vesselid=ref_vessels.vesselid AND"
                "  ref_vessels.vesseltype=ref_vessel_types.id AND"
                "  ref_abstract_landingsite.id=(SELECT sampled_cell.id_abstract_landingsite from sampled_cell WHERE sampled_cell.id=" + QVariant(m_sample->cellId).toString() + ") AND"
                "  fr_frame.id = " + QVariant(m_sample->frameId).toString() + " AND "
                "  ref_frame.name = 'root'"


/*
        "select     ref_vessel_types.id"
        " from         fr_als2vessel inner join"
        "                      ref_vessels on fr_als2vessel.vesselid = ref_vessels.vesselid inner join"
        "                      ref_vessel_types on ref_vessels.vesseltype = ref_vessel_types.id"
        " where     (fr_als2vessel.id_sub_frame ="
        "                          (select     id"
        "                            from          fr_sub_frame"
        "                            where      (type ="
        "                                                       (select     id"
        "                                                         from          ref_frame"
        "                                                         where      (name = 'root'))) and (id_frame ="  + QVariant(m_sample->frameId).toString() + "))) and (fr_als2vessel.id_abstract_landingsite ="
        "                          (select     id_abstract_landingsite"
        "                            from          sampled_cell"
        "                            where      (id ="  + QVariant(m_sample->cellId).toString() + "))) and (fr_als2vessel.vesselid not in"
        "                          (select     vesselid"
        "                            from          abstract_changes_temp_vessel"
        "                            where      (id_cell ="  + QVariant(m_sample->cellId).toString() +" ) and (to_ls ="
        "                                                       (select     id"
        "                                                         from          ref_abstract_landingsite"
        "                                                         where      (name = 'outside')))))"
*/

    );

    //qDebug() << strQuery << endl;

    QSqlQuery query;
    query.prepare(strQuery);
    if (!query.exec()){
        emit showError(tr("Could not obtain filter for vessel types!"));
        return;
    }

    Q_ASSERT_X(query.numRowsAffected()>=1, "Vessel Types", QString(QString("Selection of a LS without vessels!") + m_sample->print()).toUtf8().constData());
    QString strFilter("");
     while (query.next()) {
        strFilter.append("id=" + query.value(0).toString());
        strFilter.append(" OR ");
     }

     if (!strFilter.isEmpty())
         strFilter=strFilter.remove(strFilter.size()-QString(" OR ").length(),QString(" OR ").length());

    tSVesselTypes->relationModel(2)->setFilter(strFilter);
    //first we set the relation; then we create a mapper and assign the (amended) model to the mapper;
    initMappers();
}

void FrmVesselType::initUI()
{
    setHeader();
    initPreviewTable(tableView,viewVesselTypes);
    setButtonBox(buttonBox);
    setGroupDetails(groupDetails);
    setNewButton(pushNew);
    setEditButton(pushEdit);
    setRemoveButton(pushRemove);
    setNextButton(pushNext);
    setPreviousButton(pushPrevious);

    setUIPermissions();

    //initializing the container for the readonly!
    m_lWidgets << cmbTypes;
    m_lWidgets << textComments;
    m_lWidgets << spinNE;
    m_lWidgets << spinAE;
    m_lWidgets << spinIE;
    m_lWidgets << spinOE;

    pushNext->setEnabled(false);
}

bool FrmVesselType::getNextLabel(QString& strLabel)
{
    if (!tableView->selectionModel()->hasSelection())
        return false;

    //sending the name
    QModelIndex idx=viewVesselTypes->index(tableView->selectionModel()->currentIndex().row(),1);

    if (!idx.isValid()) return false;
    strLabel=idx.data().toString();
    return true;
}

void FrmVesselType::initVesselTypeModel()
{
    if (tSVesselTypes!=0) delete tSVesselTypes;

    tSVesselTypes=new QSqlRelationalTableModel();
    tSVesselTypes->setTable(QSqlDatabase().driver()->escapeIdentifier("sampled_cell_vessel_types",
        QSqlDriver::TableName));
    tSVesselTypes->setRelation(2, QSqlRelation("ref_vessel_types", "id", "name"));
    tSVesselTypes->relationModel(2)->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tSVesselTypes->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tSVesselTypes->sort(0,Qt::AscendingOrder);
    tSVesselTypes->select();

    setPreviewModel(tSVesselTypes);
}

void FrmVesselType::initModels()
{
    if (viewVesselTypes!=0) delete viewVesselTypes;
    viewVesselTypes = new QSqlQueryModel;
}

bool FrmVesselType::applyChanges()
{
    //bool bError=true;

    int cur= mapper1->currentIndex();
    bool bError=!submitMapperAndModel(mapper1);
    if (!bError){
        mapper1->setCurrentIndex(cur);
    }

    if (!bError) emit editLeave(true,false);
    return !bError;
}

void FrmVesselType::editFinished()
{
    setPreviewQuery();
    pushEdit->setChecked(false);
    pushNew->setEnabled(!pushEdit->isChecked());
    pushRemove->setEnabled(!pushEdit->isChecked());
    emit lockControls(true,m_lWidgets);
}

void FrmVesselType::onEditLeave(const bool bFinished, const bool bDiscarded)
{
    if (bFinished){
        editFinished();
    }}
