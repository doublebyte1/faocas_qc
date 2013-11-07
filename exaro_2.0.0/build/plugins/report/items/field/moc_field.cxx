/****************************************************************************
** Meta object code from reading C++ file 'field.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/report/items/field/field.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'field.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Field[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       2,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      16,    6, 0x0009510b,
      37,   26, 0x0009510b,
      56,   48, 0x0a095103,
      66,   48, 0x0a095103,

 // enums: name, flags, count, data
       6, 0x1,   13,   34,
      26, 0x0,    3,   60,

 // enum data: key, value
      76, uint(Field::AlignLeft),
      86, uint(Field::AlignRight),
      97, uint(Field::AlignHCenter),
     110, uint(Field::AlignJustify),
     123, uint(Field::AlignTop),
     132, uint(Field::AlignBottom),
     144, uint(Field::AlignVCenter),
     157, uint(Field::AlignCenter),
     169, uint(Field::TextDontClip),
     182, uint(Field::TextSingleLine),
     197, uint(Field::TextExpandTabs),
     212, uint(Field::TextShowMnemonic),
     229, uint(Field::TextWordWrap),
     242, uint(Field::None),
     247, uint(Field::AutoSize),
     256, uint(Field::AutoStretch),

       0        // eod
};

static const char qt_meta_stringdata_Field[] = {
    "Field\0TextFlags\0textFlags\0SizePolicy\0"
    "sizePolicy\0QString\0queryName\0fieldName\0"
    "AlignLeft\0AlignRight\0AlignHCenter\0"
    "AlignJustify\0AlignTop\0AlignBottom\0"
    "AlignVCenter\0AlignCenter\0TextDontClip\0"
    "TextSingleLine\0TextExpandTabs\0"
    "TextShowMnemonic\0TextWordWrap\0None\0"
    "AutoSize\0AutoStretch\0"
};

void Field::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Field::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Field::staticMetaObject = {
    { &Report::ItemInterface::staticMetaObject, qt_meta_stringdata_Field,
      qt_meta_data_Field, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Field::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Field::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Field::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Field))
        return static_cast<void*>(const_cast< Field*>(this));
    if (!strcmp(_clname, "ro.bigendian.Report.ItemInterface/1.0"))
        return static_cast< Report::ItemInterface*>(const_cast< Field*>(this));
    typedef Report::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Field::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Report::ItemInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(textFlags()); break;
        case 1: *reinterpret_cast< SizePolicy*>(_v) = sizePolicy(); break;
        case 2: *reinterpret_cast< QString*>(_v) = queryName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = fieldName(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTextFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: setSizePolicy(*reinterpret_cast< SizePolicy*>(_v)); break;
        case 2: setQueryName(*reinterpret_cast< QString*>(_v)); break;
        case 3: setFieldName(*reinterpret_cast< QString*>(_v)); break;
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
