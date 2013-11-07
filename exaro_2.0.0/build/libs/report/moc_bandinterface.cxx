/****************************************************************************
** Meta object code from reading C++ file 'bandinterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/report/bandinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bandinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Report__BandInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   29, // properties
       3,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   45,   22,   22, 0x09,
      84,   73,   22,   22, 0x09,

 // properties: name, type, flags
     116,  107, 0x0009410b,
     129,  125, 0x02095103,
     135,  125, 0x02095103,
     154,  147, 0x0009510b,

 // enums: name, flags, count, data
     107, 0x0,    9,   53,
     160, 0x1,    4,   71,
     147, 0x1,    4,   79,

 // enum data: key, value
     166, uint(Report::BandInterface::PageHeader),
     177, uint(Report::BandInterface::Title),
     183, uint(Report::BandInterface::DetailContainer),
     199, uint(Report::BandInterface::DetailHeader),
     212, uint(Report::BandInterface::Detail),
     219, uint(Report::BandInterface::DetailFooter),
     232, uint(Report::BandInterface::Summary),
     240, uint(Report::BandInterface::PageFooter),
     251, uint(Report::BandInterface::Overlay),
     259, uint(Report::BandInterface::DrawLeft),
     268, uint(Report::BandInterface::DrawRight),
     278, uint(Report::BandInterface::DrawTop),
     286, uint(Report::BandInterface::DrawBottom),
     259, uint(Report::BandInterface::DrawLeft),
     268, uint(Report::BandInterface::DrawRight),
     278, uint(Report::BandInterface::DrawTop),
     286, uint(Report::BandInterface::DrawBottom),

       0        // eod
};

static const char qt_meta_stringdata_Report__BandInterface[] = {
    "Report::BandInterface\0\0,\0bandDelete(int,int)\0"
    "rect\0updateGeometry(QRectF)\0type,order\0"
    "bandDestroyed(int,int)\0BandType\0"
    "bandType\0int\0order\0indentation\0Frames\0"
    "frame\0Frame\0PageHeader\0Title\0"
    "DetailContainer\0DetailHeader\0Detail\0"
    "DetailFooter\0Summary\0PageFooter\0Overlay\0"
    "DrawLeft\0DrawRight\0DrawTop\0DrawBottom\0"
};

void Report::BandInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BandInterface *_t = static_cast<BandInterface *>(_o);
        switch (_id) {
        case 0: _t->bandDelete((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->updateGeometry((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 2: _t->bandDestroyed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Report::BandInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Report::BandInterface::staticMetaObject = {
    { &ItemInterface::staticMetaObject, qt_meta_stringdata_Report__BandInterface,
      qt_meta_data_Report__BandInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Report::BandInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Report::BandInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Report::BandInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Report__BandInterface))
        return static_cast<void*>(const_cast< BandInterface*>(this));
    return ItemInterface::qt_metacast(_clname);
}

int Report::BandInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemInterface::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< BandType*>(_v) = bandType(); break;
        case 1: *reinterpret_cast< int*>(_v) = order(); break;
        case 2: *reinterpret_cast< int*>(_v) = indentation(); break;
        case 3: *reinterpret_cast<int*>(_v) = QFlag(frame()); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBandType(*reinterpret_cast< BandType*>(_v)); break;
        case 1: setOrder(*reinterpret_cast< int*>(_v)); break;
        case 2: setIndentation(*reinterpret_cast< int*>(_v)); break;
        case 3: setFrame(QFlag(*reinterpret_cast<int*>(_v))); break;
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

// SIGNAL 0
void Report::BandInterface::bandDelete(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
