/****************************************************************************
** Meta object code from reading C++ file 'querywizardpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../apps/designer/querywizardpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'querywizardpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_queryWizardPage[] = {

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
      17,   16,   16,   16, 0x08,
      44,   16,   16,   16, 0x08,
      66,   16,   16,   16, 0x08,
      91,   16,   16,   16, 0x08,
     113,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_queryWizardPage[] = {
    "queryWizardPage\0\0on_setupDatabase_clicked()\0"
    "on_addQuery_clicked()\0on_removeQuery_clicked()\0"
    "on_editName_clicked()\0on_editQuery_clicked()\0"
};

void queryWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        queryWizardPage *_t = static_cast<queryWizardPage *>(_o);
        switch (_id) {
        case 0: _t->on_setupDatabase_clicked(); break;
        case 1: _t->on_addQuery_clicked(); break;
        case 2: _t->on_removeQuery_clicked(); break;
        case 3: _t->on_editName_clicked(); break;
        case 4: _t->on_editQuery_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData queryWizardPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject queryWizardPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_queryWizardPage,
      qt_meta_data_queryWizardPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &queryWizardPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *queryWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *queryWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_queryWizardPage))
        return static_cast<void*>(const_cast< queryWizardPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int queryWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
