/****************************************************************************
** Meta object code from reading C++ file 'frmtrip.h'
**
** Created: Tue 14. May 23:19:33 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../frmtrip.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmtrip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrmTrip[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      30,   24,    8,    8, 0x08,
      54,    8,    8,    8, 0x08,
      72,    8,    8,    8, 0x08,
      95,    8,    8,    8, 0x08,
     141,  120,    8,    8, 0x08,
     164,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FrmTrip[] = {
    "FrmTrip\0\0createRecord()\0index\0"
    "previewRow(QModelIndex)\0onItemSelection()\0"
    "blockCustomDateCtrls()\0unblockCustomDateCtrls()\0"
    "bFinished,bDiscarded\0onEditLeave(bool,bool)\0"
    "editFinished()\0"
};

const QMetaObject FrmTrip::staticMetaObject = {
    { &PreviewTab::staticMetaObject, qt_meta_stringdata_FrmTrip,
      qt_meta_data_FrmTrip, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FrmTrip::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FrmTrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FrmTrip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrmTrip))
        return static_cast<void*>(const_cast< FrmTrip*>(this));
    if (!strcmp(_clname, "Ui::FrmTrip"))
        return static_cast< Ui::FrmTrip*>(const_cast< FrmTrip*>(this));
    return PreviewTab::qt_metacast(_clname);
}

int FrmTrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PreviewTab::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createRecord(); break;
        case 1: previewRow((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: onItemSelection(); break;
        case 3: blockCustomDateCtrls(); break;
        case 4: unblockCustomDateCtrls(); break;
        case 5: onEditLeave((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 6: editFinished(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
