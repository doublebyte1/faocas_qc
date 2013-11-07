/****************************************************************************
** Meta object code from reading C++ file 'sqlquery.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/report/sqlquery.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqlquery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Report__SqlQuery[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,
      31,   17,   17,   17, 0x05,
      43,   17,   17,   17, 0x05,
      60,   17,   17,   17, 0x05,
      76,   17,   17,   17, 0x05,
      90,   17,   17,   17, 0x05,
     103,   17,   17,   17, 0x05,
     116,   17,   17,   17, 0x05,
     134,  128,   17,   17, 0x05,
     150,  128,   17,   17, 0x05,

 // methods: signature, parameters, type, tag, flags
     170,   17,  165,   17, 0x02,
     183,  177,  165,   17, 0x02,
     223,  197,   17,   17, 0x02,
     283,  267,   17,   17, 0x22,
     329,  311,   17,   17, 0x02,
     377,  369,   17,   17, 0x22,
     401,   17,  165,   17, 0x02,
     409,   17,  165,   17, 0x02,
     416,   17,  165,   17, 0x02,
     423,   17,  165,   17, 0x02,
     434,  177,  165,   17, 0x02,
     466,  451,  165,   17, 0x02,
     481,  128,  165,   17, 0x22,
     495,   17,  491,   17, 0x02,
     511,  128,  502,   17, 0x02,
     528,  522,  502,   17, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_Report__SqlQuery[] = {
    "Report::SqlQuery\0\0beforeNext()\0"
    "afterNext()\0beforePrevious()\0"
    "afterPrevious()\0beforeFirst()\0"
    "afterFirst()\0beforeLast()\0afterLast()\0"
    "index\0beforeSeek(int)\0afterSeek(int)\0"
    "bool\0exec()\0query\0exec(QString)\0"
    "placeholder,val,paramType\0"
    "bindValue(QString,QVariant,QSql::ParamType)\0"
    "placeholder,val\0bindValue(QString,QVariant)\0"
    "pos,val,paramType\0"
    "bindValue(int,QVariant,QSql::ParamType)\0"
    "pos,val\0bindValue(int,QVariant)\0first()\0"
    "last()\0next()\0previous()\0prepare(QString)\0"
    "index,relative\0seek(int,bool)\0seek(int)\0"
    "int\0size()\0QVariant\0value(int)\0field\0"
    "value(QString)\0"
};

void Report::SqlQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SqlQuery *_t = static_cast<SqlQuery *>(_o);
        switch (_id) {
        case 0: _t->beforeNext(); break;
        case 1: _t->afterNext(); break;
        case 2: _t->beforePrevious(); break;
        case 3: _t->afterPrevious(); break;
        case 4: _t->beforeFirst(); break;
        case 5: _t->afterFirst(); break;
        case 6: _t->beforeLast(); break;
        case 7: _t->afterLast(); break;
        case 8: _t->beforeSeek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->afterSeek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: { bool _r = _t->exec();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->exec((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->bindValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< QSql::ParamType(*)>(_a[3]))); break;
        case 13: _t->bindValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 14: _t->bindValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< QSql::ParamType(*)>(_a[3]))); break;
        case 15: _t->bindValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 16: { bool _r = _t->first();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 17: { bool _r = _t->last();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: { bool _r = _t->next();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: { bool _r = _t->previous();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 20: { bool _r = _t->prepare((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 21: { bool _r = _t->seek((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 22: { bool _r = _t->seek((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { int _r = _t->size();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 24: { QVariant _r = _t->value((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 25: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Report::SqlQuery::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Report::SqlQuery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Report__SqlQuery,
      qt_meta_data_Report__SqlQuery, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Report::SqlQuery::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Report::SqlQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Report::SqlQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Report__SqlQuery))
        return static_cast<void*>(const_cast< SqlQuery*>(this));
    if (!strcmp(_clname, "QSqlQuery"))
        return static_cast< QSqlQuery*>(const_cast< SqlQuery*>(this));
    return QObject::qt_metacast(_clname);
}

int Report::SqlQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void Report::SqlQuery::beforeNext()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Report::SqlQuery::afterNext()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Report::SqlQuery::beforePrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Report::SqlQuery::afterPrevious()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Report::SqlQuery::beforeFirst()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Report::SqlQuery::afterFirst()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Report::SqlQuery::beforeLast()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void Report::SqlQuery::afterLast()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void Report::SqlQuery::beforeSeek(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Report::SqlQuery::afterSeek(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
