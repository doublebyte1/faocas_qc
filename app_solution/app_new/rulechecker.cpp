#include "rulechecker.h"
#include "buttongroup.h"
//#include "timestampdateedit.h"
#include "sql.h"
#include "globaldefs.h"

RuleChecker::RuleChecker(QWidget* parent)
    : QWidget(parent)
{
}

RuleChecker::~RuleChecker()
{
// No pointers to release, since boost takes care of everything!
}

bool RuleChecker::init()
{
    return ( buildHashes() );
}

const bool RuleChecker::GetTypeFromString(const QString strType, Type& type)
{
    if (strType.compare(tr("default"),Qt::CaseInsensitive)==0)
    {
        type=RuleChecker::DEFAULT;
    }else if (strType.compare(tr("pre-trigger"),Qt::CaseInsensitive)==0)
    {
        type=RuleChecker::PRETRIGGER;
    }else if (strType.compare(tr("validation"),Qt::CaseInsensitive)==0)
    {
        type=RuleChecker::VALIDATION;
    }else if (strType.compare(tr("post-trigger"),Qt::CaseInsensitive)==0)
    {
        type=RuleChecker::POSTTRIGGER;
    }else if (strType.compare(tr("pre-submit"),Qt::CaseInsensitive)==0)
    {
        type=RuleChecker::PRESUBMIT;
    }else if (strType.compare(tr("n/a"),Qt::CaseInsensitive)==0)
    {
        type=RuleChecker::NA;
    } else return false;

    return true;
}

MapRules* RuleChecker::GetContainerFromType(const Type& type)
{
      switch ( type )
      {
      case RuleChecker::DEFAULT:
            return &mapDefaultRls;
      case RuleChecker::PRETRIGGER:
            return &mapPreTriggers;
      case RuleChecker::POSTTRIGGER:
            return &mapPostTriggerRls;
      case RuleChecker::VALIDATION:
            return &mapValidationRls;
      case RuleChecker::PRESUBMIT:
            return &mapPreSubmitRls;
       default:
             return 0;
      }
}

bool RuleChecker::buildHashes()
{
    //First run queries
    QString sqlActiveRules=tr("select distinct ui_rules.id, ui_rules.field, ui_rules.mapper, "
                              "ui_forms.name as form_name, "
                              "ui_rules.rule, ui_rule_types.name as type_name "
                              "from ui_rules "
                               "inner join ui_rule_types on ui_rules.type = ui_rule_types.id "
                              "inner join ui_forms on ui_rules.form=ui_forms.id "
                              "where (ui_rules.active=True)");

    QSqlQuery query;
    if (!query.prepare(sqlActiveRules)) return false;
    QSqlQuery triggerPtrQuery;
    if (!triggerPtrQuery.prepare(
        tr("select ui_rule_ptrs.field, ui_rule_ptrs.id_rules, "
           "ui_rule_ptrs.mapper, ui_forms.name as form_name, "
           "ui_rule_ptrs.id from ui_rule_ptrs inner join ui_rules on "
           "ui_rule_ptrs.id_rules = ui_rules.id "
           "inner join ui_forms on ui_rule_ptrs.form=ui_forms.id "
           "where (ui_rule_ptrs.id_rules = :id and ui_rules.active=True)"
        )) ){
            return false;
        }


    //QSqlDatabase db=QSqlDatabase::database();
    //qDebug() << db.driver()->hasFeature(QSqlDriver::QuerySize) << endl;

    query.setForwardOnly(true);
    if (!query.exec()) return false;

    if (query.size()>0){//Maybe we don't have any active rules?

        while (query.next()){
            size_t field=query.value(query.record().indexOf(tr("field"))).toInt();
            QString rule=query.value(query.record().indexOf(tr("rule"))).toString();
            QString form=query.value(query.record().indexOf(tr("form_name"))).toString();
            size_t mapper=query.value(query.record().indexOf(tr("mapper"))).toInt();
            size_t id=(size_t)query.value(query.record().indexOf(tr("id"))).toInt();
            RuleChecker::Type eRuleType;
            if (!GetTypeFromString(query.value(query.record().indexOf(tr("type_name"))).toString(),eRuleType)) return false;

            if (eRuleType==RuleChecker::DEFAULT || eRuleType==RuleChecker::PRESUBMIT
                || eRuleType==RuleChecker::VALIDATION || eRuleType==RuleChecker::POSTTRIGGER){
                // Watch out this piece of code, cause the pointers and references can get us into a lot of trouble!
                MapRules* mapPtr=GetContainerFromType(eRuleType);
                    if (mapPtr!=0){
                        if (!standardRuleInsertion(rule,id,cellShrPtr(new cell(field,form,mapper)),*mapPtr)) return false;
                    }
            }else if (eRuleType==RuleChecker::PRETRIGGER){
                // Retrieve the settings from the origin column
                size_t id=query.value(query.record().indexOf(tr("id_rules"))).toInt();
                triggerPtrQuery.bindValue(tr(":id_rules"), id);
                triggerPtrQuery.setForwardOnly(true);
                if (!triggerPtrQuery.exec()|| triggerPtrQuery.size()<1){
                    return false;
                }
                // Watch out because we can have more than one reference to rows in the other table!
                while (triggerPtrQuery.next()) {
                    size_t fieldO=triggerPtrQuery.value(triggerPtrQuery.record().indexOf(tr("field"))).toInt();
                    QString formO=triggerPtrQuery.value(triggerPtrQuery.record().indexOf(tr("form_name"))).toString();
                    size_t mapperO=triggerPtrQuery.value(triggerPtrQuery.record().indexOf(tr("mapper"))).toInt();
                    if (!standardRuleInsertion(rule,id,cellShrPtr(new cell(field,form,mapper,cellShrPtr(new cell(fieldO,formO,mapperO)))),mapPreTriggers)) return false;
                 }

            }else if (eRuleType!=RuleChecker::NA) return false;
        }

    QSqlQuery dumPtrQuery;
    if (!dumPtrQuery.prepare(

                "select ui_rules.field,ui_rules.id , ui_rules.mapper, ui_rule_types.name as type_name, "
                "ui_forms.name as form_name from ui_rules "
                        "inner join ui_forms on ui_rules.form=ui_forms.id "
                        "inner join ui_rule_types on ui_rules.type=ui_rule_types.id "
                "where (ui_rule_types.name like :par_na and ui_rules.active=True)"
        )){
            return false;
        }
    dumPtrQuery.bindValue(tr(":par_na"), qApp->translate("null_replacements", strNa));
        //Ptrs with no rule are also stored in the references map, so that
        //we can access them later;
     dumPtrQuery.setForwardOnly(true);
     if (!dumPtrQuery.exec()) return false;

/*
     //Force also this query query
     while(dumPtrQuery.numRowsAffected()<1)
        if (!dumPtrQuery.exec()) return false;

#ifdef _DEBUG
     test(dumPtrQuery.numRowsAffected());
#endif
*/
     while (dumPtrQuery.next()){
        size_t fieldO=dumPtrQuery.value(dumPtrQuery.record().indexOf(tr("field"))).toInt();
        size_t idO=dumPtrQuery.value(dumPtrQuery.record().indexOf(tr("id"))).toInt();
        QString formO=dumPtrQuery.value(dumPtrQuery.record().indexOf(tr("form_name"))).toString();
        size_t mapperO=dumPtrQuery.value(dumPtrQuery.record().indexOf(tr("mapper"))).toInt();
        mapReferences.insert(idO,cellShrPtr(new cell(fieldO,formO,mapperO)));
     }

    }
    //else //TODO: handle this prob later!!!
        //buildHashes();//Sometimes the query returns -1 (QOdbc prob): let's force it again!

/*
#ifdef _DEBUG
    test(mapPreTriggers);//n.b.: in this test we are assuming there is *at least* one trigger reference in the database!
    test(mapReferences);//n.b.: in this test we are assuming there is *at least* one rule in the database!
#endif
*/
    return true;
}

