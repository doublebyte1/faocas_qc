/****************************************************************************
** Meta object code from reading C++ file 'brush.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/brush/brush.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'brush.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Brush[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       1,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      17,    6, 0x0019510b,
      30,   23, 0x43195103,
      44,   36, 0x41195103,

 // enums: name, flags, count, data
       6, 0x0,   19,   27,

 // enum data: key, value
      52, uint(Brush::NoBrush),
      60, uint(Brush::SolidPattern),
      73, uint(Brush::Dense1Pattern),
      87, uint(Brush::Dense2Pattern),
     101, uint(Brush::Dense3Pattern),
     115, uint(Brush::Dense4Pattern),
     129, uint(Brush::Dense5Pattern),
     143, uint(Brush::Dense6Pattern),
     157, uint(Brush::Dense7Pattern),
     171, uint(Brush::HorPattern),
     182, uint(Brush::VerPattern),
     193, uint(Brush::CrossPattern),
     206, uint(Brush::BDiagPattern),
     219, uint(Brush::FDiagPattern),
     232, uint(Brush::DiagCrossPattern),
     249, uint(Brush::LinearGradientPattern),
     271, uint(Brush::RadialGradientPattern),
     293, uint(Brush::ConicalGradientPattern),
     316, uint(Brush::TexturePattern),

       0        // eod
};

static const char qt_meta_stringdata_Brush[] = {
    "Brush\0BrushStyle\0style\0QColor\0color\0"
    "QPixmap\0texture\0NoBrush\0SolidPattern\0"
    "Dense1Pattern\0Dense2Pattern\0Dense3Pattern\0"
    "Dense4Pattern\0Dense5Pattern\0Dense6Pattern\0"
    "Dense7Pattern\0HorPattern\0VerPattern\0"
    "CrossPattern\0BDiagPattern\0FDiagPattern\0"
    "DiagCrossPattern\0LinearGradientPattern\0"
    "RadialGradientPattern\0ConicalGradientPattern\0"
    "TexturePattern\0"
};

void Brush::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Brush::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Brush::staticMetaObject = {
    { &PropertyInterface::staticMetaObject, qt_meta_stringdata_Brush,
      qt_meta_data_Brush, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Brush::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Brush::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Brush::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Brush))
        return static_cast<void*>(const_cast< Brush*>(this));
    if (!strcmp(_clname, "eu.licentia.PropertyEditor.PropetyInterface/1.0"))
        return static_cast< PropertyEditor::PropertyInterface*>(const_cast< Brush*>(this));
    return PropertyInterface::qt_metacast(_clname);
}

int Brush::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< BrushStyle*>(_v) = style(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 2: *reinterpret_cast< QPixmap*>(_v) = texture(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStyle(*reinterpret_cast< BrushStyle*>(_v)); break;
        case 1: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setTexture(*reinterpret_cast< QPixmap*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
