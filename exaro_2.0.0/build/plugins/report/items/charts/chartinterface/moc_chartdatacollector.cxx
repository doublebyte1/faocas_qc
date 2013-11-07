/****************************************************************************
** Meta object code from reading C++ file 'chartdatacollector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/report/items/charts/chartinterface/chartdatacollector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartdatacollector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Report__ChartDataCollector[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      14,   29, // properties
       2,   71, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      36,   27,   27,   27, 0x0a,
      50,   27,   27,   27, 0x0a,

 // properties: name, type, flags
      73,   69, 0x02095003,
     107,   91, 0x0009510b,
     135,  123, 0x0b095103,
     154,  146, 0x0a095103,
     160,  146, 0x0a095103,
     170,  146, 0x0a095103,
     182,  146, 0x0a095103,
     194,  146, 0x0a095103,
     203,  146, 0x0a095103,
     214,  146, 0x0a095103,
     225,   69, 0x02095103,
     250,  245, 0x01095103,
     265,  146, 0x0a095103,
     288,  274, 0x0009510b,

 // enums: name, flags, count, data
      91, 0x0,    3,   79,
     274, 0x0,    3,   85,

 // enum data: key, value
     302, uint(Report::ChartDataCollector::FromStaticData),
     317, uint(Report::ChartDataCollector::FromDatabase),
     330, uint(Report::ChartDataCollector::FromScript),
     341, uint(Report::ChartDataCollector::Unsorted),
     350, uint(Report::ChartDataCollector::Ascendent),
     360, uint(Report::ChartDataCollector::Descendent),

       0        // eod
};

static const char qt_meta_stringdata_Report__ChartDataCollector[] = {
    "Report::ChartDataCollector\0\0clear()\0"
    "collectData()\0setupConnections()\0int\0"
    "chartColorOpacity\0ChartDataSource\0"
    "chartDataSource\0QStringList\0staticData\0"
    "QString\0query\0keyScript\0valueScript\0"
    "colorScript\0keyField\0valueField\0"
    "colorField\0showOnlyFirstValues\0bool\0"
    "showOtherValue\0otherKey\0SortDirection\0"
    "sortDirection\0FromStaticData\0FromDatabase\0"
    "FromScript\0Unsorted\0Ascendent\0Descendent\0"
};

void Report::ChartDataCollector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChartDataCollector *_t = static_cast<ChartDataCollector *>(_o);
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->collectData(); break;
        case 2: _t->setupConnections(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Report::ChartDataCollector::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Report::ChartDataCollector::staticMetaObject = {
    { &Report::ItemInterface::staticMetaObject, qt_meta_stringdata_Report__ChartDataCollector,
      qt_meta_data_Report__ChartDataCollector, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Report::ChartDataCollector::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Report::ChartDataCollector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Report::ChartDataCollector::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Report__ChartDataCollector))
        return static_cast<void*>(const_cast< ChartDataCollector*>(this));
    if (!strcmp(_clname, "ro.bigendian.Report.ItemInterface/1.0"))
        return static_cast< Report::ItemInterface*>(const_cast< ChartDataCollector*>(this));
    typedef Report::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Report::ChartDataCollector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Report::ItemInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = colorOpacity(); break;
        case 1: *reinterpret_cast< ChartDataSource*>(_v) = chartDataSource(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = staticData(); break;
        case 3: *reinterpret_cast< QString*>(_v) = query(); break;
        case 4: *reinterpret_cast< QString*>(_v) = keyScript(); break;
        case 5: *reinterpret_cast< QString*>(_v) = valueScript(); break;
        case 6: *reinterpret_cast< QString*>(_v) = colorScript(); break;
        case 7: *reinterpret_cast< QString*>(_v) = keyField(); break;
        case 8: *reinterpret_cast< QString*>(_v) = valueField(); break;
        case 9: *reinterpret_cast< QString*>(_v) = colorField(); break;
        case 10: *reinterpret_cast< int*>(_v) = showOnlyFirstValues(); break;
        case 11: *reinterpret_cast< bool*>(_v) = showOtherValue(); break;
        case 12: *reinterpret_cast< QString*>(_v) = otherKey(); break;
        case 13: *reinterpret_cast< SortDirection*>(_v) = sortDirection(); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setColorOpacity(*reinterpret_cast< int*>(_v)); break;
        case 1: setChartDataSource(*reinterpret_cast< ChartDataSource*>(_v)); break;
        case 2: setStaticData(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: setQuery(*reinterpret_cast< QString*>(_v)); break;
        case 4: setKeyScript(*reinterpret_cast< QString*>(_v)); break;
        case 5: setValueScript(*reinterpret_cast< QString*>(_v)); break;
        case 6: setColorScript(*reinterpret_cast< QString*>(_v)); break;
        case 7: setKeyField(*reinterpret_cast< QString*>(_v)); break;
        case 8: setValueField(*reinterpret_cast< QString*>(_v)); break;
        case 9: setColorField(*reinterpret_cast< QString*>(_v)); break;
        case 10: setShowOnlyFirstValues(*reinterpret_cast< int*>(_v)); break;
        case 11: setShowOtherValue(*reinterpret_cast< bool*>(_v)); break;
        case 12: setOtherKey(*reinterpret_cast< QString*>(_v)); break;
        case 13: setSortDirection(*reinterpret_cast< SortDirection*>(_v)); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
