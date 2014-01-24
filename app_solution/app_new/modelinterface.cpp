#include <QDebug>
#include <QtSql>
#include "modelinterface.h"
#include "generictab.h"
#include "sql.h"

ModelInterface::ModelInterface (QObject *parent):
QObject(parent)
{
    initModels();
}

ModelInterface::ModelInterface (TreeModel* aTreeModel, QObject *parent):
QObject(parent),treeModel(aTreeModel)
{
    tRefFrame=0;
    tSubFrame=0;
    tRefGLS=0;
    tRefLS=0;
    tRefVessels=0;
    tLinkFr2GLS=0;
    tLinkGLS2LS=0;
    tLinkLS2Vessels=0;
    tChangesPermVessel=0;
    tChangesTempVessel=0;
    tChangesPermLS=0;
    tChangesPermGLS=0;
    rRefTempFrame=0;
    initModels();
}

bool ModelInterface::buildSourceFilter(QString& strFilter)
{
    QSqlQuery query;
        query.prepare(

    "SELECT     id, name"
    " FROM         ref_source"
    " WHERE     (name NOT IN"
    "                          (SELECT     internal_name"
    "                            FROM          gl_null_replacements))"

);
    if (!query.exec()) return false;
    if (query.size()<1) return false;//It must *always* find an id

    int ct=0;
    while (query.next())
    {
        if (ct>0) strFilter.append(tr(" OR "));
        strFilter.append(tr("ID=") + query.value(0).toString());
        ct++;
    }

    return !strFilter.isEmpty();
}

void ModelInterface::initModels()
{

    if (tRefFrame!=0) delete tRefFrame;
    tRefFrame=new QSqlRelationalTableModel(this,QSqlDatabase::database());
    tRefFrame->setTable(QSqlDatabase().driver()->escapeIdentifier("fr_frame",
        QSqlDriver::TableName));
    tRefFrame->setEditStrategy(QSqlTableModel::OnManualSubmit);

    tRefFrame->setRelation(5, QSqlRelation("ref_source", "id", "name"));

    tRefFrame->setRelation(4, QSqlRelation("fr_frame", "id", "name"));

    filterTable(tRefFrame->relationModel(5));

    tRefFrame->sort(0,Qt::AscendingOrder);
    tRefFrame->select();

    vTables << tRefFrame;

    if (tSubFrame!=0) delete tSubFrame;
    tSubFrame=new QSqlTableModel();
    if (tRefGLS!=0) delete tRefGLS;
    tRefGLS=new QSqlTableModel();
    if (tRefLS!=0) delete tRefLS;
    tRefLS=new QSqlTableModel();
    if (tRefVessels!=0) delete tRefVessels;
    tRefVessels=new QSqlTableModel();
    if (tLinkFr2GLS!=0) delete tLinkFr2GLS;
    tLinkFr2GLS=new QSqlTableModel();
    if (tLinkGLS2LS!=0) delete tLinkGLS2LS;
    tLinkGLS2LS=new QSqlTableModel();
    if (tLinkLS2Vessels!=0) delete tLinkLS2Vessels;
    tLinkLS2Vessels=new QSqlTableModel();
    if (tChangesPermVessel!=0) delete tChangesPermVessel;
    tChangesPermVessel=new QSqlTableModel();
    if (tChangesTempVessel!=0) delete tChangesTempVessel;
    tChangesTempVessel=new QSqlTableModel();
    if (tChangesPermLS!=0) delete tChangesPermLS;
    tChangesPermLS=new QSqlTableModel();
    if (tChangesPermGLS!=0) delete tChangesPermGLS;
    tChangesPermGLS=new QSqlTableModel();
    if (rRefTempFrame!=0) delete rRefTempFrame;
    rRefTempFrame=new QSqlTableModel();

    initModel(tSubFrame,"fr_sub_frame");
    initModel(tRefGLS,"ref_group_of_landingsites");
    filterTable(tRefGLS);
    initModel(tRefLS,"ref_abstract_landingsite");
    filterTable(tRefLS);
    initModel(tRefVessels,"ref_vessels");
    filterTable(tRefVessels);
    initModel(tLinkFr2GLS,"fr_f2gls");
    initModel(tLinkGLS2LS,"fr_gls2als");
    initModel(tLinkLS2Vessels,"fr_als2vessel");
    initModel(tChangesPermVessel,"changes_perm_vessel");
    initModel(tChangesTempVessel,"abstract_changes_temp_vessel");
    initModel(tChangesPermLS,"changes_perm_ls");
    initModel(tChangesPermGLS,"changes_perm_gls");
    initModel(rRefTempFrame,"ref_temp_frame");

}

bool ModelInterface::filterTables()
{
    QVector<QSqlTableModel*>::iterator it;
    for (it = vTables.begin(); it != vTables.end(); ++it){
        filterTable(*it);
    }
    return true;
}

bool ModelInterface::initModel(QSqlTableModel* model, const QString strTable, const bool bFilter)
{
    model->setTable(strTable);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->sort(0,Qt::AscendingOrder);
    model->select();

    if (bFilter) vTables << model;

    return true;
}

ModelInterface::~ModelInterface()
{
    QVector<QSqlTableModel*>::iterator it;
    for (it = vTables.begin(); it != vTables.end(); ++it){
         if ((*it)!=0) delete (*it);
    }
}

bool ModelInterface::writeModel()
{
    return writeTables();
}

bool ModelInterface::initTempFrame(Sample* sample, int& tempFrameId)
{
    bool bOk=true;
    if (!insertNewRecord(rRefTempFrame)){
        bOk=false;
        return false;
      }

    while (rRefTempFrame->canFetchMore())
         rRefTempFrame->fetchMore();

    int id_source,id_cell,id_minor_strata;
    if (!getNonAbstractProperties(sample,id_source,id_cell,id_minor_strata))
        {bOk=false; return false;}

    QModelIndex idx=rRefTempFrame->index(rRefTempFrame->rowCount()-1,1);//MS
    if (!idx.isValid())
        {bOk=false; return false;}
    rRefTempFrame->setData(idx,id_minor_strata);

    idx=rRefTempFrame->index(rRefTempFrame->rowCount()-1,2);//source
    if (!idx.isValid())
        {bOk=false; return false;}
    rRefTempFrame->setData(idx,id_source);

    idx=rRefTempFrame->index(rRefTempFrame->rowCount()-1,3);//cell
    if (!idx.isValid())
        {bOk=false; return false;}
    rRefTempFrame->setData(idx,id_cell);

    bOk=rRefTempFrame->submitAll();

    while (rRefTempFrame->canFetchMore())
         rRefTempFrame->fetchMore();

    // and grab the id...
    idx=rRefTempFrame->index(
        rRefTempFrame->rowCount()-1,0);

    if (!idx.isValid()) return false;
    tempFrameId=idx.data().toInt();

    return bOk;

}

