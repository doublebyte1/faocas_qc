/****************************************************************************
** Meta object code from reading C++ file 'searchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/report/searchwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Report__SearchWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   22,   21,   21, 0x05,
      47,   22,   21,   21, 0x05,
      71,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   21,   21,   21, 0x0a,
      91,   21,   21,   21, 0x0a,
     104,   21,   21,   21, 0x0a,
     121,   21,   21,   21, 0x0a,
     142,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Report__SearchWidget[] = {
    "Report::SearchWidget\0\0text\0"
    "searchNext(QString)\0searchPrevious(QString)\0"
    "closed()\0notFound()\0searchNext()\0"
    "searchPrevious()\0textChanged(QString)\0"
    "textChanged()\0"
};

void Report::SearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SearchWidget *_t = static_cast<SearchWidget *>(_o);
        switch (_id) {
        case 0: _t->searchNext((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->searchPrevious((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->closed(); break;
        case 3: _t->notFound(); break;
        case 4: _t->searchNext(); break;
        case 5: _t->searchPrevious(); break;
        case 6: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->textChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Report::SearchWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Report::SearchWidget::staticMetaObject = {
    { &QToolBar::staticMetaObject, qt_meta_stringdata_Report__SearchWidget,
      qt_meta_data_Report__SearchWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Report::SearchWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Report::SearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Report::SearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Report__SearchWidget))
        return static_cast<void*>(const_cast< SearchWidget*>(this));
    return QToolBar::qt_metacast(_clname);
}

int Report::SearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Report::SearchWidget::searchNext(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Report::SearchWidget::searchPrevious(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Report::SearchWidget::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
