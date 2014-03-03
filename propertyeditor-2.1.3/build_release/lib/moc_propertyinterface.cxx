/****************************************************************************
** Meta object code from reading C++ file 'propertyinterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lib/propertyinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertyinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PropertyEditor__PropertyInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      72,   35,   34,   34, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_PropertyEditor__PropertyInterface[] = {
    "PropertyEditor::PropertyInterface\0\0"
    "obj,propertyName,old_value,new_value\0"
    "propertyChanged(QObject*,QString,QVariant,QVariant)\0"
};

void PropertyEditor::PropertyInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyInterface *_t = static_cast<PropertyInterface *>(_o);
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PropertyEditor::PropertyInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PropertyEditor::PropertyInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PropertyEditor__PropertyInterface,
      qt_meta_data_PropertyEditor__PropertyInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertyEditor::PropertyInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertyEditor::PropertyInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertyEditor::PropertyInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyEditor__PropertyInterface))
        return static_cast<void*>(const_cast< PropertyInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int PropertyEditor::PropertyInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PropertyEditor::PropertyInterface::propertyChanged(QObject * _t1, const QString & _t2, const QVariant & _t3, const QVariant & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
