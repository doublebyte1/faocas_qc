#include <QTest>
#include "frmframe.h"
#include "modelinterface.h"
#include "globaldefs.h"

FrmFrame::FrmFrame(RoleDef* inRoleDef, Sample* inSample, RuleChecker* ruleCheckerPtr, QWidget *parent, Qt::WFlags flags):
PreviewTab(0,inRoleDef,inSample,tr("Frame"), ruleCheckerPtr, parent,flags){

    setupUi(this);

    installEventFilters();

    lbHeader->setVisible(false);//Always hidden!
    lbHeader->clear();
    tFrameTime=0;
    viewFrameTime=0;
    frModel=0;
    mapper=0;
    m_submitted=false;
    //m_curMode=FrmFrameDetails::NONE;
    m_bInsert=false;
    m_bSampling=false;

    m_tabsDefined=false;

    connect(toolEdit, SIGNAL(clicked()), this,
    SLOT(onShowFrameDetails()));

    connect(this, SIGNAL(hideFrameDetails(bool)), this,
        SLOT(onHideFrameDetails(bool)));

    connect(toolProcess, SIGNAL(clicked()), this,
        SIGNAL(showFrmSampling()));

    connect(this, SIGNAL(hideFrmSampling(bool)), this,
        SLOT(onHideFrmSampling(bool)));

    initModels();
    initUI();
    initMappers();

    setLoading(true);

    onShowForm();
}

FrmFrame::~FrmFrame()
{
    if (tFrameTime!=0) delete tFrameTime;
    if (viewFrameTime!=0) delete viewFrameTime;
    if (frModel!=0) delete frModel;
    if (mapper!=0) delete mapper;
}

void FrmFrame::onFrameChange(int index)
{
    bool bLogbook,bError=true;

    //int id= tFrameTime->relationModel(1)->index(cmbPrexistent->currentIndex(),0).data().toInt();
    int id= tFrameTime->relationModel(1)->index(index,0).data().toInt();

    QSqlQuery query;
    QString strQuery="select isLogBook([id])";
    strQuery.replace("[id]",QVariant(id).toString());
    query.prepare(strQuery);

    if (!query.exec()){
        emit showError(query.lastError().text());
        bError=true;
    }

    query.first();
    bLogbook = query.value(0).toBool();

    setSourceText(this->lbSource,bLogbook);
}

void FrmFrame::initHelpIds()
{
    m_widgetInfo.insert(cmbPrexistent,"Medfisis::pre-existent_frame");
    m_widgetInfo.insert(groupPhysical,"Medfisis::geographical_frame");
    m_widgetInfo.insert(groupTime,"Medfisis::time_validity");
    m_widgetInfo.insert(customDtStart,"Medfisis::time_validity");
    m_widgetInfo.insert(customDtEnd,"Medfisis::time_validity");
    m_widgetInfo.insert(groupProcess,"Medfisis::Define_the_sampling_process");
    m_widgetInfo.insert(toolProcess,"Medfisis::Define_the_sampling_process");

    //m_widgetInfo.insert(pushNew,"Medfisis::create_new_record");
}

void FrmFrame::setPreviewQuery()
{
    viewFrameTime->setQuery(
                "select     fr_time.id, fr_frame.name, to_char(start_dt, 'DD/Mon/YYYY') as \"lower limit\", to_char(end_dt, 'DD/Mon/YYYY') as \"upper limit\","
                "                          fr_time.id_frame"
                "           from         fr_time inner join"
                "                          fr_frame on fr_time.id_frame = fr_frame.id"
                "         where     (fr_time.comments not like '%n/a%')"
                " order by fr_time.id desc;"    );

    //qDebug() << viewFrameTime->query().lastQuery() << endl;

    tableView->hideColumn(0);
    tableView->hideColumn(4);
    resizeToVisibleColumns(tableView);
}

