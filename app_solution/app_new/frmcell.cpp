#include <QTest>
#include "globaldefs.h"
#include "frmcell.h"

FrmCell::FrmCell(RoleDef* inRoleDef, Sample* inSample, RuleChecker* ruleCheckerPtr, QWidget *parent, Qt::WFlags flags):
PreviewTab(2, inRoleDef,inSample,tr("Cell"), ruleCheckerPtr, parent, flags){

    setupUi(this);

    installEventFilters();

    connect(pushNext, SIGNAL(clicked()), this,
    SLOT(next()));

    connect(pushPrevious, SIGNAL(clicked()), this,
    SLOT(goBack()));

    connect(toolButton, SIGNAL(clicked()), this,
        SLOT(onShowFrameDetails()));

    connect(this, SIGNAL(hideFrameDetails(bool)), this,
        SLOT(onHideFrameDetails()));

    tSampCell=0;
    viewCell=0;
    mapper1=0;

    initModels();
    initUI();

}

FrmCell::~FrmCell()
{
    if (mapper1!=0) delete mapper1;
    if (tSampCell!=0) delete tSampCell;
    if (viewCell!=0) delete viewCell;
}

void FrmCell::initHelpIds()
{
    m_widgetInfo.insert(tableView,"Medfisis::define_cell_level");
    //m_widgetInfo.insert(groupDetails,"Medfisis::Sub-form_CellDetails");
}

void FrmCell::onItemSelection()
{
    pushNext->setEnabled(tableView->selectionModel()->hasSelection()
        && !toolButton->isEnabled());

    pushPrevious->setEnabled(tableView->selectionModel()->hasSelection()
        && !toolButton->isEnabled());
}

void FrmCell::onHideFrameDetails()
{
    if (!pushEdit->isChecked()){
        toolButton->setEnabled(false);
        pushNext->setEnabled(true);
        pushPrevious->setEnabled(true);
    }
}

void FrmCell::onShowFrameDetails()
{
    if (!tableView->selectionModel()->hasSelection()){
        emit showError(tr("You must select one cell!"));
        return;
    }

    QModelIndex idx=viewCell->index(tableView->selectionModel()->currentIndex().row(),0);
    if (m_sample->cellId!=idx.data().toInt()){
        emit showError(tr("We only support changes in the last inserted cell!"));
        return;
    }

    QList<int> blackList;
    blackList << 1 << 2;

    int options=FrmFrameDetails::READ_TMP;
    if (pushEdit->isChecked()){
        options= options | FrmFrameDetails::CACHE_CHANGES;
    }

    emit showFrameDetails(FrmFrameDetails::VIEW,FrmFrameDetails::TEMPORARY,
        m_sample, blackList, options);
}

void FrmCell::previewRow(QModelIndex index)
{
    QModelIndex idx=viewCell->index(index.row(),0);
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

        //Now fix the dates
        idx=tSampCell->index(0,1);
        if (!idx.isValid()){
            emit showError (tr("Could not preview this cell!"));
            return;
        }
        idx=tSampCell->index(0,2);
        if (!idx.isValid()){
            emit showError (tr("Could not preview this cell!"));
            return;
        }

        idx=tSampCell->index(0,3);
        if (!idx.isValid()){
            emit showError (tr("Could not preview this cell!"));
            return;
        }
      //  pushNext->setEnabled(true);
    }
}

void FrmCell::setPreviewQuery()
{
    viewCell->setQuery(
                "select    sampled_cell.id, ref_abstract_landingsite.name as \"landing site\", to_char(start_dt, 'DD/Mon/YYYY') as \"start date\", to_char(end_dt, 'DD/Mon/YYYY') as \"end date\" "
                "from         sampled_cell inner join"
                "                      ref_abstract_landingsite on ref_abstract_landingsite.id = sampled_cell.id_abstract_landingsite"
                " where     (sampled_cell.id_minor_strata ="  + QVariant(m_sample->minorStrataId).toString() +
                " ) order by sampled_cell.id desc"
                );

    tableView->hideColumn(0);
    resizeToVisibleColumns(tableView);
}

void FrmCell::initModels()
{
    if (viewCell!=0) delete viewCell;
    viewCell = new QSqlQueryModel;
    viewCell->setHeaderData(0, Qt::Horizontal, tr("Site"));
    viewCell->setHeaderData(1, Qt::Horizontal, tr("Date"));
    viewCell->setHeaderData(2, Qt::Horizontal, tr("Time"));
}

