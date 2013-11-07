/****************************************************************************
** Meta object code from reading C++ file 'script.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/report/items/script/script.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'script.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Script[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       2,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      17,    7, 0x0009510b,
      38,   27, 0x0009510b,
      57,   49, 0x0a095103,

 // enums: name, flags, count, data
       7, 0x1,   13,   31,
      27, 0x0,    3,   57,

 // enum data: key, value
      64, uint(Script::AlignLeft),
      74, uint(Script::AlignRight),
      85, uint(Script::AlignHCenter),
      98, uint(Script::AlignJustify),
     111, uint(Script::AlignTop),
     120, uint(Script::AlignBottom),
     132, uint(Script::AlignVCenter),
     145, uint(Script::AlignCenter),
     157, uint(Script::TextDontClip),
     170, uint(Script::TextSingleLine),
     185, uint(Script::TextExpandTabs),
     200, uint(Script::TextShowMnemonic),
     217, uint(Script::TextWordWrap),
     230, uint(Script::None),
     235, uint(Script::AutoSize),
     244, uint(Script::AutoStretch),

       0        // eod
};

static const char qt_meta_stringdata_Script[] = {
    "Script\0TextFlags\0textFlags\0SizePolicy\0"
    "sizePolicy\0QString\0script\0AlignLeft\0"
    "AlignRight\0AlignHCenter\0AlignJustify\0"
    "AlignTop\0AlignBottom\0AlignVCenter\0"
    "AlignCenter\0TextDontClip\0TextSingleLine\0"
    "TextExpandTabs\0TextShowMnemonic\0"
    "TextWordWrap\0None\0AutoSize\0AutoStretch\0"
};

void Script::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Script::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Script::staticMetaObject = {
    { &Report::ItemInterface::staticMetaObject, qt_meta_stringdata_Script,
      qt_meta_data_Script, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Script::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Script::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Script::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Script))
        return static_cast<void*>(const_cast< Script*>(this));
    if (!strcmp(_clname, "ro.bigendian.Report.ItemInterface/1.0"))
        return static_cast< Report::ItemInterface*>(const_cast< Script*>(this));
    typedef Report::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Script::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 2: *reinterpret_cast< QString*>(_v) = script(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTextFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: setSizePolicy(*reinterpret_cast< SizePolicy*>(_v)); break;
        case 2: setScript(*reinterpret_cast< QString*>(_v)); break;
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
