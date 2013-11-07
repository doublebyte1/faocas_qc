/****************************************************************************
** Meta object code from reading C++ file 'frmlu.h'
**
** Created: Tue 14. May 21:38:40 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../frmlu.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmlu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_frmlu[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,    7,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_frmlu[] = {
    "frmlu\0\0val,mac\0LU(int,QString)\0emitLU()\0"
};

const QMetaObject frmlu::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_frmlu,
      qt_meta_data_frmlu, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &frmlu::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *frmlu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *frmlu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_frmlu))
        return static_cast<void*>(const_cast< frmlu*>(this));
    if (!strcmp(_clname, "Ui::frmlu"))
        return static_cast< Ui::frmlu*>(const_cast< frmlu*>(this));
    return QDialog::qt_metacast(_clname);
}

int frmlu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: LU((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: emitLU(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void frmlu::LU(const int _t1, const QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