void FrmFrame::uI4NewRecord()
{
    genericUI4NewRecord();
    groupProcess->setEnabled(false);
}

void FrmFrame::beforeShow()
{
    this->groupDetails->setVisible(false);
}

void FrmFrame::editFinished()
{
    setPreviewQuery();
    emit lockControls(true,m_lWidgets);
    groupProcess->setEnabled(false);
    //everything went ok, so we can check it off!
    pushEdit->setChecked(false);
    pushNew->setEnabled(!pushEdit->isChecked());
    pushRemove->setEnabled(!pushEdit->isChecked());
}

void FrmFrame::onEditLeave(const bool bFinished, const bool bDiscarded)
{
    if (!bFinished){        
        emit setFrmSamplingMode(FrmSampling::EDIT);
    }else{
        if (!bDiscarded){
            emit applyChanges2FrmSampling(!bDiscarded);
            return;
        }else{
            pushEdit->setChecked(false);
            pushNew->setEnabled(!pushEdit->isChecked());
            pushRemove->setEnabled(!pushEdit->isChecked());
        }
    }
    groupProcess->setEnabled(!bFinished);
}

bool FrmFrame::applyChanges()
{
    //TODO: REVIEW THIS (DATES)

    bool bError=true;

//    QString strError;

    //TODO: REVIEW THE DEPENDENT DATES
    /*
    if (!checkDependantDates("fr_time", customDtStart->dateTime(),
        customDtEnd->dateTime(),"fr_time",m_sample->frameTimeId, strError))
    {
        emit showError(strError);
    }else{
    */

            int cur= mapper->currentIndex();

            bError=!submitMapperAndModel(mapper);
            if (!bError){
                mapper->setCurrentIndex(cur);
            }

    //}

    if (!bError) emit editLeave(true,false);
    return !bError;
}

void FrmFrame::createRecord()
{
    if (m_bSampling){
        emit showError(tr("You can not insert a new record, before you have completed this one: \n define the sampling process!"));
        return;
    }

    genericCreateRecord();

    mapper->toLast();

    m_bInsert=true;

    uI4NewRecord();//init UI

    //signal for the rule checker default values
    emit addRecord();

    //signal for the FrmSampling
    emit setFrmSamplingMode(FrmSampling::CREATE);
}

bool FrmFrame::updateFrameSample(const QModelIndex index)
{
    return updateFrameSampleParts(index) && updateSample(index);
}

bool FrmFrame::updateFrameSample()
{
    return updateFrameSampleParts() && updateSample();
}

bool FrmFrame::updateFrameSampleParts(const QModelIndex index)
{
    QModelIndex idx2=viewFrameTime->index(index.row(),4);

    //frame id
    if (!idx2.isValid()) return false;
    m_sample->frameId=idx2.data().toInt();

    //logbook
    bool bLogbook;
    QString strError;
    if (!isLogBook(m_sample->frameId,bLogbook,strError)){
        emit showError(strError);
        return false;
    }
    m_sample->bLogBook=bLogbook;

    return true;
}

bool FrmFrame::updateFrameSampleParts()
{
    //check if there is a selection
    if (!tableView->selectionModel()->hasSelection())
        return false;

    //updating the sample structure
    QModelIndex idx=tableView->model()->index(tableView->selectionModel()->currentIndex().row(),0);

    if (!idx.isValid()) return false;

    return updateFrameSampleParts(idx);
}

void FrmFrame::previewRow(QModelIndex index)
{    
    //m_bSampling: tells us if the input about the sampling technique was already provided
    if (m_bSampling) return;

    //no pusPrevious in this form!
    pushNext->setEnabled(tableView->selectionModel()->hasSelection() &&
                         !m_bSampling);
    emit disableTabs();

    QModelIndex idx=tableView->model()->index(index.row(),0);
    if (!updateFrameSample(idx)){
        emit showError(tr("Could not update sample with values of this row!"));
        return;
    }

    if (!abstractPreviewRow(index)){
        qDebug() << tr("Record discarded!") << endl;
    }else{

        groupProcess->setEnabled(false);

        QModelIndex pIdx;
        if (!translateIndex(index,pIdx)) return;

        idx=viewFrameTime->index(index.row(),0);
        if (!idx.isValid()){
            emit showError (tr("Could not preview this sampling frame!"));
            return;
        }
        mapper->setCurrentModelIndex(pIdx);
     }
}

