/****************************************************************************
** Meta object code from reading C++ file 'catchinputctrl.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../catchinputctrl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'catchinputctrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CatchInputCtrl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   49,   15,   15, 0x08,
      85,   49,   15,   15, 0x08,
     120,   49,   15,   15, 0x08,
     157,   49,   15,   15, 0x08,
     205,  196,   15,   15, 0x08,
     233,  196,   15,   15, 0x08,
     260,  196,   15,   15, 0x08,
     292,  285,   15,   15, 0x08,
     319,   16,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CatchInputCtrl[] = {
    "CatchInputCtrl\0\0bBlock\0blockWidgetsSignals(bool)\0"
    "val\0adjustTotalWeightFromUnits(int)\0"
    "adjustTotalWeightFromUnits(double)\0"
    "adjustTotalWeightFromNoBoxes(double)\0"
    "adjustTotalWeightFromBoxWeight(double)\0"
    "strUnits\0onWeightUnitChange(QString)\0"
    "onUnitsUnitChange(QString)\0"
    "onBoxUnitChange(QString)\0strNew\0"
    "updateWeightLabel(QString)\0"
    "onBlockWidgetsSignals(bool)\0"
};

void CatchInputCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CatchInputCtrl *_t = static_cast<CatchInputCtrl *>(_o);
        switch (_id) {
        case 0: _t->blockWidgetsSignals((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->adjustTotalWeightFromUnits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->adjustTotalWeightFromUnits((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->adjustTotalWeightFromNoBoxes((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->adjustTotalWeightFromBoxWeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->onWeightUnitChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->onUnitsUnitChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onBoxUnitChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->updateWeightLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->onBlockWidgetsSignals((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CatchInputCtrl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CatchInputCtrl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CatchInputCtrl,
      qt_meta_data_CatchInputCtrl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CatchInputCtrl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CatchInputCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CatchInputCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CatchInputCtrl))
        return static_cast<void*>(const_cast< CatchInputCtrl*>(this));
    if (!strcmp(_clname, "Ui::CatchInputCtrl"))
        return static_cast< Ui::CatchInputCtrl*>(const_cast< CatchInputCtrl*>(this));
    return QWidget::qt_metacast(_clname);
}

int CatchInputCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CatchInputCtrl::blockWidgetsSignals(const bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