bool ModelInterface::writeTempChanges(Sample* sample, int& ct)
{
    ct=0;
    int tempFrameId=-1;
    bool bOk=initTempFrame(sample,tempFrameId);
    if (bOk==false)
        return false;

    //TODO: INSERT A record on table tChangesTempVessel, and link to that on changes_temp_vessel; redo the queries for reading temporary frame, and filtering vessels

    TreeItem* root=treeModel->root();

    for (int i=0; i < root->childCount(); ++i){
        if (root->child(i)->data(0).toString().compare(
                qApp->translate("bin", strInactive)
                /*, Qt::CaseInsensitive*/)!=0)//does not compare
        {
            TreeItem* frameRoot=root->child(i);
            for (int j=0; j < frameRoot->childCount(); ++j){

                TreeItem* gls=frameRoot->child(j);
                for (int k=0; k < gls->childCount(); ++k){
                    TreeItem* ls=gls->child(k);
                    for (int l=0; l < ls->childCount(); ++l){
                        TreeItem* vs=ls->child(l);

                        if (writeTempChangesVessel(vs,sample,tempFrameId,bOk))
                            ct++;
                        if (bOk==false)
                            return false;
                    }
                }
            }

        }else{//"flatten" bin
            TreeItem* frameBin=root->child(i);

            for (int j=0; j < frameBin->childCount(); ++j){

                TreeItem* gls=frameBin->child(j);

                if (writeTempChangesVessel(gls,sample,tempFrameId,bOk,true))//root
                            ct++;
                if (bOk==false) return false;
                for (int k=0; k < gls->childCount(); ++k){
                    TreeItem* ls=gls->child(k);

                    if (writeTempChangesVessel(ls,sample,tempFrameId,bOk,true))//gls
                        ct++;
                    if (bOk==false) return false;
                    for (int l=0; l < ls->childCount(); ++l){
                        TreeItem* vs=ls->child(l);

                        if (writeTempChangesVessel(vs,sample,tempFrameId,bOk,true))//ls
                            ct++;
                        if (bOk==false) return false;
                    }
                }
            }


        }
    }

    return true;
}

bool ModelInterface::getNonAbstractProperties(Sample* sample, int& id_source, int& id_cell, int& id_minor_strata)
{
    QSqlQuery query;
    query.prepare( "SELECT     id"
                   " FROM         ref_source"
                   " WHERE     (name = :name)" );
    query.bindValue(0,qApp->translate("frame", (sample->bLogBook? strLogbook: strSampling) ));

    if (!query.exec() || query.numRowsAffected()!=1){
        return false;
    }
    query.first();
    id_source=query.value(0).toInt();

    if (sample->bLogBook){
        id_minor_strata=sample->minorStrataId;
        //id_cell=1;

        query.prepare(" SELECT id FROM         sampled_cell"
                       " WHERE id_minor_strata=(SELECT id from ref_minor_strata"
                       " WHERE     (name = 'n/a') )" );

        if (!query.exec() || query.size()!=1){
            return false;
        }
        query.first();
        id_cell=query.value(0).toInt();

    }else{
        id_cell=sample->cellId;
        //id_minor_strata=3;

        query.prepare(" SELECT id FROM         ref_minor_strata"
                      " WHERE     (name = 'n/a') " );

        if (!query.exec() || query.size()!=1){
            return false;
        }
        query.first();
        id_minor_strata=query.value(0).toInt();

    }

    return true;
}


bool ModelInterface::writeTempChangesVessel(TreeItem* vs, Sample* sample,  const int tempFrameId, bool &bOk, const bool bBin)
{
    bOk=true;

    if (tempFrameId==-1) return false;

    if (vs->data(6)!=-1 ){

        if (!insertNewRecord(tChangesTempVessel)){
            bOk=false;
            return false;
          }

        int outsideId;
        if (!getOutsideALS(outsideId)) {bOk=false; return false;}

        int id_source,id_cell,id_minor_strata;
        if (!getNonAbstractProperties(sample,id_source,id_cell,id_minor_strata))
            {bOk=false; return false;}

        QModelIndex idx=tChangesTempVessel->index(tChangesTempVessel->rowCount()-1,1);//temp frame id
        if (!idx.isValid())
            {bOk=false; return false;}
        tChangesTempVessel->setData(idx,tempFrameId);

        idx=tChangesTempVessel->index(tChangesTempVessel->rowCount()-1,2);//vessel
        if (!idx.isValid())
            {bOk=false; return false;}
        tChangesTempVessel->setData(idx,vs->data(4));

        idx=tChangesTempVessel->index(tChangesTempVessel->rowCount()-1,3);//from
        if (!idx.isValid())
            {bOk=false; return false;}
        int from;
        if (!findOrigin(vs,from))
            {bOk=false; return false;}

        if (!tChangesTempVessel->setData(idx,from)) {bOk=false; return false;}//origin

        idx=tChangesTempVessel->index(tChangesTempVessel->rowCount()-1,4);//to
        if (!idx.isValid())
            {bOk=false; return false;}

        QVariant to;//Bin items always go to the root
        to=bBin?outsideId:vs->parent()->data(4);

        if (!tChangesTempVessel->setData(idx,to)) return false;

        idx=tChangesTempVessel->index(tChangesTempVessel->rowCount()-1,5);//reasons
        if (!idx.isValid())
            {bOk=false; return false;}
        int reasonId;

        if (!getIdofReason(vs->data(5).toString(), reasonId)) {bOk=false; return false;}
        if (!tChangesTempVessel->setData(idx,reasonId)) {bOk=false; return false;}

        return tChangesTempVessel->submitAll();
    }
    return false;
}

bool ModelInterface::findOrigin(TreeItem* vs, int& lsId)
{
    int internalId=vs->data(6).toInt();

    QModelIndex root=treeModel->index(0,0,QModelIndex());
    if (!root.isValid()) return false;

    //Search inside the bin first
    QModelIndex bin=treeModel->index(1,0,QModelIndex());
    if (!bin.isValid()) return false;
    TreeItem *pBin = static_cast<TreeItem*>
        (bin.internalPointer());

    //n.b.: IMPORTANT - check on the root bin too!
    if (bin.internalId()==internalId)
    {
        //lsId=outsideId;
        lsId=pBin->data(4).toInt();
        return true;
    }

    for (int i=0; i < pBin->childCount(); ++i)
    {
            QModelIndex gls=treeModel->index(i,0,bin);
            if (!gls.isValid()) return false;
            TreeItem *pGls = static_cast<TreeItem*>
                (gls.internalPointer());

                //n.b.: search in the root first!
                if (gls.internalId()==internalId)
                {
                    //lsId=outsideId;
                    lsId=pGls->data(4).toInt();
                    return true;
                }
                //than dive into the ls level
                for (int j=0; j < pGls->childCount(); ++j)
                {
                    QModelIndex ls=treeModel->index(j,0,gls);
                    if (!ls.isValid()) return false;
                    TreeItem *pLs = static_cast<TreeItem*>
                        (ls.internalPointer());

                    if (ls.internalId()==internalId)
                    {
                        //lsId=outsideId;
                        lsId=pLs->data(4).toInt();
                        return true;
                    }
                }
    }

    //Now search the root
    TreeItem *pRoot = static_cast<TreeItem*>
        (root.internalPointer());

    for (int i=0; i < pRoot->childCount(); ++i)
    {
            QModelIndex gls=treeModel->index(i,0,root);
            if (!gls.isValid()) return false;
            TreeItem *pGls = static_cast<TreeItem*>
                (gls.internalPointer());
            for (int j=0; j < pGls->childCount(); ++j)
            {
                QModelIndex ls=treeModel->index(j,0,gls);
                if (!ls.isValid()) return false;
                TreeItem *pLs = static_cast<TreeItem*>
                    (ls.internalPointer());

                if (ls.internalId()==internalId)
                {
                    lsId=pLs->data(4).toInt();
                    return true;
                }

            }

    }

    return true;
}

