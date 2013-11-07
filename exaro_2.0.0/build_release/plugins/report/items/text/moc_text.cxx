/****************************************************************************
** Meta object code from reading C++ file 'text.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/report/items/text/text.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'text.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Text[] = {

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
      15,    5, 0x0009510b,
      36,   25, 0x0009510b,
      55,   47, 0x0a095103,

 // enums: name, flags, count, data
       5, 0x1,   13,   31,
      25, 0x0,    3,   57,

 // enum data: key, value
      60, uint(Text::AlignLeft),
      70, uint(Text::AlignRight),
      81, uint(Text::AlignHCenter),
      94, uint(Text::AlignJustify),
     107, uint(Text::AlignTop),
     116, uint(Text::AlignBottom),
     128, uint(Text::AlignVCenter),
     141, uint(Text::AlignCenter),
     153, uint(Text::TextDontClip),
     166, uint(Text::TextSingleLine),
     181, uint(Text::TextExpandTabs),
     196, uint(Text::TextShowMnemonic),
     213, uint(Text::TextWordWrap),
     226, uint(Text::None),
     231, uint(Text::AutoSize),
     240, uint(Text::AutoStretch),

       0        // eod
};

static const char qt_meta_stringdata_Text[] = {
    "Text\0TextFlags\0textFlags\0SizePolicy\0"
    "sizePolicy\0QString\0text\0AlignLeft\0"
    "AlignRight\0AlignHCenter\0AlignJustify\0"
    "AlignTop\0AlignBottom\0AlignVCenter\0"
    "AlignCenter\0TextDontClip\0TextSingleLine\0"
    "TextExpandTabs\0TextShowMnemonic\0"
    "TextWordWrap\0None\0AutoSize\0AutoStretch\0"
};

void Text::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Text::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Text::staticMetaObject = {
    { &Report::ItemInterface::staticMetaObject, qt_meta_stringdata_Text,
      qt_meta_data_Text, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Text::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Text::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Text::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Text))
        return static_cast<void*>(const_cast< Text*>(this));
    if (!strcmp(_clname, "ro.bigendian.Report.ItemInterface/1.0"))
        return static_cast< Report::ItemInterface*>(const_cast< Text*>(this));
    typedef Report::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Text::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        case 2: *reinterpret_cast< QString*>(_v) = text(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTextFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: setSizePolicy(*reinterpret_cast< SizePolicy*>(_v)); break;
        case 2: setText(*reinterpret_cast< QString*>(_v)); break;
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