void FrmFrame::onItemSelection()
{
    /*
    //no pusPrevious in this form!
    pushNext->setEnabled(tableView->selectionModel()->hasSelection() &&
                         !m_bSampling);
    emit disableTabs();*/
}

void FrmFrame::initModels()
{
    initFrModel();

    viewFrameTime = new QSqlQueryModel;

    frModel = new QSqlTableModel;
    frModel->setTable("Fr_Frame");

    filterTable(frModel);

    frModel->select();
}

void FrmFrame::initUI()
{
    setHeader();

    //radioCopy->setChecked(true);

    initPreviewTable(tableView,viewFrameTime);

    setButtonBox(buttonBox);
    setNewButton(pushNew);
    setEditButton(pushEdit);
    setRemoveButton(pushRemove);
    setNextButton(pushNext);
    setGroupDetails(groupDetails);

    setUIPermissions();

    m_lWidgets << groupPhysical;
    m_lWidgets << groupTime;

}

void FrmFrame::initFrModel()
{
    if (tFrameTime!=0) delete tFrameTime;

    tFrameTime=new QSqlRelationalTableModel();
    tFrameTime->setTable(QSqlDatabase().driver()->escapeIdentifier("fr_time",
        QSqlDriver::TableName));

    tFrameTime->setRelation(1, QSqlRelation("fr_frame", "id", "name"));

    filterTable(tFrameTime->relationModel(1));

    tFrameTime->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tFrameTime->sort(0,Qt::AscendingOrder);
    tFrameTime->select();
    //filterTable(tFrameTime->relationModel(1));

    setPreviewModel(tFrameTime);
}

void FrmFrame::onHideFrameDetails(bool bSubmitted)
{
    if (bSubmitted){
        tFrameTime->relationModel(1)->select();
        cmbPrexistent->setCurrentIndex(tFrameTime->relationModel(1)->rowCount()-1);
     }
}

void FrmFrame::onShowFrameDetails()
{
    m_sample->frameId=cmbPrexistent->model()->index(cmbPrexistent->currentIndex(),0).data().toInt();
    emit showFrameDetails(FrmFrameDetails::VIEW,FrmFrameDetails::PERMANENT,
    m_sample);
}

void FrmFrame::onHideFrmSampling(bool bSubmitted)
{
    if (pushEdit->isChecked()) return;

    pushEdit->setEnabled(bSubmitted);
    pushRemove->setEnabled(bSubmitted);

    if (bSubmitted){
        m_bSampling=false;
        if (afterApply()){
            groupProcess->setEnabled(false);
            m_bInsert=false;
            m_submitted=true;
            if (!updateFrameSample()){
                emit showError(tr("Could not update sample with values of this row!"));
                return;
            }

        }
    }

    groupDetails->setVisible(m_roleDef->bView && !groupDetails->isVisible());
}

