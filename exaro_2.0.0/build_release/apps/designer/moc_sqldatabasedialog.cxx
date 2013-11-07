/****************************************************************************
** Meta object code from reading C++ file 'sqldatabasedialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../apps/designer/sqldatabasedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqldatabasedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SqlDatabaseDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x09,
      28,   18,   18,   18, 0x09,
      58,   52,   18,   18, 0x09,
      94,   18,   18,   18, 0x09,
     119,  114,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SqlDatabaseDialog[] = {
    "SqlDatabaseDialog\0\0accept()\0"
    "on_openButton_clicked()\0index\0"
    "on_drivers_currentIndexChanged(int)\0"
    "on_pbSave_clicked()\0text\0"
    "on_cbConnections_activated(QString)\0"
};

void SqlDatabaseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SqlDatabaseDialog *_t = static_cast<SqlDatabaseDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->on_openButton_clicked(); break;
        case 2: _t->on_drivers_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pbSave_clicked(); break;
        case 4: _t->on_cbConnections_activated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SqlDatabaseDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SqlDatabaseDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SqlDatabaseDialog,
      qt_meta_data_SqlDatabaseDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SqlDatabaseDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SqlDatabaseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SqlDatabaseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SqlDatabaseDialog))
        return static_cast<void*>(const_cast< SqlDatabaseDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SqlDatabaseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