bool ModelInterface::insertNewRecord(QSqlTableModel* model)
{
   return model->insertRow(model->rowCount());
}

bool ModelInterface::writeFr2GLS(const int FrameId, const QVector<int>& vId)
{
    QVector<int>::const_iterator it;
    for (it = vId.begin(); it != vId.end(); ++it){

        if (!tLinkFr2GLS->insertRow(tLinkFr2GLS->rowCount()))
            return false;

        QModelIndex idx=tLinkFr2GLS->index(tLinkFr2GLS->rowCount()-1,1);
        if (!idx.isValid()) return false;
        if (!tLinkFr2GLS->setData(idx,FrameId)) return false;//id frame

        idx=tLinkFr2GLS->index(tLinkFr2GLS->rowCount()-1,2);
        if (!idx.isValid()) return false;
        if (!tLinkFr2GLS->setData(idx,*it)) return false;//id gls

        if (!tLinkFr2GLS->submitAll())
            return false;

    }

    return true;
}

bool ModelInterface::writeGLS2LS(const int FrameId, const int GLSId, const QVector<int>& vId)
{
    QVector<int>::const_iterator it;
    for (it = vId.begin(); it != vId.end(); ++it){

        if (!tLinkGLS2LS->insertRow(tLinkGLS2LS->rowCount()))
            return false;

        QModelIndex idx=tLinkGLS2LS->index(tLinkGLS2LS->rowCount()-1,1);
        if (!idx.isValid()) return false;
        if (!tLinkGLS2LS->setData(idx,FrameId)) return false;//id frame

        idx=tLinkGLS2LS->index(tLinkGLS2LS->rowCount()-1,2);
        if (!idx.isValid()) return false;
        if (!tLinkGLS2LS->setData(idx,GLSId)) return false;//id gls

        idx=tLinkGLS2LS->index(tLinkGLS2LS->rowCount()-1,3);
        if (!idx.isValid()) return false;
        if (!tLinkGLS2LS->setData(idx,*it)) return false;//id ls

        if (!tLinkGLS2LS->submitAll())
            return false;

    }

    return true;
}

bool ModelInterface::writeLS2Vessel(const int FrameId, const int lsId, const QVector<int>& vId)
{

    QVector<int>::const_iterator it;
    for (it = vId.begin(); it != vId.end(); ++it){

        if (!tLinkLS2Vessels->insertRow(tLinkLS2Vessels->rowCount()))
            return false;

        QModelIndex idx=tLinkLS2Vessels->index(tLinkLS2Vessels->rowCount()-1,1);
        if (!idx.isValid()) return false;
        if (!tLinkLS2Vessels->setData(idx,FrameId)) return false;//id frame

        idx=tLinkLS2Vessels->index(tLinkLS2Vessels->rowCount()-1,2);
        if (!idx.isValid()) return false;
        if (!tLinkLS2Vessels->setData(idx,lsId)) return false;//id ls

        idx=tLinkLS2Vessels->index(tLinkLS2Vessels->rowCount()-1,3);
        if (!idx.isValid()) return false;
        if (!tLinkLS2Vessels->setData(idx,*it)) return false;//id vessel

        if (!tLinkLS2Vessels->submitAll())
            return false;

    }

    return true;
}

bool ModelInterface::getIdofGLS(const TreeItem* item, int& id)
{
    if (item->data(4).toInt()!=-1){
        id=item->data(4).toInt();
    }else{

        if (!tRefGLS->insertRow(tRefGLS->rowCount()))
            return false;

        QModelIndex idx=tRefGLS->index(tRefGLS->rowCount()-1,1);
        if (!idx.isValid()) return false;
        if (!tRefGLS->setData(idx,item->data(0))) return false;//name

        if (!item->data(1).toString().isEmpty()){
            idx=tRefGLS->index(tRefGLS->rowCount()-1,3);
            if (!idx.isValid()) return false;
            if (!tRefGLS->setData(idx,item->data(1))) return false;//description
        }

        if (!item->data(3).toString().isEmpty()){
            idx=tRefGLS->index(tRefGLS->rowCount()-1,4);
            if (!idx.isValid()) return false;
            if (!tRefGLS->setData(idx,item->data(3))) return false;//comment
        }
        if (!tRefGLS->submitAll())
            return false;

        idx=tRefGLS->index(tRefGLS->rowCount()-1,0);
        id=tRefGLS->data(idx).toInt();
    }

    return true;
}

bool ModelInterface::genericInsertChanges(const TreeItem* item, const int itemId, const int frameId, QSqlTableModel * model)
{
    //if we have reasons, write them
    if (!item->data(5).toString().isEmpty()){

        if (!model->insertRow(model->rowCount()))
            return false;

        QModelIndex idx=model->index(model->rowCount()-1,1);
        if (!idx.isValid()) return false;
        if (!model->setData(idx,frameId)) return false;//id_frame

        idx=model->index(model->rowCount()-1,2);
        if (!idx.isValid()) return false;
        if (!model->setData(idx,itemId)) return false;//id

        idx=model->index(model->rowCount()-1,3);
        if (!idx.isValid()) return false;

        if (static_cast<TreeModel::Level>(item->data(2).toInt())==TreeModel::VS){
            int id;
            if (!getIdofReason(item->data(5).toString(),id))
                return false;
            if (!model->setData(idx,id)) return false;//reason
        }else
            if (!model->setData(idx,item->data(5))) return false;//reason

        if (!model->submitAll())
            return false;
    }

    return true;
}

bool ModelInterface::getIdofLS(const TreeItem* item, int& id)
{
    if (item->data(4).toInt()!=-1){
        id=item->data(4).toInt();
    }else {

        if (!tRefLS->insertRow(tRefLS->rowCount()))
            return false;

        //for now, we only give support for adding virtual ports
        //3,17,8
        QModelIndex idx=tRefLS->index(tRefLS->rowCount()-1,1);
        if (!idx.isValid()) return false;
        if (!tRefLS->setData(idx,3)) return false;//type

        idx=tRefLS->index(tRefLS->rowCount()-1,2);
        if (!idx.isValid()) return false;
        if (!tRefLS->setData(idx,17)) return false;//port

        idx=tRefLS->index(tRefLS->rowCount()-1,3);
        if (!idx.isValid()) return false;
        if (!tRefLS->setData(idx,8)) return false;//collector

        idx=tRefLS->index(tRefLS->rowCount()-1,4);
        if (!idx.isValid()) return false;
        if (!tRefLS->setData(idx,item->data(0))) return false;//name

        if (!item->data(1).toString().isEmpty()){
            idx=tRefLS->index(tRefLS->rowCount()-1,6);
            if (!idx.isValid()) return false;
            if (!tRefLS->setData(idx,item->data(1))) return false;//description
        }

        if (!item->data(3).toString().isEmpty()){
            idx=tRefLS->index(tRefLS->rowCount()-1,7);
            if (!idx.isValid()) return false;
            if (!tRefLS->setData(idx,item->data(3))) return false;//comment
        }

        if (!tRefLS->submitAll())
            return false;

        idx=tRefLS->index(tRefLS->rowCount()-1,0);
        id=tRefLS->data(idx).toInt();
    }
    return true;
}

