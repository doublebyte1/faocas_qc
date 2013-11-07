/****************************************************************************
** Meta object code from reading C++ file 'barchart.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugins/report/items/charts/barchart/barchart.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'barchart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BarChart[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      14,    9, 0x01095103,
      25,    9, 0x01095103,
      34,    9, 0x01095103,
      49,   45, 0x02095103,
      70,   64, ((uint)QMetaType::QReal << 24) | 0x00095103,

       0        // eod
};

static const char qt_meta_stringdata_BarChart[] = {
    "BarChart\0bool\0showLabels\0showGrid\0"
    "drawBorder\0int\0barsIdentation\0qreal\0"
    "toColorFactor\0"
};

void BarChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData BarChart::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BarChart::staticMetaObject = {
    { &Report::ChartInterface::staticMetaObject, qt_meta_stringdata_BarChart,
      qt_meta_data_BarChart, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BarChart::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BarChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BarChart::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BarChart))
        return static_cast<void*>(const_cast< BarChart*>(this));
    if (!strcmp(_clname, "ro.bigendian.Report.ChartInterface/1.0"))
        return static_cast< Report::ChartInterface*>(const_cast< BarChart*>(this));
    typedef Report::ChartInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int BarChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Report::ChartInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = showLabels(); break;
        case 1: *reinterpret_cast< bool*>(_v) = showGrid(); break;
        case 2: *reinterpret_cast< bool*>(_v) = drawBorder(); break;
        case 3: *reinterpret_cast< int*>(_v) = barsIdentation(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = toColorFactor(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setShowLabels(*reinterpret_cast< bool*>(_v)); break;
        case 1: setShowGrid(*reinterpret_cast< bool*>(_v)); break;
        case 2: setDrawBorder(*reinterpret_cast< bool*>(_v)); break;
        case 3: setBarsIdentation(*reinterpret_cast< int*>(_v)); break;
        case 4: setToColorFactor(*reinterpret_cast< qreal*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
