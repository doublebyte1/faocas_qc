/****************************************************************************
** Meta object code from reading C++ file 'abstractrulebinder.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../abstractrulebinder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractrulebinder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractRuleBinder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      32,   19,   19,   19, 0x05,
      52,   19,   19,   19, 0x05,
      71,   67,   19,   19, 0x05,
      99,   95,   19,   19, 0x05,
     135,  119,   19,   19, 0x05,
     159,   95,   19,   19, 0x25,

 // slots: signature, parameters, type, tag, flags
     183,   19,  178,   19, 0x08,
     202,   19,   19,   19, 0x08,
     218,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AbstractRuleBinder[] = {
    "AbstractRuleBinder\0\0addRecord()\0"
    "defaultValuesRead()\0submitRecord()\0"
    "bOk\0finishedPreSubmit(bool)\0str\0"
    "showStatus(QString)\0str,bShowMsgBox\0"
    "showError(QString,bool)\0showError(QString)\0"
    "bool\0getDefaultValues()\0onFireTrigger()\0"
    "getPreSubmitValidation()\0"
};

void AbstractRuleBinder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AbstractRuleBinder *_t = static_cast<AbstractRuleBinder *>(_o);
        switch (_id) {
        case 0: _t->addRecord(); break;
        case 1: _t->defaultValuesRead(); break;
        case 2: _t->submitRecord(); break;
        case 3: _t->finishedPreSubmit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->showStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->showError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 6: _t->showError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: { bool _r = _t->getDefaultValues();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->onFireTrigger(); break;
        case 9: _t->getPreSubmitValidation(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AbstractRuleBinder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AbstractRuleBinder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AbstractRuleBinder,
      qt_meta_data_AbstractRuleBinder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractRuleBinder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractRuleBinder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractRuleBinder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractRuleBinder))
        return static_cast<void*>(const_cast< AbstractRuleBinder*>(this));
    return QObject::qt_metacast(_clname);
}

int AbstractRuleBinder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void AbstractRuleBinder::addRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AbstractRuleBinder::defaultValuesRead()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void AbstractRuleBinder::submitRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void AbstractRuleBinder::finishedPreSubmit(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AbstractRuleBinder::showStatus(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AbstractRuleBinder::showError(QString _t1, const bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