bool ModelInterface::getIdofSubFrameType(const QString strType, int& id)
{
    QSqlQuery query;
    query.prepare(
    "SELECT     ID"
    " FROM         ref_frame"
    " WHERE     (name = :name)"
    );

    query.bindValue(0, strType);

    if (!query.exec()) return false;
    if (query.size()<1) return false;//It must *always* find an id

    query.first();
    id=query.value(0).toInt();

    return true;
}

bool ModelInterface::getIdofBin(const QString strTable, int& id)
{
    QSqlQuery query;
    QString queryStr=
    tr("SELECT     id")+
    tr(" FROM         [table]")+
    tr(" WHERE     (name = :bin)")
    ;

    queryStr.replace(tr("[table]"),strTable);
    query.prepare(queryStr);

    query.bindValue(0, qApp->translate("bin", strOutside));

    if (!query.exec()) return false;
    if (query.size()<1) return false;//It must *always* find an id

    query.first();
    id=query.value(0).toInt();

    return true;
}

bool ModelInterface::getIdofReason(const QString strReason, int& id)
{
    QSqlQuery query;

    query.prepare(
    "SELECT     id"
    " FROM         ref_changes"
    " WHERE     (name = :name)"
    );

    if (strReason.isEmpty())
    {
        query.bindValue(0, qApp->translate("null_replacements", strMissing));
    }else{
        query.bindValue(0, strReason);
    }

    if (!query.exec()) return false;
    if (query.size()<1) return false;//It must *always* find an id

    query.first();
    id=query.value(0).toInt();

    return true;
}

bool ModelInterface::getOutsideALS(int& id)
{
    QSqlQuery query;
    query.prepare(
    "SELECT     id"
    " FROM         ref_abstract_landingsite"
    " WHERE     (Name = :name)"
    );

    query.bindValue(0, qApp->translate("bin", strOutside));

    if (!query.exec()) return false;
    if (query.size()<1) return false;//It must *always* find the Vessel ID!

    query.first();
    id=query.value(0).toInt();

    return true;
}

bool ModelInterface::getIdofVessel(const TreeItem* item, int& id)
{
    if (item->data(4).toInt()==-1) return false;

    QSqlQuery query;
    query.prepare(
    "SELECT     vesselid"
    " FROM         ref_vessels"
    " WHERE     (vesselid = :id)"
    );

    query.bindValue(0, item->data(4));

    if (!query.exec()) return false;
    if (query.size()<1) return false;//It must *always* find the Vessel ID!

    query.first();
    id=query.value(0).toInt();

    return true;
}

bool ModelInterface::writeManyVessels(TreeItem* item, const int lsId, const int frameId, const bool bBin)
{
    QVector<int> vId;
    for (int i=0; i < item->childCount(); ++i){

        if (!writeVessel(item->child(i),frameId,vId,bBin))
            return false;
    }

    int lsBinId;//=34;
    if (!getIdofBin("ref_abstract_landingsite",lsBinId))
        return false;

    return writeLS2Vessel(frameId,bBin?lsBinId:lsId,vId);
}

bool ModelInterface::writeVessel(TreeItem* item, const int frameId, QVector<int>& vId, const bool bBin)
{
    int vesselId;
    if (!getIdofVessel(item,vesselId))
        return false;
    vId << vesselId;

    if (!genericInsertChanges(item,vesselId,frameId,tChangesPermVessel))
        return false;

    return true;
}

bool ModelInterface::writeManyLS(TreeItem* item, const int glsId, const int frameId, const bool bBin)
{
    QVector<int> vId;
    for (int i=0; i < item->childCount(); ++i){

        if (!writeLS(item->child(i),frameId,vId,bBin)) return false;

    }

    int glsBinId;
    if (!getIdofBin("ref_group_of_landingsites",glsBinId))
        return false;

    return writeGLS2LS(frameId,bBin?glsBinId:glsId,vId);
}

bool ModelInterface::writeLS(TreeItem* item, const int frameId, QVector<int>& vId, const bool bBin)
{
    int lsId;
    if (!getIdofLS(item,lsId))
        return false;

    vId << lsId;

    if (!writeManyVessels(item, lsId, frameId, bBin))
        return false;

    if (!genericInsertChanges(item,lsId,frameId,tChangesPermLS))
        return false;

    return true;
}

bool ModelInterface::writeBin(TreeItem* item, const int id)
{
    //When writing the bin structure is "flattened out".
    for (int i=0; i < item->childCount(); ++i){
        if (static_cast<TreeModel::Level>(item->child(i)->data(2).toInt())==TreeModel::GLS){

            QVector<int> vId;
            if (!writeGLS(item->child(i),id,vId,true))
                return false;
            if (!writeFr2GLS(id,vId)) return false;

        }else if (static_cast<TreeModel::Level>(item->child(i)->data(2).toInt())==TreeModel::LS){

            int glsBinId;
            if (!getIdofBin("ref_group_of_landingsites",glsBinId))
                return false;
            QVector<int> vId;
            if (!writeLS(item->child(i),id, vId, true))
                return false;
            if (!writeGLS2LS(id,glsBinId,vId)) return false;

        }else if (static_cast<TreeModel::Level>(item->child(i)->data(2).toInt())==TreeModel::VS){

            int lsBinId;//=34;
            if (!getIdofBin("ref_abstract_landingsite",lsBinId))
                return false;
            QVector<int> vId;
            if (!writeVessel(item->child(i),id,vId)) return false;
            if (!writeLS2Vessel(id,lsBinId,vId)) return false;

        } else
            return false;//n.b.: it should never come here!
        }
    return true;
}

bool ModelInterface::writeManyGLS(TreeItem* item, const int id)
{
    QVector<int> vId;
    for (int i=0; i < item->childCount(); ++i){
        if (!writeGLS(item->child(i),id,vId))
            return false;
    }

    return writeFr2GLS(id,vId);
}

bool ModelInterface::writeGLS(TreeItem* item, const int id, QVector<int>& vId, const bool bBin)
{
    int glsId;
    if (!getIdofGLS(item,glsId))
        return false;
    vId << glsId;

    if (!writeManyLS(item, glsId, id, bBin))
        return false;

    if (!genericInsertChanges(item,glsId,id,tChangesPermGLS))
        return false;

    return true;
}

