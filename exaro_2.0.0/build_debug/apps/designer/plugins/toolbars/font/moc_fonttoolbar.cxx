/****************************************************************************
** Meta object code from reading C++ file 'fonttoolbar.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../apps/designer/plugins/toolbars/font/fonttoolbar.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fonttoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FontToolbar[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   31,   12,   12, 0x0a,
      95,   58,   12,   12, 0x0a,
     152,  147,   12,   12, 0x08,
     179,  173,   12,   12, 0x08,
     206,  201,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FontToolbar[] = {
    "FontToolbar\0\0propertyChanged()\0object\0"
    "setObject(QObject*)\0"
    "obj,propertyName,old_value,new_value\0"
    "propertyChanged(QObject*,QString,QVariant,QVariant)\0"
    "font\0setFontFamily(QFont)\0style\0"
    "setFontStyle(QString)\0size\0"
    "setFontSize(QString)\0"
};

void FontToolbar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FontToolbar *_t = static_cast<FontToolbar *>(_o);
        switch (_id) {
        case 0: _t->propertyChanged(); break;
        case 1: _t->setObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->propertyChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 3: _t->setFontFamily((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 4: _t->setFontStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setFontSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FontToolbar::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FontToolbar::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_FontToolbar,
      qt_meta_data_FontToolbar, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FontToolbar::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FontToolbar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FontToolbar::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FontToolbar))
        return static_cast<void*>(const_cast< FontToolbar*>(this));
    return QToolBar::qt_metacast(_clname);
}

int FontToolbar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FontToolbar::propertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
