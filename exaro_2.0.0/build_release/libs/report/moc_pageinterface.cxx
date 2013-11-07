/****************************************************************************
** Meta object code from reading C++ file 'pageinterface.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libs/report/pageinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pageinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Report__PageInterface[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       6,   64, // properties
       2,   82, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      44,   23,   22,   22, 0x05,
      87,   75,   22,   22, 0x05,
     113,  111,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     150,  141,   22,   22, 0x0a,
     170,  141,   22,   22, 0x0a,
     191,  141,   22,   22, 0x0a,
     210,  141,   22,   22, 0x0a,
     232,  141,   22,   22, 0x0a,
     258,  141,   22,   22, 0x0a,
     293,  282,   22,   22, 0x0a,

 // properties: name, type, flags
     325,  316, 0x0009510b,
     346,  334, 0x0009510b,
     365,  358, 0x14095103,
     374,  358, 0x14095103,
     388,  384, 0x02095103,
     404,  399, 0x01095103,

 // enums: name, flags, count, data
     334, 0x0,    2,   90,
     316, 0x0,   32,   94,

 // enum data: key, value
     413, uint(Report::PageInterface::Portrait),
     422, uint(Report::PageInterface::Landscape),
     432, uint(Report::PageInterface::A4),
     435, uint(Report::PageInterface::B5),
     438, uint(Report::PageInterface::Letter),
     445, uint(Report::PageInterface::Legal),
     451, uint(Report::PageInterface::Executive),
     461, uint(Report::PageInterface::A0),
     464, uint(Report::PageInterface::A1),
     467, uint(Report::PageInterface::A2),
     470, uint(Report::PageInterface::A3),
     473, uint(Report::PageInterface::A5),
     476, uint(Report::PageInterface::A6),
     479, uint(Report::PageInterface::A7),
     482, uint(Report::PageInterface::A8),
     485, uint(Report::PageInterface::A9),
     488, uint(Report::PageInterface::B0),
     491, uint(Report::PageInterface::B1),
     494, uint(Report::PageInterface::B10),
     498, uint(Report::PageInterface::B2),
     501, uint(Report::PageInterface::B3),
     504, uint(Report::PageInterface::B4),
     507, uint(Report::PageInterface::B6),
     510, uint(Report::PageInterface::B7),
     513, uint(Report::PageInterface::B8),
     516, uint(Report::PageInterface::B9),
     519, uint(Report::PageInterface::C5E),
     523, uint(Report::PageInterface::Comm10E),
     531, uint(Report::PageInterface::DLE),
     535, uint(Report::PageInterface::Folio),
     541, uint(Report::PageInterface::Ledger),
     548, uint(Report::PageInterface::Tabloid),
     556, uint(Report::PageInterface::Custom),
     563, uint(Report::PageInterface::NPageSize),

       0        // eod
};

static const char qt_meta_stringdata_Report__PageInterface[] = {
    "Report::PageInterface\0\0thisObject,cursorPos\0"
    "itemSelected(QObject*,QPointF)\0"
    "newGeometry\0geometryChanged(QRectF)\0"
    ",\0itemMoved(QObject*,QPointF)\0magneted\0"
    "setLeftMagnet(bool)\0setRightMagnet(bool)\0"
    "setTopMagnet(bool)\0setBottomMagnet(bool)\0"
    "setHorizontalMagnet(bool)\0"
    "setVerticalMagnet(bool)\0type,order\0"
    "bandDestroyed(int,int)\0PageSize\0"
    "pageSize\0Orientation\0orientation\0"
    "QRectF\0geometry\0paperRect\0int\0magnetArea\0"
    "bool\0showGrid\0Portrait\0Landscape\0A4\0"
    "B5\0Letter\0Legal\0Executive\0A0\0A1\0A2\0"
    "A3\0A5\0A6\0A7\0A8\0A9\0B0\0B1\0B10\0B2\0B3\0B4\0"
    "B6\0B7\0B8\0B9\0C5E\0Comm10E\0DLE\0Folio\0"
    "Ledger\0Tabloid\0Custom\0NPageSize\0"
};

void Report::PageInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PageInterface *_t = static_cast<PageInterface *>(_o);
        switch (_id) {
        case 0: _t->itemSelected((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 1: _t->geometryChanged((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 2: _t->itemMoved((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 3: _t->setLeftMagnet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setRightMagnet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setTopMagnet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setBottomMagnet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setHorizontalMagnet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setVerticalMagnet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->bandDestroyed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Report::PageInterface::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Report::PageInterface::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_Report__PageInterface,
      qt_meta_data_Report__PageInterface, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Report::PageInterface::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Report::PageInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Report::PageInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Report__PageInterface))
        return static_cast<void*>(const_cast< PageInterface*>(this));
    return QGraphicsScene::qt_metacast(_clname);
}

int Report::PageInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PageSize*>(_v) = pageSize(); break;
        case 1: *reinterpret_cast< Orientation*>(_v) = orientation(); break;
        case 2: *reinterpret_cast< QRectF*>(_v) = geometry(); break;
        case 3: *reinterpret_cast< QRectF*>(_v) = paperRect(); break;
        case 4: *reinterpret_cast< int*>(_v) = magnetArea(); break;
        case 5: *reinterpret_cast< bool*>(_v) = showGrid(); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPageSize(*reinterpret_cast< PageSize*>(_v)); break;
        case 1: setOrientation(*reinterpret_cast< Orientation*>(_v)); break;
        case 2: setGeometry(*reinterpret_cast< QRectF*>(_v)); break;
        case 3: setPaperRect(*reinterpret_cast< QRectF*>(_v)); break;
        case 4: setMagnetArea(*reinterpret_cast< int*>(_v)); break;
        case 5: setShowGrid(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Report::PageInterface::itemSelected(QObject * _t1, QPointF _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Report::PageInterface::geometryChanged(QRectF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Report::PageInterface::itemMoved(QObject * _t1, QPointF _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