bool ModelInterface::insertSubFrame(const QString str, const int frameId, int& id)
{
    if (!insertNewRecord(tSubFrame)) return false;

    QModelIndex sIdx=tSubFrame->index(tSubFrame->rowCount()-1,1);
    if (!sIdx.isValid()) return false;
    int type;
    if (!getIdofSubFrameType(str,type)) return false;
    if (!tSubFrame->setData(sIdx,type)) return false;//type

    sIdx=tSubFrame->index(tSubFrame->rowCount()-1,4);
    if (!sIdx.isValid()) return false;
    if (!tSubFrame->setData(sIdx,frameId)) return false;//id frame

    sIdx=tSubFrame->index(tSubFrame->rowCount()-1,2);
    if (!sIdx.isValid()) return false;
    if (!tSubFrame->setData(sIdx,str)) return false;//description

    if (!tSubFrame->submitAll()) return false;

    sIdx=tSubFrame->index(
        tSubFrame->rowCount()-1,0);

    if (!sIdx.isValid()) return false;
    id=sIdx.data().toInt();

    return true;
}

bool ModelInterface::Count(int& cnt)
{
    QSqlQuery query;
    QString strQuery="select count(*) from fr_frame";
    if (!query.prepare(strQuery))
        return false;
    query.setForwardOnly(true);
    if (!query.exec()){
        qDebug() << query.lastError().text() << endl;
        return false;
    }
    query.first();
    cnt=query.record().value(0).toInt();
    return true;
}

bool ModelInterface::writeTables()
{
    //first write the frame
    if (!tRefFrame->submitAll())
        return false;

    while (tRefFrame->canFetchMore())
         tRefFrame->fetchMore();

    // and grab the id...
    QModelIndex idx=tRefFrame->index(
        tRefFrame->rowCount()-1,0);

    if (!idx.isValid()) return false;

    int frameId=idx.data().toInt();

    TreeItem* root=treeModel->root();

    for (int i=0; i < root->childCount(); ++i){
        if (root->child(i)->data(0).toString().compare(
                qApp->translate("bin", strInactive)
                )!=0)//does not compare
        {

            int subFrameId;
            if (!insertSubFrame(qApp->translate("frame", strRoot),frameId,subFrameId)) return false;
            if (!writeManyGLS(root->child(i), subFrameId))
                return false;

        }else{//bin
            int subFrameId;
            if (!insertSubFrame(qApp->translate("bin", strOutside),frameId,subFrameId)) return false;
            if (!writeBin(root->child(i), subFrameId))
                return false;
        }
    }
    return true;
}

void ModelInterface::removeFilters()
{
    QVector<QSqlTableModel*>::iterator it;
    for (it = vTables.begin(); it != vTables.end(); ++it){
         (*it)->setFilter("");
    }
}

bool ModelInterface::submitAll()
{
    QVector<QSqlTableModel*>::iterator it;
    for (it = vTables.begin(); it != vTables.end(); ++it){
        (*it)->submitAll();
    }
    return true;
}

bool ModelInterface::revertAll()
{
    QVector<QSqlTableModel*>::iterator it;
    for (it = vTables.begin(); it != vTables.end(); ++it){
        (*it)->revertAll();
    }
    return true;
}

bool ModelInterface::getErrors(QString& strError)
{
    strError=tr("");//initialize
    QVector<QSqlTableModel*>::iterator it;
    for (it = vTables.begin(); it != vTables.end(); ++it){
        if ((*it)->lastError().type()!=QSqlError::NoError){
            if (it!=vTables.begin()) strError.append( tr(" AND ") );
            strError.append((*it)->lastError().text());
        }
    }
    return !strError.isEmpty();
}

bool ModelInterface::rollback(const bool bSubmitted, const FrmFrameDetails::Persistence persistence)
{
    //if it was submited just remove the last frame and cascades will take care of everything!
    //otherwise rollbak

    QSqlTableModel* m;
    if (persistence==FrmFrameDetails::PERMANENT)
        m=tRefFrame;
    else
        m=tChangesTempVessel;

    return (bSubmitted? m->removeRow(m->rowCount()-1) &&
        m->submitAll(): revertAll());
}

bool ModelInterface::readOneGLS(const int inRow, const int outRow, const QModelIndex& parent, const bool bBin, QModelIndex& cIndex)
{
    treeModel->insertRow(outRow,parent);

    QVariant var;
    if (!mapData(inRow,outRow,1,0,parent,tRefGLS,var))
        return false;//Name

    if (!mapData(inRow,outRow,3,1,parent,tRefGLS,var))
        return false;//Description

    if (!mapData(inRow,outRow,4,3,parent,tRefGLS,var))
        return false;//Comments

    if (!mapData(inRow,outRow,0,4,parent,tRefGLS,var))
        return false;//ID

    QModelIndex gls = treeModel->index(outRow, 2, parent);
    treeModel->setData(gls, QVariant(TreeModel::GLS));//level

    gls = treeModel->index(outRow, 6, parent);
    treeModel->setData(gls, -1);//origin

    gls = treeModel->index(outRow, 7, parent);
    bBin?treeModel->setData(gls, tr(":/app_new/glsd.png"))
        :treeModel->setData(gls, tr(":/app_new/gls.png"));//symb

    cIndex=treeModel->index(outRow, 0, parent);
    return (cIndex.isValid());
}

bool ModelInterface::readRefGLS(const QModelIndex& index, const bool bBin)
{
    for (int i=0; i < tRefGLS->rowCount(); ++i)
    {
        QModelIndex idx;
        if (!readOneGLS(i,i,index,bBin,idx)) return false;
    }

    return true;
}

bool ModelInterface::readOneLS(const int inRow, const int outRow, const QModelIndex& parent, const bool bBin, QModelIndex& cIndex)
{
    treeModel->insertRow(outRow,parent);

    QVariant var;
    if (!mapData(inRow,outRow,4,0,parent,tRefLS,var))
        return false;//Name

    if (!mapData(inRow,outRow,6,1,parent,tRefLS,var))
        return false;//Description

    if (!mapData(inRow,outRow,7,3,parent,tRefLS,var))
        return false;//Comments

    if (!mapData(inRow,outRow,0,4,parent,tRefLS,var))
        return false;//ID

    QModelIndex ls = treeModel->index(outRow, 2, parent);
    treeModel->setData(ls, QVariant(TreeModel::LS));//level

    ls = treeModel->index(outRow, 6, parent);
    treeModel->setData(ls, -1);//origin

    ls = treeModel->index(outRow, 7, parent);
    treeModel->setData(ls, bBin?tr(":/app_new/lsd.png"):
        tr(":/app_new/ls.png"));//symb

    cIndex=treeModel->index(outRow, 0, parent);

    return (cIndex.isValid());
}
bool ModelInterface::readRefLS(const QModelIndex& parent,const bool bBin)
{
    for (int i=0; i < tRefLS->rowCount(); ++i)
    {
        QModelIndex idx;
        if (!readOneLS(i,i,parent,bBin,idx)) return false;
    }

    return true;
}

