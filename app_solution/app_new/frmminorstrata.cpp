#include <QTest>
#include "globaldefs.h"
#include "frmminorstrata.h"

FrmMinorStrata::FrmMinorStrata(RoleDef* inRoleDef, Sample* inSample, RuleChecker* ruleCheckerPtr, QWidget *parent, Qt::WFlags flags):
PreviewTab(1, inRoleDef, inSample,tr("Stratum"), ruleCheckerPtr, parent, flags){

    setupUi(this);

    installEventFilters();

    viewMinorStrata=0;
    tRefMinorStrata=0;
    buttonGroup=0;
    mapper1=0;

    connect(pushNext, SIGNAL(clicked()), this,
    SLOT(next()));

    connect(pushPrevious, SIGNAL(clicked()), this,
    SLOT(goBack()));

    connect(toolButton, SIGNAL(clicked()), this,
        SLOT(onShowFrameDetails()));

    connect(this, SIGNAL(hideFrameDetails(bool)), this,
        SLOT(onHideFrameDetails()));

    initModels();
    initUI();
    initMappers();

}

FrmMinorStrata::~FrmMinorStrata()
{
    if (tRefMinorStrata!=0) delete tRefMinorStrata;
    if (buttonGroup!=0) delete buttonGroup;
    if (mapper1!=0) delete mapper1;
    if (viewMinorStrata!=0) delete viewMinorStrata;
}

void FrmMinorStrata::initHelpIds()
{
    m_widgetInfo.insert(tableView,"FaoCAS::Define_minor_strata");
    m_widgetInfo.insert(groupDetails,"FaoCAS::Sub-form_Minor_StrataDetails");
    m_widgetInfo.insert(groupActivity,"FaoCAS::activity_status");
    m_widgetInfo.insert(radioActive,"FaoCAS::activity_status");
    m_widgetInfo.insert(radioInactive,"FaoCAS::activity_status");
    m_widgetInfo.insert(cmbReasons,"FaoCAS::activity_status");
    m_widgetInfo.insert(cmbGLS,"FaoCAS::group_of_landing_sites");
    m_widgetInfo.insert(customDtStart,"FaoCAS::time_validity");
    m_widgetInfo.insert(customDtEnd,"FaoCAS::time_validity");
}

void FrmMinorStrata::onHideFrameDetails()
{
    if (!pushEdit->isChecked()){
        toolButton->setEnabled(false);
        pushNext->setEnabled(true);
        pushPrevious->setEnabled(true);
    }
}

void FrmMinorStrata::onShowFrameDetails()
{
    if (!tableView->selectionModel()->hasSelection()){
        emit showError(tr("You must select one stratum!"));
        return;
    }

    QList<int> blackList;
    blackList << 1 << 2;//TODO: what are these hardcoded values? tests?
    int options=FrmFrameDetails::READ_TMP;

    if (pushEdit->isChecked()){
        options= options | FrmFrameDetails::CACHE_CHANGES;
    }

    emit showFrameDetails(FrmFrameDetails::VIEW,FrmFrameDetails::TEMPORARY,
        m_sample, blackList, options);
}

bool FrmMinorStrata::getNextLabel(QString& strLabel)
{
    if (!tableView->selectionModel()->hasSelection())
        return false;

    //sending the name
    QModelIndex idx=viewMinorStrata->index(tableView->selectionModel()->currentIndex().row(),1);
    if (!idx.isValid()) return false;
    strLabel=idx.data().toString();
    return true;
}

bool FrmMinorStrata::applyChanges()
{
    bool bError=true;

    QString strError;
    if (!checkDependantDates("ref_minor_strata", QDateTime(customDtStart->date(),QTime(0,0,0,0),Qt::UTC),
        QDateTime(customDtEnd->date(),QTime(23,59,59,999),Qt::UTC),"ref_minor_strata",m_sample->minorStrataId, strError))
    {
        emit showError(strError);
    }else{
            int cur=mapper1->currentIndex();
            bError=!submitMapperAndModel(mapper1);
            if (!bError){
                mapper1->setCurrentIndex(cur);

        }
    }

    if (!bError) emit editLeave(true,false);
    return !bError;
}

void FrmMinorStrata::editFinished()
{
    setPreviewQuery();
    pushEdit->setChecked(false);
    pushNew->setEnabled(!pushEdit->isChecked());
    pushRemove->setEnabled(!pushEdit->isChecked());
    toolButton->setEnabled(false);
    emit lockControls(true,m_lWidgets);
}

void FrmMinorStrata::onEditLeave(const bool bFinished, const bool bDiscarded)
{
    if (bFinished){

        if (!bDiscarded && m_sample->bLogBook){
            //apply changes to temp frame
            emit applyChanges2FrameDetails();
            return;
        }else{
            editFinished();
        }

    }

    toolButton->setEnabled(!bFinished);
}

