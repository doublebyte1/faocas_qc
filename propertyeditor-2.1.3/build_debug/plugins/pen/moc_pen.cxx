/****************************************************************************
** Meta object code from reading C++ file 'pen.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/pen/pen.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Pen[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       3,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      11,    4, 0x42195103,
      29,   17, 0x0019510b,
      45,   38, 0x43195103,
      64,   51, 0x0019510b,
      80,   74, ((uint)QMetaType::QReal << 24) | 0x00195103,
     100,   91, 0x0019510b,
     106,   74, ((uint)QMetaType::QReal << 24) | 0x00195103,

 // enums: name, flags, count, data
      91, 0x0,    7,   47,
      17, 0x0,    4,   61,
      51, 0x0,    5,   69,

 // enum data: key, value
     112, uint(Pen::NoPen),
     118, uint(Pen::SolidLine),
     128, uint(Pen::DashLine),
     137, uint(Pen::DotLine),
     145, uint(Pen::DashDotLine),
     157, uint(Pen::DashDotDotLine),
     172, uint(Pen::CustomDashLine),
     187, uint(Pen::FlatCap),
     195, uint(Pen::SquareCap),
     205, uint(Pen::RoundCap),
     214, uint(Pen::MPenCapStyle),
     227, uint(Pen::MiterJoin),
     237, uint(Pen::BevelJoin),
     247, uint(Pen::RoundJoin),
     257, uint(Pen::SvgMiterJoin),
     270, uint(Pen::MPenJoinStyle),

       0        // eod
};

static const char qt_meta_stringdata_Pen[] = {
    "Pen\0QBrush\0brush\0PenCapStyle\0capStyle\0"
    "QColor\0color\0PenJoinStyle\0joinStyle\0"
    "qreal\0miterLimit\0PenStyle\0style\0width\0"
    "NoPen\0SolidLine\0DashLine\0DotLine\0"
    "DashDotLine\0DashDotDotLine\0CustomDashLine\0"
    "FlatCap\0SquareCap\0RoundCap\0MPenCapStyle\0"
    "MiterJoin\0BevelJoin\0RoundJoin\0"
    "SvgMiterJoin\0MPenJoinStyle\0"
};

void Pen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Pen::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Pen::staticMetaObject = {
    { &PropertyInterface::staticMetaObject, qt_meta_stringdata_Pen,
      qt_meta_data_Pen, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Pen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Pen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Pen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pen))
        return static_cast<void*>(const_cast< Pen*>(this));
    if (!strcmp(_clname, "eu.licentia.PropertyEditor.PropetyInterface/1.0"))
        return static_cast< PropertyEditor::PropertyInterface*>(const_cast< Pen*>(this));
    return PropertyInterface::qt_metacast(_clname);
}

int Pen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropertyInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = brush(); break;
        case 1: *reinterpret_cast< PenCapStyle*>(_v) = capStyle(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = color(); break;
        case 3: *reinterpret_cast< PenJoinStyle*>(_v) = joinStyle(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = miterLimit(); break;
        case 5: *reinterpret_cast< PenStyle*>(_v) = style(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = width(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: setCapStyle(*reinterpret_cast< PenCapStyle*>(_v)); break;
        case 2: setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setJoinStyle(*reinterpret_cast< PenJoinStyle*>(_v)); break;
        case 4: setMiterLimit(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setStyle(*reinterpret_cast< PenStyle*>(_v)); break;
        case 6: setWidth(*reinterpret_cast< qreal*>(_v)); break;
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
QT_END_MOC_NAMESPACE
