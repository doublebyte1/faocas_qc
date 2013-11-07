/****************************************************************************
** Meta object code from reading C++ file 'report.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../plugins/report/report/report.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'report.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StdReport[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      14,   10, 0x02095103,
      24,   10, 0x02095103,
      42,   30, 0x0b095103,
      56,   48, 0x41095103,
      69,   61, 0x0a095003,
      81,   61, 0x0a095103,

       0        // eod
};

static const char qt_meta_stringdata_StdReport[] = {
    "StdReport\0int\0menuGroup\0order\0QStringList\0"
    "menus\0QPixmap\0icon\0QString\0description\0"
    "recommends\0"
};

void StdReport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData StdReport::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StdReport::staticMetaObject = {
    { &Report::ReportInterface::staticMetaObject, qt_meta_stringdata_StdReport,
      qt_meta_data_StdReport, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StdReport::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StdReport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StdReport::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StdReport))
        return static_cast<void*>(const_cast< StdReport*>(this));
    if (!strcmp(_clname, "ro.bigendian.ReportDesigner.ReportInterface/1.0"))
        return static_cast< Report::ReportInterface*>(const_cast< StdReport*>(this));
    typedef Report::ReportInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int StdReport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Report::ReportInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = menuGroup(); break;
        case 1: *reinterpret_cast< int*>(_v) = order(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = menus(); break;
        case 3: *reinterpret_cast< QPixmap*>(_v) = icon(); break;
        case 4: *reinterpret_cast< QString*>(_v) = description(); break;
        case 5: *reinterpret_cast< QString*>(_v) = recommends(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMenuGroup(*reinterpret_cast< int*>(_v)); break;
        case 1: setOrder(*reinterpret_cast< int*>(_v)); break;
        case 2: setMenus(*reinterpret_cast< QStringList*>(_v)); break;
        case 3: setIcon(*reinterpret_cast< QPixmap*>(_v)); break;
        case 4: setSescription(*reinterpret_cast< QString*>(_v)); break;
        case 5: setRecommends(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