void FrmMinorStrata::disableReasonCombo()
{
    if (static_cast<QRadioButton*>(QObject::sender())==0) return;

    cmbReasons->setEnabled(static_cast<QRadioButton*>(QObject::sender())!=radioActive);
}

void FrmMinorStrata::setActiveReason(bool bActive)
{
    if (bActive){
        int index=cmbReasons->findText(qApp->translate("null_replacements", strNa ));
        cmbReasons->setCurrentIndex(index);
    }
}

void FrmMinorStrata::previewRow(QModelIndex index)
{
    //updating the sample
    QModelIndex idx=viewMinorStrata->index(index.row(),0);
    if (!idx.isValid()){
        emit showError (tr("Could not preview this record!"));
        return;
    }

    updateSample(idx);

    if (!abstractPreviewRow(index)){
        qDebug() << tr("Record discarded!") << endl;
        //emit showError (tr("Could not preview this record!"));
    }else{

        QModelIndex idx=viewMinorStrata->index(index.row(),0);
        if (!idx.isValid()){
            emit showError (tr("Could not preview this stratum!"));
            return;
        }

        mapper1->toLast();
    }
}

void FrmMinorStrata::uI4NewRecord()
{
    genericUI4NewRecord();

    lineNew->clear();
    radioActive->click();
    textComments->clear();

    toolButton->setEnabled(false);
}

void FrmMinorStrata::filterModel4Combo()
{
    QString strQuery=
            "select     fr_f2gls.id_gls "
            "from         fr_sub_frame inner join"
            "                 fr_f2gls on fr_sub_frame.id = fr_f2gls.id_sub_frame inner join"
            "                  fr_frame inner join"
            "                  fr_time on fr_frame.id = fr_time.id_frame on fr_sub_frame.id_frame = fr_frame.id "
            " where     (fr_time.id = :id) and (fr_sub_frame.type ="
            "                      (select     id"
            "                        from          ref_frame"
            "                        where      (name = :root)) );"
            ;
    QSqlQuery query;
    query.prepare(strQuery);
    query.bindValue(0,m_sample->frameTimeId);
    query.bindValue(1,qApp->translate("frame", strRoot));

    if (!query.exec()){
        emit showError(tr("Could not obtain filter for Group of Landing Sites!"));
        return;
    }

    Q_ASSERT_X(query.size()>=1, "Minor Strata", QString(QString("Selection of a frame without GLS!") + m_sample->print()).toUtf8().constData());

    QString strFilter("");
     while (query.next()) {
        strFilter.append("id=" + query.value(0).toString());
        strFilter.append(" OR ");
     }
     if (!strFilter.isEmpty())
         strFilter=strFilter.remove(strFilter.size()-QString(" OR ").length(),QString(" OR ").length());
     else{
        emit showError(tr("Could not obtain a filter for Group of Landing Sites!"));
        return;
     }

    tRefMinorStrata->relationModel(2)->setFilter(strFilter);
}

void FrmMinorStrata::beforeShow()
{
    this->groupDetails->setVisible(false);
    setSourceText(lbSource,m_sample->bLogBook);
    //TEMPORARY FRAME ONLY FOR LOGBOOK?
    toolButton->setVisible(m_sample->bLogBook);
}

void FrmMinorStrata::createRecord()
{
    genericCreateRecord();

    mapper1->toLast();

    QModelIndex idx=tRefMinorStrata->index(tRefMinorStrata->rowCount()-1,1);
    tRefMinorStrata->setData(idx,m_sample->frameTimeId);//id_frame_time

    uI4NewRecord();//init UI

    //signal for the rule checker default values
    emit addRecord();
}

bool FrmMinorStrata::reallyApply()
{
    bool bError=false;

    if (mapper1->submit()){
        bError=!
            tRefMinorStrata->submitAll();
        if (bError){
            if (tRefMinorStrata->lastError().type()!=QSqlError::NoError)
                emit showError(tRefMinorStrata->lastError().text());
            else
                emit showError(tr("Could not write stratum in the database!"));
        }
    }else bError=true;

    buttonBox->button(QDialogButtonBox::Apply)->setEnabled(bError);

    emit lockControls(!bError,m_lWidgets);
    buttonBox->button(QDialogButtonBox::Apply)->setVisible(bError);

    if (!bError){
        if (!afterApply()){
            bError=false;
        }else if (m_sample->bLogBook) {

            toolButton->setEnabled(true);

            updateSample();

            QToolTip::showText(toolButton->mapToGlobal(toolButton->pos()),
                tr("You have just initialized a stratum!\n Now before starting to introduce information, ")
                + tr("take a moment to have a look at the frame.\n ")
                + tr("If you wish to do any temporary changes, *please do it NOW*! ")
                , toolButton);

            //lets disable next till we review the frame
            pushNext->setEnabled(false);
            pushPrevious->setEnabled(false);

        }
    }
    return !bError;
}