void FrmCell::initUI()
{
    setHeader();

    this->groupDetails->setVisible(false);

    initPreviewTable(tableView,viewCell);
    setButtonBox(buttonBox);
    setGroupDetails(groupDetails);
    setNewButton(pushNew);
    setEditButton(pushEdit);
    setRemoveButton(pushRemove);
    setNextButton(pushNext);
    setPreviousButton(pushPrevious);

    setUIPermissions();

    //initializing the container for the readonly!S
    m_lWidgets << cmbLS;
    m_lWidgets << customDtStart;
    m_lWidgets << customDtEnd;
    m_lWidgets << textComments;
    m_lWidgets << spinNE;
    m_lWidgets << spinAE;
    m_lWidgets << spinIE;
    m_lWidgets << spinOE;

    toolButton->setEnabled(false);
}

void FrmCell::initMapper1()
{
    if (m_mapperBinderPtr!=0) {delete m_mapperBinderPtr; m_mapperBinderPtr=0;}
    if (mapper1!=0) delete mapper1;
    mapper1= new QDataWidgetMapper(this);
    mapper1->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

    mapper1->setModel(tSampCell);

    if (nullDellegate!=0) delete nullDellegate;
    QList<int> lOthers;
    lOthers << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << 10;
    QList<int> lText;
    lText << 11;
    nullDellegate=new NullRelationalDelegate(lOthers,lText);
    mapper1->setItemDelegate(nullDellegate);

    cmbLS->setModel(tSampCell->relationModel(2));
    cmbLS->setModelColumn(
        tSampCell->relationModel(2)->fieldIndex("name"));

    mapper1->addMapping(cmbLS, 2);

    mapper1->addMapping(spinNE, 3);
    mapper1->addMapping(spinNC, 4);
    mapper1->addMapping(spinAE, 5);
    mapper1->addMapping(spinAC, 6);
    mapper1->addMapping(spinIE, 7);
    mapper1->addMapping(spinIC, 8);
    mapper1->addMapping(spinOE, 9);
    mapper1->addMapping(spinOC, 10);

    mapper1->addMapping(textComments,11);

    mapper1->addMapping(customDtStart,13,QString("date").toAscii());
    mapper1->addMapping(customDtEnd,14,QString("date").toAscii());

    QList<QDataWidgetMapper*> lMapper;
    lMapper << mapper1;
    m_mapperBinderPtr=new MapperRuleBinder(m_ruleCheckerPtr, m_sample, lMapper, this->objectName());
    if (!initBinder(m_mapperBinderPtr))
        emit showError(tr("Could not init binder!"));
}

void FrmCell::beforeShow()
{
    //The dictionary of SQL relations does *not* respond to filter changes, and therefore
    //we need to initialize a new cell model (and setup the relations) everytime. For this
    //reason, dont bother to initialize it in the beginning.

    initCellModel();
    this->groupDetails->setVisible(false);
    setSourceText(lbSource,m_sample->bLogBook);
}

