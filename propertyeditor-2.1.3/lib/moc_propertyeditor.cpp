/****************************************************************************
** Meta object code from reading C++ file 'propertyeditor.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "propertyeditor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propertyeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PropertyEditor__PropertyEditor[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      69,   32,   31,   31, 0x05,
     125,  121,   31,   31, 0x05,

 // slots: signature, parameters, type, tag, flags
     156,  149,   31,   31, 0x0a,
     176,   31,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PropertyEditor__PropertyEditor[] = {
    "PropertyEditor::PropertyEditor\0\0"
    "obj,propertyName,old_value,new_value\0"
    "propertyChanged(QObject*,QString,QVariant,QVariant)\0"
    "obj\0objectChanged(QObject*)\0object\0"
    "setObject(QObject*)\0resetProperties()\0"
};

void PropertyEditor::PropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PropertyEditor *_t = static_cast<PropertyEditor *>(_o);
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 1: _t->objectChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->setObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->resetProperties(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PropertyEditor::PropertyEditor::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PropertyEditor::PropertyEditor::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_PropertyEditor__PropertyEditor,
      qt_meta_data_PropertyEditor__PropertyEditor, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PropertyEditor::PropertyEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PropertyEditor::PropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PropertyEditor::PropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyEditor__PropertyEditor))
        return static_cast<void*>(const_cast< PropertyEditor*>(this));
    return QTreeView::qt_metacast(_clname);
}

int PropertyEditor::PropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PropertyEditor::PropertyEditor::propertyChanged(QObject * _t1, const QString & _t2, const QVariant & _t3, const QVariant & _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PropertyEditor::PropertyEditor::objectChanged(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
