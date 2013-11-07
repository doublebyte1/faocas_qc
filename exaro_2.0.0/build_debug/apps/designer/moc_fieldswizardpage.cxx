/****************************************************************************
** Meta object code from reading C++ file 'fieldswizardpage.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../apps/designer/fieldswizardpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fieldswizardpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_fieldsWizardPage[] = {

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
      18,   17,   17,   17, 0x08,
      38,   17,   17,   17, 0x08,
      55,   17,   17,   17, 0x08,
      75,   17,   17,   17, 0x08,
      98,   17,   17,   17, 0x08,
     118,   17,   17,   17, 0x08,
     145,  140,   17,   17, 0x08,
     183,  140,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_fieldsWizardPage[] = {
    "fieldsWizardPage\0\0on_addAll_clicked()\0"
    "on_add_clicked()\0on_remove_clicked()\0"
    "on_removeAll_clicked()\0on_moveUp_clicked()\0"
    "on_moveDown_clicked()\0page\0"
    "on_pages_currentIndexChanged(QString)\0"
    "on_details_currentIndexChanged(QString)\0"
};

void fieldsWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        fieldsWizardPage *_t = static_cast<fieldsWizardPage *>(_o);
        switch (_id) {
        case 0: _t->on_addAll_clicked(); break;
        case 1: _t->on_add_clicked(); break;
        case 2: _t->on_remove_clicked(); break;
        case 3: _t->on_removeAll_clicked(); break;
        case 4: _t->on_moveUp_clicked(); break;
        case 5: _t->on_moveDown_clicked(); break;
        case 6: _t->on_pages_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_details_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData fieldsWizardPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject fieldsWizardPage::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_fieldsWizardPage,
      qt_meta_data_fieldsWizardPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &fieldsWizardPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *fieldsWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *fieldsWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fieldsWizardPage))
        return static_cast<void*>(const_cast< fieldsWizardPage*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int fieldsWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