void FrmMinorStrata::initUI()
{
    setHeader();

    buttonGroup=new ButtonGroup(this);
    buttonGroup->addButton(radioActive,0);
    buttonGroup->addButton(radioInactive,1);

    initPreviewTable(tableView,viewMinorStrata);
    setButtonBox(buttonBox);
    setGroupDetails(groupDetails);
    setNewButton(pushNew);
    setEditButton(pushEdit);
    setRemoveButton(pushRemove);
    setNextButton(pushNext);
    setPreviousButton(pushPrevious);

    setUIPermissions();

    m_lWidgets << lineNew;
    m_lWidgets << label_3;
    m_lWidgets << cmbGLS;
    m_lWidgets << groupActivity;
    m_lWidgets << radioActive;
    m_lWidgets << radioInactive;
    m_lWidgets << cmbReasons;
    m_lWidgets << label_4;
    m_lWidgets << textComments;
    m_lWidgets << label;
    m_lWidgets << label_2;
    m_lWidgets << customDtStart;
    m_lWidgets << customDtEnd;

    toolButton->setEnabled(false);
}

void FrmMinorStrata::onItemSelection()
{
    //the signal radio button does not work very well, so lets read the value on the table!
    QModelIndex idx=viewMinorStrata->index(tableView->currentIndex().row(),4);

    pushNext->setEnabled(tableView->selectionModel()->hasSelection()
        && idx.data().toBool()==false
        && !toolButton->isEnabled());

    pushPrevious->setEnabled(tableView->selectionModel()->hasSelection()
        && !toolButton->isEnabled());
}

void FrmMinorStrata::setPreviewQuery()
{
    viewMinorStrata->setQuery(
             "select     ref_minor_strata.id, ref_minor_strata.name, to_char(start_dt, 'DD/Mon/YYYY') as \"start date\", to_char(end_dt, 'DD/Mon/YYYY') as \"end date\","
             "  ref_minor_strata.isclosed as closed"
             " from         ref_minor_strata "
             "                      where     (ref_minor_strata.id_frame_time =" + QVariant(m_sample->frameTimeId).toString() + ")"
             "                      order by ref_minor_strata.id desc"
            );

    tableView->hideColumn(0);
    resizeToVisibleColumns(tableView);
}

void FrmMinorStrata::initModels()
{
    //Minor Strata
    tRefMinorStrata=new QSqlRelationalTableModel();
    tRefMinorStrata->setTable(QSqlDatabase().driver()->escapeIdentifier("ref_minor_strata",
        QSqlDriver::TableName));
    tRefMinorStrata->setRelation(2, QSqlRelation("ref_group_of_landingsites", "id", "name"));
    tRefMinorStrata->setRelation(4, QSqlRelation("ref_no_Recording_activities", "id", "name"));
    tRefMinorStrata->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tRefMinorStrata->sort(0,Qt::AscendingOrder);
    tRefMinorStrata->select();

    setPreviewModel(tRefMinorStrata);

    viewMinorStrata = new QSqlQueryModel;
    viewMinorStrata->setHeaderData(0, Qt::Horizontal, tr("Name"));
    viewMinorStrata->setHeaderData(1, Qt::Horizontal, tr("Start"));
    viewMinorStrata->setHeaderData(2, Qt::Horizontal, tr("End"));
    viewMinorStrata->setHeaderData(3, Qt::Horizontal, tr("Closed"));
}

void FrmMinorStrata::initMappers()
{
    if (m_mapperBinderPtr!=0) {delete m_mapperBinderPtr; m_mapperBinderPtr=0;}
    if (mapper1!=0) delete mapper1;

    mapper1= new QDataWidgetMapper(this);
    mapper1->setModel(tRefMinorStrata);
    mapper1->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    if (nullDellegate!=0) delete nullDellegate;
    QList<int> lCmb;
    lCmb << 2 << 3 << 4;
    QList<int> lText;
    lText << 5;
    nullDellegate=new NullRelationalDelegate(lCmb,lText);
    mapper1->setItemDelegate(nullDellegate);

    cmbGLS->setModel(tRefMinorStrata->relationModel(2));
    cmbGLS->setModelColumn(
        tRefMinorStrata->relationModel(2)->fieldIndex("name"));

    cmbReasons->setModel(tRefMinorStrata->relationModel(4));
    cmbReasons->setModelColumn(
        tRefMinorStrata->relationModel(4)->fieldIndex("name"));

    mapper1->addMapping(lineNew, 6);
    mapper1->addMapping(cmbGLS, 2);
    mapper1->addMapping(cmbReasons, 4);
    mapper1->addMapping(buttonGroup,3);
    mapper1->addMapping(textComments,5);

    mapper1->addMapping(customDtStart,7,QString("date").toAscii());
    mapper1->addMapping(customDtEnd,8,QString("date").toAscii());

    QList<QDataWidgetMapper*> lMapper;
    lMapper << mapper1;
    m_mapperBinderPtr=new MapperRuleBinder(m_ruleCheckerPtr, m_sample, lMapper, this->objectName());
    if (!initBinder(m_mapperBinderPtr))
        emit showError(tr("Could not init binder!"));
}
