/****************************************************************************
** Meta object code from reading C++ file 'iteminterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/report/iteminterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'iteminterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Report__ItemInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       7,   39, // properties
       1,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      44,   23,   22,   22, 0x05,
      87,   75,   22,   22, 0x05,
     118,  111,   22,   22, 0x05,
     140,  111,   22,   22, 0x05,
     192,  161,   22,   22, 0x05,

 // properties: name, type, flags
     239,  232, 0x14095103,
     253,  248, 0x4d095103,
     264,  257, 0x42095103,
     270,  257, 0x42095103,
     293,  286, 0x0009510b,
     312,  308, 0x02095103,
     326,  320, 0x40095103,

 // enums: name, flags, count, data
     286, 0x0,    2,   64,

 // enum data: key, value
     331, uint(Report::ItemInterface::TransparentMode),
     347, uint(Report::ItemInterface::OpaqueMode),

       0        // eod
};

static const char qt_meta_stringdata_Report__ItemInterface[] = {
    "Report::ItemInterface\0\0thisObject,cursorPos\0"
    "itemSelected(QObject*,QPointF)\0"
    "newGeometry\0geometryChanged(QRectF)\0"
    "sender\0beforePrint(QObject*)\0"
    "afterPrint(QObject*)\0"
    "object,newGeometry,oldGeometry\0"
    "geometryChanged(QObject*,QRectF,QRectF)\0"
    "QRectF\0geometry\0QPen\0pen\0QBrush\0brush\0"
    "backgroundBrush\0BGMode\0backgroundMode\0"
    "int\0opacity\0QFont\0font\0TransparentMode\0"
    "OpaqueMode\0"
};

void Report::ItemInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ItemInterface *_t = static_cast<ItemInterface *>(_o);
        switch (_id) {
        case 0: _t->itemSelected((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 1: _t->geometryChanged((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 2: _t->beforePrint((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->afterPrint((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->geometryChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QRectF(*)>(_a[2])),(*reinterpret_cast< QRectF(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Report::ItemInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Report::ItemInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Report__ItemInterface,
      qt_meta_data_Report__ItemInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Report::ItemInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Report::ItemInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Report::ItemInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Report__ItemInterface))
        return static_cast<void*>(const_cast< ItemInterface*>(this));
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< ItemInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int Report::ItemInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRectF*>(_v) = geometry(); break;
        case 1: *reinterpret_cast< QPen*>(_v) = pen(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = backgroundBrush(); break;
        case 4: *reinterpret_cast< BGMode*>(_v) = backgroundMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = opacity(); break;
        case 6: *reinterpret_cast< QFont*>(_v) = font(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setGeometry(*reinterpret_cast< QRectF*>(_v)); break;
        case 1: setPen(*reinterpret_cast< QPen*>(_v)); break;
        case 2: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: setBackgroundBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 4: setBackgroundMode(*reinterpret_cast< BGMode*>(_v)); break;
        case 5: setOpacity(*reinterpret_cast< int*>(_v)); break;
        case 6: setFont(*reinterpret_cast< QFont*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Report::ItemInterface::itemSelected(QObject * _t1, QPointF _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Report::ItemInterface::geometryChanged(QRectF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Report::ItemInterface::beforePrint(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Report::ItemInterface::afterPrint(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Report::ItemInterface::geometryChanged(QObject * _t1, QRectF _t2, QRectF _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
