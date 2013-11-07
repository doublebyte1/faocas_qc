/****************************************************************************
** Meta object code from reading C++ file 'formula.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/report/items/formula/formula.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formula.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Formula[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       8,   29, // properties
       4,   53, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      21,    8,    8,    8, 0x08,
      33,    8,    8,    8, 0x08,

 // properties: name, type, flags
      60,   50, 0x0009510b,
      83,   70, 0x0009510b,
     108,   96, 0x0009510b,
     128,  120, 0x0a095103,
     138,  120, 0x0a095103,
     148,  120, 0x0a095103,
     159,  155, 0x02095103,
     174,  169, 0x01095103,

 // enums: name, flags, count, data
      50, 0x1,   13,   69,
     190, 0x0,    3,   95,
      70, 0x0,    2,  101,
      96, 0x0,    5,  105,

 // enum data: key, value
     201, uint(Formula::AlignLeft),
     211, uint(Formula::AlignRight),
     222, uint(Formula::AlignHCenter),
     235, uint(Formula::AlignJustify),
     248, uint(Formula::AlignTop),
     257, uint(Formula::AlignBottom),
     269, uint(Formula::AlignVCenter),
     282, uint(Formula::AlignCenter),
     294, uint(Formula::TextDontClip),
     307, uint(Formula::TextSingleLine),
     322, uint(Formula::TextExpandTabs),
     337, uint(Formula::TextShowMnemonic),
     354, uint(Formula::TextWordWrap),
     367, uint(Formula::None),
     372, uint(Formula::AutoSize),
     381, uint(Formula::AutoStretch),
     393, uint(Formula::FromField),
     403, uint(Formula::FromScript),
     414, uint(Formula::Sum),
     418, uint(Formula::Count),
     424, uint(Formula::Max),
     428, uint(Formula::Min),
     432, uint(Formula::Average),

       0        // eod
};

static const char qt_meta_stringdata_Formula[] = {
    "Formula\0\0afterNext()\0afterPrev()\0"
    "connectToQuery()\0TextFlags\0textFlags\0"
    "FormulaInput\0formulaInput\0FormulaType\0"
    "formulaType\0QString\0queryName\0fieldName\0"
    "script\0int\0precision\0bool\0resetAfterPrint\0"
    "SizePolicy\0AlignLeft\0AlignRight\0"
    "AlignHCenter\0AlignJustify\0AlignTop\0"
    "AlignBottom\0AlignVCenter\0AlignCenter\0"
    "TextDontClip\0TextSingleLine\0TextExpandTabs\0"
    "TextShowMnemonic\0TextWordWrap\0None\0"
    "AutoSize\0AutoStretch\0FromField\0"
    "FromScript\0Sum\0Count\0Max\0Min\0Average\0"
};

void Formula::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Formula *_t = static_cast<Formula *>(_o);
        switch (_id) {
        case 0: _t->afterNext(); break;
        case 1: _t->afterPrev(); break;
        case 2: _t->connectToQuery(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Formula::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Formula::staticMetaObject = {
    { &Report::ItemInterface::staticMetaObject, qt_meta_stringdata_Formula,
      qt_meta_data_Formula, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Formula::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Formula::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Formula::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Formula))
        return static_cast<void*>(const_cast< Formula*>(this));
    if (!strcmp(_clname, "ro.bigendian.Report.ItemInterface/1.0"))
        return static_cast< Report::ItemInterface*>(const_cast< Formula*>(this));
    typedef Report::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Formula::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Report::ItemInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast<int*>(_v) = QFlag(textFlags()); break;
        case 1: *reinterpret_cast< FormulaInput*>(_v) = formulaInput(); break;
        case 2: *reinterpret_cast< FormulaType*>(_v) = formulaType(); break;
        case 3: *reinterpret_cast< QString*>(_v) = queryName(); break;
        case 4: *reinterpret_cast< QString*>(_v) = fieldName(); break;
        case 5: *reinterpret_cast< QString*>(_v) = script(); break;
        case 6: *reinterpret_cast< int*>(_v) = precision(); break;
        case 7: *reinterpret_cast< bool*>(_v) = resetAfterPrint(); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTextFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: setFormulaInput(*reinterpret_cast< FormulaInput*>(_v)); break;
        case 2: setFormulaType(*reinterpret_cast< FormulaType*>(_v)); break;
        case 3: setQueryName(*reinterpret_cast< QString*>(_v)); break;
        case 4: setFieldName(*reinterpret_cast< QString*>(_v)); break;
        case 5: setScript(*reinterpret_cast< QString*>(_v)); break;
        case 6: setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 7: setResetAfterPrint(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