bool ModelInterface::readOneVS(const int inRow, const int outRow, const bool bBin, const QModelIndex& parent, const QVector<int>& vVesselsBlackList)
{
    treeModel->insertRow(outRow,parent);

    QVariant var;
    if (!mapData(inRow,outRow,7,0,parent,tRefVessels,var))
        return false;//Name

    if (!mapData(inRow,outRow,7,3,parent,tRefVessels,var))
        return false;//Comments

    if (!mapData(inRow,outRow,0,4,parent,tRefVessels,var))
        return false;//VesselID

    QModelIndex vs = treeModel->index(outRow, 2, parent);
    treeModel->setData(vs, QVariant(TreeModel::VS));//level

    vs = treeModel->index(outRow, 6, parent);
    treeModel->setData(vs, -1);//origin

    vs = treeModel->index(outRow, 7, parent);
    if (vVesselsBlackList.contains(var.toInt())){
        treeModel->setData(vs, tr(":/app_new/vesself.png"));
    }else{
        treeModel->setData(vs, bBin?tr(":/app_new/vesseld.png"):
            tr(":/app_new/vessel.png"));//symb
    }

    vs = treeModel->index(outRow, 8, parent);

      treeModel->setData(vs, vVesselsBlackList.contains(var.toInt())?true: false);

    return true;
}

bool ModelInterface::readRefVS(const QModelIndex& parent, const QVector<int>& vVesselsBlackList, const bool bBin)
{
    for (int i=0; i < tRefVessels->rowCount(); ++i)
    {
        if (!readOneVS(i,i,bBin,parent,vVesselsBlackList)) return false;
    }

    return true;
}

bool ModelInterface::readModel(const Sample* sample, const int options)
{
    //TODO: if tmp, initialize query to have the vessel list: pass the list to the vessels -> if they re in, they re unmovable
    //TODO: reactivate black list

    QVector<int> vVesselsBlackList;/*
    if (options & FrmFrameDetails::READ_TMP)
    {
        if (!getVesselsBlackList(sample,vVesselsBlackList))
            return false;
    }*/
    //TODO: pass this to the vessels

    //Read all the reference tables and put them on the bin
    QModelIndex bin;
    QModelIndex root;
    if (!createRootElements(bin, root))
        return false;

    int frameId=sample->frameId;
    tSubFrame->setFilter("id_frame=" + QVariant(frameId).toString());

    if (tSubFrame->rowCount()!=2) return false;
    //ATTENTION: type for now is hardcoded - root=1, bin=2!
    for (int i=0; i < tSubFrame->rowCount(); ++i)
    {
        if (tSubFrame->index(i,1).data()==1){
            if (!readRoot(tSubFrame->index(i,0).data().toInt(),root,false,vVesselsBlackList)) return false;
        }else{
            if (!readBin(tSubFrame->index(i,0).data().toInt(),bin,true,vVesselsBlackList)) return false;
        }
    }

    tSubFrame->setFilter("");

    if (options & FrmFrameDetails::READ_TMP) {
        if (!readTempChangesVessel(sample)) return false;
    }

    return true;
}


bool ModelInterface::getVesselsBlackList(const Sample* sample, QVector<int>& vVesselsBlackList)
{    
    QSqlQuery query;
    QString strQuery;

    //Q_ASSERT_X(sample->bLogBook, "GetVesselsBlackList", "Refer to Sampling Frame!");

    if (!sample->bLogBook){
        strQuery=
                "select    abstract_sampled_vessels.vesselid, sampled_cell_vessel_types.id_cell"
        "	  from         sampled_cell_vessel_types inner join"
        "			      sampled_cell_vessels on sampled_cell_vessel_types.id = sampled_cell_vessels.id_cell_vessel_types inner join"
        "			      abstract_sampled_vessels on sampled_cell_vessels.id = abstract_sampled_vessels.id_sampled_cell_vessels"

                " where sampled_cell_vessel_types.id_cell in "
                "("
                "	select     "
                "	  sampled_cell.id from       "
                "	  sampled_cell inner join     "
                "	  ref_minor_strata on sampled_cell.id_minor_strata = ref_minor_strata.id where"
                "	  ("
                "		  sampled_cell.start_dt <= (select sampled_cell.end_dt from sampled_cell where sampled_cell.id=" + QVariant(sample->cellId).toString() + ")"
                "		  and"
                "		sampled_cell.end_dt >=(select sampled_cell.start_dt from sampled_cell where sampled_cell.id=" + QVariant(sample->cellId).toString() + ")"
                "	)"
                "	and (ref_minor_strata.id_frame_time ="  + QVariant(sample->frameTimeId).toString() + " and (sampled_cell.id<>" + QVariant(sample->cellId).toString() + ") )	"
                ") "
                ;
    }else{
        strQuery=
                "select     abstract_sampled_vessels.vesselid, sampled_strata_vessels.id_minor_strata "
                 " from         abstract_sampled_vessels inner join "
                 "                     sampled_strata_vessels on abstract_sampled_vessels.id_sampled_strata_vessels = sampled_strata_vessels.id"
                 "           where sampled_strata_vessels.id_minor_strata in "
                 "("
                 " select     ref_minor_strata.id"
                 " from         ref_minor_strata"
                 " where  "

                        "  ("
                        "	  ref_minor_strata.start_dt <= (select ref_minor_strata.end_dt from ref_minor_strata where ref_minor_strata.id=" + QVariant(sample->minorStrataId).toString() + ")"
                        "	  and"
                        "	  ref_minor_strata.end_dt >=(select ref_minor_strata.end_dt from ref_minor_strata where ref_minor_strata.id=" + QVariant(sample->minorStrataId).toString() + ")"

                "   )"
              " and "

                 " (ref_minor_strata.id_frame_time ="  + QVariant(sample->frameTimeId).toString() + " and (ref_minor_strata.id <> " + QVariant(sample->minorStrataId).toString() + "))"

            ")"
             ;

    }

    //qDebug() << strQuery << endl;
    query.prepare(strQuery);
    if (!query.exec()) return false;
    while (query.next()){
        vVesselsBlackList.push_back(query.value(0).toInt());
    }

    return true;
}

