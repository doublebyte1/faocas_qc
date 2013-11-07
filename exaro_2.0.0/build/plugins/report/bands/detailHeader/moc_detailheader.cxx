/****************************************************************************
** Meta object code from reading C++ file 'detailheader.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/report/bands/detailHeader/detailheader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detailheader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DetailHeader[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      21,   13, 0x0a095103,
      37,   32, 0x01095103,
      54,   32, 0x01095103,
      72,   32, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_DetailHeader[] = {
    "DetailHeader\0QString\0groupField\0bool\0"
    "reprintOnNewPage\0resetDetailNumber\0"
    "forceNewPage\0"
};

void DetailHeader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DetailHeader::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DetailHeader::staticMetaObject = {
    { &Report::BandInterface::staticMetaObject, qt_meta_stringdata_DetailHeader,
      qt_meta_data_DetailHeader, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DetailHeader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DetailHeader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DetailHeader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DetailHeader))
        return static_cast<void*>(const_cast< DetailHeader*>(this));
    if (!strcmp(_clname, "ro.bigendian.Report.ItemInterface/1.0"))
        return static_cast< Report::ItemInterface*>(const_cast< DetailHeader*>(this));
    typedef Report::BandInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int DetailHeader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Report::BandInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = groupField(); break;
        case 1: *reinterpret_cast< bool*>(_v) = reprintOnNewPage(); break;
        case 2: *reinterpret_cast< bool*>(_v) = resetDetailNumber(); break;
        case 3: *reinterpret_cast< bool*>(_v) = forceNewPage(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setGroupField(*reinterpret_cast< QString*>(_v)); break;
        case 1: setReprintOnNewPage(*reinterpret_cast< bool*>(_v)); break;
        case 2: setResetDetailNumber(*reinterpret_cast< bool*>(_v)); break;
        case 3: setForceNewPage(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
