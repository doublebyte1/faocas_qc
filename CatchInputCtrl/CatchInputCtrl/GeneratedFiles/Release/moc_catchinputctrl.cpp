/****************************************************************************
** Meta object code from reading C++ file 'catchinputctrl.h'
**
** Created: Fri 23. Dec 18:12:32 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../catchinputctrl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'catchinputctrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CatchInputCtrl[] = {

 // content:
       5,       // revision
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

const QMetaObject CatchInputCtrl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CatchInputCtrl,
      qt_meta_data_CatchInputCtrl, 0 }
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
        switch (_id) {
        case 0: blockWidgetsSignals((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: adjustTotalWeightFromUnits((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: adjustTotalWeightFromUnits((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: adjustTotalWeightFromNoBoxes((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: adjustTotalWeightFromBoxWeight((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: onWeightUnitChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: onUnitsUnitChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: onBoxUnitChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: updateWeightLabel((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: onBlockWidgetsSignals((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
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