bool ModelInterface::readTempChangesVessel(const Sample* sample)
{
    //filter for cells that refer to the same frame, and that fall within the interval of this cell;
    // A< B' and A'< B: currently deactivated - calling temp frames hooked on the same cell/ms

    /*
    QSqlQuery query;
    QString strQuery, strUnit;

    if (!sample->bLogBook){
        strQuery=                                        
            "select     "
            "  sampled_cell.id "
            " from       "
            "  sampled_cell inner join                     "
            "  ref_minor_strata on sampled_cell.id_minor_strata = ref_minor_strata.id "
            " where "
            "  ( "
            "    sampled_cell.start_dt <= (select sampled_cell.end_dt from sampled_cell where sampled_cell.id=" + QVariant(sample->cellId).toString() + ")"
            "      and "
            "    sampled_cell.end_dt >= (select sampled_cell.start_dt from sampled_cell where sampled_cell.id=" + QVariant(sample->cellId).toString() + ")"
            "  )"
            "  and (ref_minor_strata.id_frame_time ="  + QVariant(sample->frameTimeId).toString() + ") and (sampled_cell.id<=" + QVariant(sample->cellId).toString() +")"
            ; //n.b. should the *and* be an *or*? instead of falling within the interval, overlapping the interval
            strUnit="id_cell";
    }else{
        strQuery=                
            "select     ref_minor_strata.id"
            " from         ref_minor_strata"
            " where  "
            " ( "
            " ref_minor_strata.start_dt <= (select ref_minor_strata.end_dt from ref_minor_strata where id ="  + QVariant(sample->minorStrataId).toString() + ") "
            "  and "
            " ref_minor_strata.end_dt >= (select ref_minor_strata.start_dt from ref_minor_strata where id ="  + QVariant(sample->minorStrataId).toString()  + ") "
            " ) "
            " and "
            " (ref_minor_strata.id_frame_time ="  + QVariant(sample->frameTimeId).toString() + ") and (ref_minor_strata.id <= " + QVariant(sample->minorStrataId).toString() + ")"
            ;

        strUnit="id_minor_strata";
    }

    query.prepare(strQuery);
    if (!query.exec()) return false;

    QString strFilter;
    int ct=0;
    while (query.next())
    {
        if (ct>0) strFilter.append(" OR ");
        strFilter.append(strUnit + "=" + query.value(0).toString());
        ct++;
    }
*/

    //n.b.:we need to apply all changes in a row, to keep track of vessels are!

    QString
        strFilter=(!sample->bLogBook)?"id_cell=" + QVariant(sample->cellId).toString():"id_minor_strata=" + QVariant(sample->minorStrataId).toString();

    rRefTempFrame->setFilter(strFilter);

    if (rRefTempFrame->rowCount()>0){

        for (int k=0; k < rRefTempFrame->rowCount(); ++k)
        {
            QModelIndex idx=rRefTempFrame->index(k,0);

            tChangesTempVessel->setFilter("id_temp_frame="+idx.data().toString());
            for (int i=0; i < tChangesTempVessel->rowCount(); ++i)
            {
                int vesselId, from, to;

                idx=tChangesTempVessel->index(i,2);
                vesselId=idx.data().toInt();//vesselid
                idx=tChangesTempVessel->index(i,3);
                from=idx.data().toInt();//from
                idx=tChangesTempVessel->index(i,4);
                to=idx.data().toInt();//to

                if (!search4VesselParent(vesselId, from, to))
                    return false;
            }
        }
      }
    return true;

}

bool ModelInterface::search4VesselParent(const int vesselId, const int from, const int to)
{
    //The idea is to loop till LS until find "from", and then move it to the "to"

    QModelIndex root=treeModel->index(0,0,QModelIndex());
    if (!root.isValid()) return false;

    //Search inside the bin first
    QModelIndex bin=treeModel->index(1,0,QModelIndex());
    if (!bin.isValid()) return false;
    TreeItem *pBin = static_cast<TreeItem*>
        (bin.internalPointer());

    if (pBin->data(4).toInt()==from){
        return search4Vessel(pBin,vesselId,to);
    }
    //Now search the root
    TreeItem *pRoot = static_cast<TreeItem*>
        (root.internalPointer());

    for (int i=0; i < pRoot->childCount(); ++i)
    {
            QModelIndex gls=treeModel->index(i,0,root);
            if (!gls.isValid()) return false;
            TreeItem *pGls = static_cast<TreeItem*>
                (gls.internalPointer());
            for (int j=0; j < pGls->childCount(); ++j)
            {
                QModelIndex ls=treeModel->index(j,0,gls);
                if (!ls.isValid()) return false;
                TreeItem *pLs = static_cast<TreeItem*>
                    (ls.internalPointer());

                if (pLs->data(4).toInt()==from){
                    return search4Vessel(pLs,vesselId,to);
                }
            }

    }


    return false;
}

bool ModelInterface::search4Vessel(TreeItem* item,const int vesselId, const int to)
{
    for (int i=0; i < item->childCount(); ++i)
    {
        if (item->child(i)->data(4).toInt()==vesselId && item->child(i)->data(2).toInt()==TreeModel::VS){
            QList<QVariant> lData;
            for (int j=0; j <= item->child(i)->columnCount();++j)
            {
                if (j==7 && item->child(i)->data(8)==false){
                    lData << tr(":/app_new/unmovable.png");
                /*}else if (j==6){
                    lData << 111;*/
                }else{
                    lData << item->child(i)->data(j);
                }
            }

            TreeItem* clone=new TreeItem(lData,0);
            if (!moveVessel(to,clone)) return false;
            item->removeChild(i);
            return true;
        }
    }
    return false;
}

bool ModelInterface::moveVessel(const int to, TreeItem* item)
{
    QModelIndex root=treeModel->index(0,0,QModelIndex());
    if (!root.isValid()) return false;

    //Search inside the bin first
    QModelIndex bin=treeModel->index(1,0,QModelIndex());
    if (!bin.isValid()) return false;
    TreeItem *pBin = static_cast<TreeItem*>
        (bin.internalPointer());

    if (pBin->data(4)==to)
    {
        pBin->appendChild(item);
        item->setParent(pBin);
        return true;
    }

    for (int i=0; i < pBin->childCount(); ++i)
    {                        
            QModelIndex gls=treeModel->index(i,0,bin);
            if (!gls.isValid()) return false;
            TreeItem *pGls = static_cast<TreeItem*>
                (gls.internalPointer());

            if (pGls->data(4)==to && pGls->data(2).toInt()==TreeModel::LS)//here we are targetting LS on the bin root!
            {
                pGls->appendChild(item);
                item->setParent(pGls);
                return true;
            }

            //than dive into the ls level
            for (int j=0; j < pGls->childCount(); ++j)
            {
                QModelIndex ls=treeModel->index(j,0,gls);
                if (!ls.isValid()) return false;
                    (ls.internalPointer());

                TreeItem *pLs = static_cast<TreeItem*>
                (ls.internalPointer());

                if (pLs->data(4)==to)
                {
                    pLs->appendChild(item);
                    item->setParent(pLs);
                    return true;
                }

            }
    }

    //Now search the root
    TreeItem *pRoot = static_cast<TreeItem*>
        (root.internalPointer());

    for (int i=0; i < pRoot->childCount(); ++i)
    {
            QModelIndex gls=treeModel->index(i,0,root);
            if (!gls.isValid()) return false;
            TreeItem *pGls = static_cast<TreeItem*>
                (gls.internalPointer());
            for (int j=0; j < pGls->childCount(); ++j)
            {
                QModelIndex ls=treeModel->index(j,0,gls);
                if (!ls.isValid()) return false;
                TreeItem *pLs = static_cast<TreeItem*>
                    (ls.internalPointer());

                if (pLs->data(4)==to)
                {
                    pLs->appendChild(item);
                    item->setParent(pLs);
                    return true;
                }
            }

    }

    return false;
}


bool ModelInterface::readRoot(const int subFrameId, QModelIndex& root, const bool bBin, const QVector<int>& vVesselsBlackList)
{
    return readGenericStructure(subFrameId,root,bBin, vVesselsBlackList);
}