bool FrmCell::reallyApply()
{
        bool bError=false;
            if (!bError){
                if (mapper1->submit()){
                    bError=!
                        tSampCell->submitAll();
                    if (bError){
                        if (tSampCell->lastError().type()!=QSqlError::NoError)
                            emit showError(tSampCell->lastError().text());
                        else
                            emit showError(tr("Could not write cell in the database!"));
                    }//mapper1->toLast();
                }else bError=true;
            }
        //}
        buttonBox->button(QDialogButtonBox::Apply)->setEnabled(bError);

        emit lockControls(!bError,m_lWidgets);
        if (!bError){
            buttonBox->button(QDialogButtonBox::Apply)->hide();
        }else{
            buttonBox->button(QDialogButtonBox::Apply)->show();
        }

        if (!bError){
            if (!afterApply()) bError=false;
            else{

                toolButton->setEnabled(true);

                updateSample();

                QToolTip::showText(toolButton->mapToGlobal(toolButton->pos()), 
                    tr("You have just initialized a cell!\n Now before starting to introduce information, ")
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

void FrmCell::uI4NewRecord()
{
    genericUI4NewRecord();

    textComments->clear();

    toolButton->setEnabled(false);
}

void FrmCell::createRecord()
{
    genericCreateRecord();

    mapper1->toLast();

    while(tSampCell->canFetchMore())
        tSampCell->fetchMore();

    QModelIndex idx=tSampCell->index(tSampCell->rowCount()-1,1);
    tSampCell->setData(idx,m_sample->minorStrataId);//id_minor_strata

    uI4NewRecord();//init UI

    //signal for the rule checker default values
    emit addRecord();
}

void FrmCell::initCellModel()
{
    if (tSampCell!=0) delete tSampCell;

    tSampCell=new QSqlRelationalTableModel();
    tSampCell->setTable(QSqlDatabase().driver()->escapeIdentifier("sampled_cell",
        QSqlDriver::TableName));
    tSampCell->setRelation(2, QSqlRelation("ref_abstract_landingsite", "id", "name"));
    tSampCell->relationModel(2)->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tSampCell->setEditStrategy(QSqlTableModel::OnManualSubmit);
    tSampCell->sort(0,Qt::AscendingOrder);
    tSampCell->select();

    setPreviewModel(tSampCell);

}

void FrmCell::filterModel4Combo()
{
    QString strQuery =
            "select     fr_gls2als.id_abstract_landingsite as ls, ref_minor_strata.id_gls, fr_gls2als.id_gls as expr1"
            " from         ref_minor_strata inner join"
            "                      fr_time on ref_minor_strata.id_frame_time = fr_time.id inner join"
            "                      fr_frame on fr_time.id_frame = fr_frame.id inner join"
            "                      fr_sub_frame on fr_frame.id = fr_sub_frame.id_frame inner join"
            "                      fr_gls2als on fr_sub_frame.id = fr_gls2als.id_sub_frame and ref_minor_strata.id_gls = fr_gls2als.id_gls"
            " where     (ref_minor_strata.id = :id)"
;

    QSqlQuery query;
    query.prepare(strQuery);
    query.bindValue(0,m_sample->minorStrataId);
    if (!query.exec()){
        emit showError(tr("Could not obtain filter for Landing Sites!"));
        return;
    }

    Q_ASSERT_X(query.numRowsAffected()>=1, "Cell", QString(QString("Selection of a GLS without landing sites!") + m_sample->print()).toUtf8().constData());

    QString strFilter("");
     while (query.next()) {
        strFilter.append("ID=" + query.value(0).toString());
        strFilter.append(" OR ");
     }
     if (!strFilter.isEmpty())
         strFilter=strFilter.remove(strFilter.size()-QString(" OR ").length(),QString(" OR ").length());

    tSampCell->relationModel(2)->setFilter(strFilter);
    //first we set the relation; then we create a mapper and assign the (amended) model to the mapper;
    initMapper1();
}

bool FrmCell::getNextLabel(QString& strLabel)
{
    if (!tableView->selectionModel()->hasSelection())
        return false;

    //sending the name
    QModelIndex idx=viewCell->index(tableView->selectionModel()->currentIndex().row(),1);
    if (!idx.isValid()) return false;
    strLabel=idx.data().toString();
    return true;
}

void FrmCell::editFinished()
{
    setPreviewQuery();
    pushEdit->setChecked(false);
    pushNew->setEnabled(!pushEdit->isChecked());
    pushRemove->setEnabled(!pushEdit->isChecked());
    toolButton->setEnabled(false);
    emit lockControls(true,m_lWidgets);
}

void FrmCell::onEditLeave(const bool bFinished, const bool bDiscarded)
{
    if (bFinished){

        if (!bDiscarded){
            emit applyChanges2FrameDetails();
            return;
        }else{
            editFinished();
        }

    }
    toolButton->setEnabled(!bFinished);
}

bool FrmCell::applyChanges()
{
    bool bError=true;

    //TODO: REVIEW THIS LATER: checkdependant dates
    QString strError;/*
    if (!checkDependantDates(tSampCell->tableName(), customDtStart->dateTime(),
        customDtEnd->dateTime(),tSampCell->tableName(),m_sample->cellId, strError))
    {
        emit showError(strError);
    }else{

        if (!bError){
*/
            int cur= mapper1->currentIndex();
            bError=!submitMapperAndModel(mapper1);
            if (!bError){
                mapper1->setCurrentIndex(cur);
            }
    //}

    if (!bError) emit editLeave(true,false);
    return !bError;

}