void RuleChecker::test(const int num)
{
    QVERIFY(num>0);
}

void RuleChecker::test(MapReferences& map)
{
    QVERIFY(map.size()>0);
}

void RuleChecker::test(MapRules& map)
{
    QVERIFY(map.size()>0);
}

bool RuleChecker::standardRuleInsertion(const QString rule, const size_t id,
                                        cellShrPtr ref, MapRules& ruleMap)
{
    ruleMap.insert(id,rule);
    if (ref.get()!=0)
        mapReferences.insert(id, ref);
    return true;
}

bool RuleChecker::findReference(const int refId, size_t& strOutField, QString& strOutForm, size_t& strOutMapper)
{
    MapReferences::const_iterator it=mapReferences.find(refId);
    if (it!=mapReferences.end())
    {
        strOutField=it.value().get()->m_idxField;
        strOutForm=it.value().get()->m_strForm;
        strOutMapper=it.value().get()->m_idxMapper;
    }
    else return false;

    return true;
}

bool RuleChecker::parseRule(const QString strRule, QMultiMap<size_t, QMap<size_t,size_t> >& mapLookups)
{
    int left=0,right=0;
    while (left!=-1){
        left=strRule.indexOf(QString(StrRulePtr+ tr("(")),left,Qt::CaseInsensitive);
        if (left==-1) break;
        right=strRule.indexOf(tr(")"),left);
        if (right==0) break;
        //parse number ///////////////
        int start=left+ QString(StrRulePtr+ tr("(")).length();
        int len=right-start;
        int no=strRule.mid(start,len).toInt();
        //idList.push_back(no);
        QString strTable,strForm;
        size_t field,mapper;
        if (!findReference(no,field,strForm,mapper)) return false;
        QMap<size_t,size_t> mapMapper;
        mapMapper.insert(mapper,field);
        mapLookups.insert(no,mapMapper);
        left=start+len;//found next occurrence
    }

    return true;
}

bool RuleChecker::applyRule(const QString strRule,QSqlQuery& query, QVariant varPar)
{
    qDebug() << strRule << endl;

    query.prepare(strRule);
    if (varPar.type()!=QVariant::Invalid) {
        // Bind parameter
        query.bindValue(tr(":par"),varPar);
    }
    query.setForwardOnly(true);
    return query.exec();
}
