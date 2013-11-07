/****************************************************************************
** Meta object code from reading C++ file 'previewdialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/report/previewdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'previewdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Report__PreviewDialog[] = {

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
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,   22,   22,   22, 0x0a,
      55,   22,   22,   22, 0x0a,
      63,   22,   22,   22, 0x0a,
      75,   22,   22,   22, 0x0a,
      86,   22,   22,   22, 0x0a,
     101,   22,   22,   22, 0x0a,
     112,   22,   22,   22, 0x0a,
     132,   22,   22,   22, 0x0a,
     156,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Report__PreviewDialog[] = {
    "Report::PreviewDialog\0\0textNotFound()\0"
    "clearSelection()\0print()\0firstPage()\0"
    "lastPage()\0readPrevious()\0readNext()\0"
    "searchNext(QString)\0searchPrevious(QString)\0"
    "exportDocument()\0"
};

void Report::PreviewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PreviewDialog *_t = static_cast<PreviewDialog *>(_o);
        switch (_id) {
        case 0: _t->textNotFound(); break;
        case 1: _t->clearSelection(); break;
        case 2: _t->print(); break;
        case 3: _t->firstPage(); break;
        case 4: _t->lastPage(); break;
        case 5: _t->readPrevious(); break;
        case 6: _t->readNext(); break;
        case 7: _t->searchNext((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->searchPrevious((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->exportDocument(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Report::PreviewDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Report::PreviewDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Report__PreviewDialog,
      qt_meta_data_Report__PreviewDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Report::PreviewDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Report::PreviewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Report::PreviewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Report__PreviewDialog))
        return static_cast<void*>(const_cast< PreviewDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Report::PreviewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void Report::PreviewDialog::textNotFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
