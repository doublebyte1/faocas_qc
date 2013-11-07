/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../apps/designer/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_mainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   11,   11,   11, 0x0a,
      98,   11,   11,   11, 0x09,
     108,   11,   11,   11, 0x09,
     121,   11,   11,   11, 0x09,
     141,   12,   11,   11, 0x09,
     172,   11,   11,   11, 0x09,
     181,   11,   11,   11, 0x09,
     191,   11,   11,   11, 0x09,
     206,   11,   11,   11, 0x09,
     220,   11,   11,   11, 0x09,
     233,   11,   11,   11, 0x09,
     246,   11,   11,   11, 0x09,
     261,   11,   11,   11, 0x09,
     281,  274,   11,   11, 0x09,
     301,   11,   11,   11, 0x09,
     313,   11,   11,   11, 0x09,
     328,   11,   11,   11, 0x09,
     350,   11,   11,   11, 0x09,
     376,   11,   11,   11, 0x09,
     400,   11,   11,   11, 0x09,
     416,   11,   11,   11, 0x09,
     432,   11,   11,   11, 0x09,
     439,   11,   11,   11, 0x09,
     447,   11,   11,   11, 0x09,
     453,   11,   11,   11, 0x09,
     476,  459,   11,   11, 0x09,
     515,   11,   11,   11, 0x09,
     523,   11,   11,   11, 0x09,
     533,   11,   11,   11, 0x09,
     544,   11,   11,   11, 0x09,
     583,  555,   11,   11, 0x09,
     648,  611,   11,   11, 0x09,
     731,  700,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_mainWindow[] = {
    "mainWindow\0\0,\0"
    "setCurrentIndex(QModelIndex,QItemSelectionModel::SelectionFlags)\0"
    "selectLastObject()\0newPage()\0removePage()\0"
    "currentChanged(int)\0itemSelected(QObject*,QPointF)\0"
    "zoomIn()\0zoomOut()\0zoomOriginal()\0"
    "zoomWYSIWYG()\0editScript()\0saveReport()\0"
    "saveReportAs()\0openReport()\0report\0"
    "openReport(QString)\0newReport()\0"
    "openTemplate()\0openTemplate(QString)\0"
    "prepareLastTemplateMenu()\0"
    "prepareLastReportMenu()\0executeReport()\0"
    "setupDatabase()\0copy()\0paste()\0del()\0"
    "cut()\0current,previous\0"
    "objectChanged(QModelIndex,QModelIndex)\0"
    "about()\0options()\0saveItem()\0openItem()\0"
    "movedItem,movedFromPosition\0"
    "itemMoved(QObject*,QPointF)\0"
    "obj,propertyName,old_value,new_value\0"
    "propertyChanged(QObject*,QString,QVariant,QVariant)\0"
    "object,newGeometry,oldGeometry\0"
    "itemGeometryChanged(QObject*,QRectF,QRectF)\0"
};

void mainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        mainWindow *_t = static_cast<mainWindow *>(_o);
        switch (_id) {
        case 0: _t->setCurrentIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 1: _t->selectLastObject(); break;
        case 2: _t->newPage(); break;
        case 3: _t->removePage(); break;
        case 4: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->itemSelected((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 6: _t->zoomIn(); break;
        case 7: _t->zoomOut(); break;
        case 8: _t->zoomOriginal(); break;
        case 9: _t->zoomWYSIWYG(); break;
        case 10: _t->editScript(); break;
        case 11: _t->saveReport(); break;
        case 12: _t->saveReportAs(); break;
        case 13: _t->openReport(); break;
        case 14: _t->openReport((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->newReport(); break;
        case 16: _t->openTemplate(); break;
        case 17: _t->openTemplate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->prepareLastTemplateMenu(); break;
        case 19: _t->prepareLastReportMenu(); break;
        case 20: _t->executeReport(); break;
        case 21: _t->setupDatabase(); break;
        case 22: _t->copy(); break;
        case 23: _t->paste(); break;
        case 24: _t->del(); break;
        case 25: _t->cut(); break;
        case 26: _t->objectChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 27: _t->about(); break;
        case 28: _t->options(); break;
        case 29: _t->saveItem(); break;
        case 30: _t->openItem(); break;
        case 31: _t->itemMoved((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 32: _t->propertyChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< const QVariant(*)>(_a[4]))); break;
        case 33: _t->itemGeometryChanged((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QRectF(*)>(_a[2])),(*reinterpret_cast< QRectF(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData mainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject mainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mainWindow,
      qt_meta_data_mainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &mainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *mainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *mainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_mainWindow))
        return static_cast<void*>(const_cast< mainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int mainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void mainWindow::setCurrentIndex(const QModelIndex & _t1, QItemSelectionModel::SelectionFlags _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
