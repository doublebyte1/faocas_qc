/****************************************************************************
** Meta object code from reading C++ file 'metricfontdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/metricfont/metricfontdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'metricfontdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MetricFontDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   18,   17,   17, 0x08,
      65,   48,   17,   17, 0x08,
     104,   48,   17,   17, 0x08,
     147,  141,   17,   17, 0x08,
     167,   48,   17,   17, 0x08,
     213,  205,   17,   17, 0x08,
     236,  205,   17,   17, 0x08,
     259,   18,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MetricFontDialog[] = {
    "MetricFontDialog\0\0row\0writingSystemChanged(int)\0"
    "current,previous\0"
    "familyChanged(QModelIndex,QModelIndex)\0"
    "sizeChanged(QModelIndex,QModelIndex)\0"
    "value\0sizeChanged(double)\0"
    "styleChanged(QModelIndex,QModelIndex)\0"
    "checked\0strikeoutChanged(bool)\0"
    "underlineChanged(bool)\0"
    "fontWritingSystemChanged(int)\0"
};

void MetricFontDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MetricFontDialog *_t = static_cast<MetricFontDialog *>(_o);
        switch (_id) {
        case 0: _t->writingSystemChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->familyChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 2: _t->sizeChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->sizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->styleChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->strikeoutChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->underlineChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->fontWritingSystemChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MetricFontDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MetricFontDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MetricFontDialog,
      qt_meta_data_MetricFontDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MetricFontDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MetricFontDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MetricFontDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MetricFontDialog))
        return static_cast<void*>(const_cast< MetricFontDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MetricFontDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