void FrmFrame::initMappers()
{
    if (tFrameTime==0) return ;
    if (m_mapperBinderPtr!=0) {delete m_mapperBinderPtr; m_mapperBinderPtr=0;}
    if (mapper!=0) delete mapper;

    mapper= new QDataWidgetMapper(this);
    mapper->setModel(tFrameTime);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);
    mapper->setItemDelegate(new QSqlRelationalDelegate(this));

    cmbPrexistent->setModel(tFrameTime->relationModel(1));
    cmbPrexistent->setModelColumn(
        tFrameTime->relationModel(1)->fieldIndex("name"));

    mapper->addMapping(this->cmbPrexistent, 1);

    mapper->addMapping(this->customDtStart,4,QString("date").toAscii());
    mapper->addMapping(this->customDtEnd,5,QString("date").toAscii());


    QList<QDataWidgetMapper*> lMapper;
    lMapper << mapper;
    m_mapperBinderPtr=new MapperRuleBinder(m_ruleCheckerPtr, m_sample, lMapper, this->objectName());
    if (!initBinder(m_mapperBinderPtr))
        emit showError(tr("Could not init binder!"));

}

bool FrmFrame::reallyApply()
{
    bool bError=!submitMapperAndModel(mapper);

    buttonBox->button(QDialogButtonBox::Apply)->setEnabled(bError);

    emit lockControls(!bError,m_lWidgets);

    setPreviewQuery();
    groupProcess->setEnabled(true);
    m_bSampling=true;//waiting for the sampling input...!

    tableView->selectRow(0);
    //updateSample();
    if (!updateFrameSample()){
        emit showError(tr("Could not update sample with values of this row!"));
        bError=true;
    }

    QToolTip::showText(toolProcess->mapToGlobal(toolProcess->pos()), 
        tr("You have just initialized a frame!\n Now before starting to introduce information, ")
        + tr("take a moment to define the sampling technique used to collect this data.\n ")
        + tr("This is very important to allows later to generate the correct estimates. ")
        , toolProcess);
    //toolProcess->setFocus();

    return !bError;
}

void FrmFrame::setReadOnly(const bool bRO)
{
    if (bRO){
        QList<QWidget*> lWidgets;
        lWidgets << this->groupPhysical;
        lWidgets << this->groupTime;
        emit lockControls(true,lWidgets);
    }else{
        if (tFrameTime->lastError().type()!=QSqlError::NoError)
            emit showError(tFrameTime->lastError().text());
        else
            emit showError(tr("Could not submit results!"));
    }
}

bool FrmFrame::isLogBook(const int frameId, bool& bLogbook, QString& strError)
{
    //check which type of frame we have...
    QString strQuery=
    "select     ref_source.name"
    " from         fr_frame inner join"
    "                      ref_source on fr_frame.id_source = ref_source.id"
    " where     (fr_frame.id = ?)";

    QSqlQuery query;
    query.prepare(strQuery);
    query.bindValue(0,frameId);
    if (!query.exec()){
        emit showError(query.lastError().text());
        return false;
    }
    if (query.numRowsAffected()<1){
        strError=tr("Could not determine the type of this frame!");
        return false;
    }

    query.first();
    QString strSource=query.value(0).toString();
    if (strSource.compare(qApp->translate("frame", strLogbook),Qt::CaseInsensitive)==0)
        bLogbook=true;
    else if (strSource.compare(qApp->translate("frame", strSampling),Qt::CaseInsensitive)==0)
        bLogbook=false;
    else{
        strError=tr("The type of this frame is not usable! (not logbook and not sampling)!");
        return false;
    }

    return true;
}

bool FrmFrame::getNextLabel(QString& strLabel)
{
    if (!tableView->selectionModel()->hasSelection())
        return false;

    //sending the name
    QModelIndex idx=viewFrameTime->index(tableView->selectionModel()->currentIndex().row(),1);
    if (!idx.isValid()) return false;
    strLabel=idx.data().toString();
    return true;
}

void FrmFrame::adjustFrmSamplingMode()
{
    //set here if it is logbook or not
    m_sample->frameId=
            cmbPrexistent->model()->index(cmbPrexistent->currentIndex(),
                                          0).data().toInt();

    bool bLogbook;
    QString strError;
    if (!isLogBook(m_sample->frameId,bLogbook,strError)){
        qDebug() << strError << endl;
        return;
    }

    m_sample->bLogBook=bLogbook;
}