bool ModelInterface::readGenericStructure(const int subFrameId, QModelIndex& root, const bool bBin, const QVector<int>& vVesselsBlackList)
{
//n.b.: we don't need to filter the tables for n/a values inside this function!

    tLinkFr2GLS->setFilter(QString("id_sub_frame=") + QVariant(subFrameId).toString());

    if (tLinkFr2GLS->rowCount()<1) return true;//there is nothing on the bin/root

    QString strFilter="";
    for (int i=0; i < tLinkFr2GLS->rowCount();++i)
    {
        if (i>0)
            strFilter.append(" OR ");

        strFilter.append(QString("ID=")+tLinkFr2GLS->index(i,2).data().toString());
    }
    tRefGLS->setFilter(strFilter);

    //Read GLS
    for (int i=0; i < tRefGLS->rowCount(); ++i)
    {
        QModelIndex gls;
        if (!readOneGLS(i,i,root,bBin,gls)) return false;
        QModelIndex idx=tRefGLS->index(i,0);
        if (!idx.isValid()) return false;

        tLinkGLS2LS->setFilter(QString("id_sub_frame=") + QVariant(subFrameId).toString() +
            QString(" and id_gls=") + idx.data().toString());

        //read LS
        for (int j=0; j < tLinkGLS2LS->rowCount(); ++j)
        {
            tRefLS->setFilter(QString("id=") + tLinkGLS2LS->index(j,3).data().toString());
            QModelIndex ls;
            if (!readOneLS(0,j,gls,bBin,ls)) return false;

            QModelIndex aIdx=tRefLS->index(0,0);
            if (!aIdx.isValid()) return false;

            tLinkLS2Vessels->setFilter(QString("id_sub_frame=") + QVariant(subFrameId).toString() +
                QString(" AND id_abstract_landingsite=") + aIdx.data().toString());

            //read Vessel
            for (int k=0; k < tLinkLS2Vessels->rowCount(); ++k)
            {
                tRefVessels->setFilter(QString("vesselid=") + tLinkLS2Vessels->index(k,3).data().toString());
                if (!readOneVS(0,k,bBin,ls,vVesselsBlackList)) return false;
            }
        }
    }

    filterTable(tRefGLS);
    tLinkFr2GLS->setFilter("");
    tLinkGLS2LS->setFilter("");
    filterTable(tRefLS);
    tLinkLS2Vessels->setFilter("");
    filterTable(tRefVessels);

    return true;
}

bool ModelInterface::readBin(const int subFrameId, QModelIndex& bin, const bool bBin, const QVector<int>& vVesselsBlackList)
{
    //We are *only* supporting a flat sructure on the bin!
    //n.b.: we don't need to filter the tables for n/a values inside this function!

    tLinkFr2GLS->setFilter("id_sub_frame=" + QVariant(subFrameId).toString());
    tLinkGLS2LS->setFilter("id_sub_frame=" + QVariant(subFrameId).toString());
    tLinkLS2Vessels->setFilter("id_sub_frame=" + QVariant(subFrameId).toString());

    QString strFilter="";

    //read  GLS
    for (int i=0; i < tLinkFr2GLS->rowCount();++i)
    {
        if (i>0)
            strFilter.append(" OR ");

        strFilter.append(QString("id=")+tLinkFr2GLS->index(i,2).data().toString());
    }
    tRefGLS->setFilter(strFilter);

    for (int j=0; j < tLinkFr2GLS->rowCount(); ++j)
    {
        QModelIndex gls;
        if (!readOneGLS(j,j,bin,bBin,gls))
            return false;
     }

    strFilter.clear();
    //read  LS
    for (int i=0; i < tLinkGLS2LS->rowCount();++i)
    {
        if (i>0)
            strFilter.append(" OR ");

        strFilter.append(QString("id=")+tLinkGLS2LS->index(i,3).data().toString());
    }
    tRefLS->setFilter(strFilter);

    for (int j=0; j < tLinkGLS2LS->rowCount(); ++j)
    {                
        QModelIndex ls;
        if (!readOneLS(j,j,bin,bBin,ls))
            return false;
     }

    strFilter.clear();
    //read Vessel
    for (int i=0; i < tLinkLS2Vessels->rowCount();++i)
    {
        if (i>0)
            strFilter.append(tr(" OR "));

        strFilter.append(QString("vesselid=")+tLinkLS2Vessels->index(i,3).data().toString());
    }
    tRefVessels->setFilter(strFilter);

    for (int k=0; k < tLinkLS2Vessels->rowCount(); ++k)
    {
        if (!readOneVS(k,k,bBin,bin,vVesselsBlackList)) return false;
    }

    filterTable(tRefGLS);
    filterTable(tRefVessels);
    filterTable(tRefLS);
    tLinkFr2GLS->setFilter("");
    tLinkGLS2LS->setFilter("");
    tLinkLS2Vessels->setFilter("");

    return true;
}

bool ModelInterface::createModel()
{
    //Read all the reference tables and put them on the bin
    QModelIndex bin;
    QModelIndex root;
    if (!createRootElements(bin,root))
        return false;

    if (!readRefGLS(bin))
        return false;
    if (!readRefLS(bin))
        return false;
    if (!readRefVS(bin,QVector<int>()))
        return false;

    return true;
}

bool ModelInterface::createRootElements(QModelIndex& bin, QModelIndex& root)
{
    //creates sub-frame: root and bin

    QModelIndex _root = treeModel->index(0, 0, QModelIndex());

    treeModel->insertRows(0,2,_root);
    root = treeModel->index(0, 0, _root);
    treeModel->setData(root, qApp->translate("frame", strActive)/*QVariant(tr("Root")).toString()*/);
    QModelIndex tId = treeModel->index(0, 1, _root);
    treeModel->setData(tId, QVariant(tr("Frame Root")));
    tId = treeModel->index(0, 2, _root);
    treeModel->setData(tId, QVariant(TreeModel::ROOT));
    tId = treeModel->index(0, 6, _root);
    treeModel->setData(tId, -1);
    tId = treeModel->index(0, 7, _root);
    treeModel->setData(tId, tr(":/app_new/exec.png"));

    bin = treeModel->index(1, 0, _root);
    treeModel->setData(bin, qApp->translate("bin", strInactive)/*QVariant(tr("Bin")).toString()*/);
    tId = treeModel->index(1, 1, _root);
    treeModel->setData(tId, QVariant(tr("Root Recycle Bin")));
    tId = treeModel->index(1, 2, _root);
    treeModel->setData(tId, QVariant(TreeModel::ROOT));

    int outsideId;
    if (!getOutsideALS(outsideId)) return false;
    tId = treeModel->index(1, 4, _root);
    treeModel->setData(tId, outsideId);

    tId = treeModel->index(1, 6, _root);
    treeModel->setData(tId, -1);

    tId = treeModel->index(1, 7, _root);
    treeModel->setData(tId, tr(":/app_new/trashcan.png"));

    return true;
}

bool ModelInterface::mapData(const int inRow, const int outRow, const int cIn, const int cOut, const QModelIndex& parent,
                              QSqlTableModel* tModel, QVariant& result)
{
    QModelIndex mIdx = treeModel->index(outRow, cOut, parent);
    if (!mIdx.isValid()) return false;
    QModelIndex tIdx = tModel->index(inRow, cIn);
    if (!tIdx.isValid()) return false;
    treeModel->setData(mIdx, tIdx.data());
    result=tIdx.data();

    return true;
}

