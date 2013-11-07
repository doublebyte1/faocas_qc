/****************************************************************************
** Meta object code from reading C++ file 'picture.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../plugins/report/items/picture/picture.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Picture[] = {

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
      19,    8, 0x0009500b,
      51,   37, 0x0009510b,
      72,   64, 0x41095103,
      87,   79, 0x0a095003,
      99,   92, 0x43095103,
     113,  109, 0x02095103,
     125,   92, 0x43095103,

 // enums: name, flags, count, data
      37, 0x0,    5,   47,
     137, 0x0,    3,   57,
       8, 0x0,    4,   63,

 // enum data: key, value
     148, uint(Picture::NO_TEXT),
     156, uint(Picture::DRAW_TOP),
     165, uint(Picture::DRAW_BOTTOM),
     177, uint(Picture::DRAW_ABOVE),
     188, uint(Picture::DRAW_BELOW),
     199, uint(Picture::NO_FRAME),
     208, uint(Picture::PICTURE_BIND),
     221, uint(Picture::PICTURE_BOX),
     233, uint(Picture::RESIZE_ITEM_TO_PICTURE),
     256, uint(Picture::CENTER_PICTURE_TO_ITEM),
     279, uint(Picture::RESIZE_PICTURE_TO_ITEM_KEEP_ASPECT_RATIO),
     320, uint(Picture::RESIZE_PICTURE_TO_ITEM_IGNORE_ASPECT_RATIO),

       0        // eod
};

static const char qt_meta_stringdata_Picture[] = {
    "Picture\0PaintTypes\0howToPaintPicture\0"
    "DrawTextTypes\0drawTextType\0QPixmap\0"
    "pixmap\0QString\0text\0QColor\0textColor\0"
    "int\0borderWidth\0borderColor\0FrameTypes\0"
    "NO_TEXT\0DRAW_TOP\0DRAW_BOTTOM\0DRAW_ABOVE\0"
    "DRAW_BELOW\0NO_FRAME\0PICTURE_BIND\0"
    "PICTURE_BOX\0RESIZE_ITEM_TO_PICTURE\0"
    "CENTER_PICTURE_TO_ITEM\0"
    "RESIZE_PICTURE_TO_ITEM_KEEP_ASPECT_RATIO\0"
    "RESIZE_PICTURE_TO_ITEM_IGNORE_ASPECT_RATIO\0"
};

void Picture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Picture::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Picture::staticMetaObject = {
    { &Report::ItemInterface::staticMetaObject, qt_meta_stringdata_Picture,
      qt_meta_data_Picture, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Picture::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Picture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Picture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Picture))
        return static_cast<void*>(const_cast< Picture*>(this));
    if (!strcmp(_clname, "ro.bigendian.Report.ItemInterface/1.0"))
        return static_cast< Report::ItemInterface*>(const_cast< Picture*>(this));
    typedef Report::ItemInterface QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int Picture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef Report::ItemInterface QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PaintTypes*>(_v) = paintType(); break;
        case 1: *reinterpret_cast< DrawTextTypes*>(_v) = drawTextType(); break;
        case 2: *reinterpret_cast< QPixmap*>(_v) = pixmap(); break;
        case 3: *reinterpret_cast< QString*>(_v) = comment(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = textColor(); break;
        case 5: *reinterpret_cast< int*>(_v) = borderWidth(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = borderColor(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPaintType(*reinterpret_cast< PaintTypes*>(_v)); break;
        case 1: setDrawTextType(*reinterpret_cast< DrawTextTypes*>(_v)); break;
        case 2: setPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 3: setComment(*reinterpret_cast< QString*>(_v)); break;
        case 4: setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: setBorderWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: setBorderColor(*reinterpret_cast< QColor*>(_v)); break;
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
