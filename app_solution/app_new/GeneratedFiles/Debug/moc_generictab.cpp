/****************************************************************************
** Meta object code from reading C++ file 'generictab.h'
**
** Created: Tue 14. May 23:19:37 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../generictab.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generictab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GenericTab[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   12,   11,   11, 0x05,
      67,   63,   11,   11, 0x05,
      94,   84,   11,   11, 0x05,
     127,  113,   11,   11, 0x05,
     192,  150,   11,   11, 0x05,
     319,  285,   11,   11, 0x25,
     432,  408,   11,   11, 0x25,
     509,  113,   11,   11, 0x05,
     531,   11,   11,   11, 0x05,
     549,   63,   11,   11, 0x05,
     585,  569,   11,   11, 0x05,
     609,   63,   11,   11, 0x25,
     638,  628,   11,   11, 0x05,
     661,   11,   11,   11, 0x05,
     673,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     682,   63,   11,   11, 0x0a,
     702,   11,   11,   11, 0x0a,
     710,   11,   11,   11, 0x0a,
     728,   11,  723,   11, 0x0a,
     735,   11,   11,   11, 0x08,
     744,   11,   11,   11, 0x08,
     756,   12,   11,   11, 0x08,
     802,  794,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GenericTab[] = {
    "GenericTab\0\0bLock,lWidgets\0"
    "lockControls(bool,QList<QWidget*>&)\0"
    "str\0forward(QString)\0bNext,idx\0"
    "navigate(bool,int)\0bNotSubmitted\0"
    "hideFrameDetails(bool)\0"
    "mode,persistence,sample,blackList,options\0"
    "showFrameDetails(FrmFrameDetails::Mode,FrmFrameDetails::Persistence,Sa"
    "mple*,QList<int>&,int)\0"
    "mode,persistence,sample,blackList\0"
    "showFrameDetails(FrmFrameDetails::Mode,FrmFrameDetails::Persistence,Sa"
    "mple*,QList<int>&)\0"
    "mode,persistence,sample\0"
    "showFrameDetails(FrmFrameDetails::Mode,FrmFrameDetails::Persistence,Sa"
    "mple*)\0"
    "hideFrmSampling(bool)\0showFrmSampling()\0"
    "showStatus(QString)\0str,bShowMsgBox\0"
    "showError(QString,bool)\0showError(QString)\0"
    "strHelpId\0currentHelpId(QString)\0"
    "addRecord()\0submit()\0fillHeader(QString)\0"
    "apply()\0onShowForm()\0bool\0next()\0"
    "goBack()\0goForward()\0"
    "onLockControls(bool,QList<QWidget*>&)\0"
    "bSubmit\0onPreSubmit(bool)\0"
};

const QMetaObject GenericTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GenericTab,
      qt_meta_data_GenericTab, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GenericTab::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GenericTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GenericTab::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GenericTab))
        return static_cast<void*>(const_cast< GenericTab*>(this));
    return QWidget::qt_metacast(_clname);
}

int GenericTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: lockControls((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<QWidget*>(*)>(_a[2]))); break;
        case 1: forward((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: navigate((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: hideFrameDetails((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: showFrameDetails((*reinterpret_cast< const FrmFrameDetails::Mode(*)>(_a[1])),(*reinterpret_cast< const FrmFrameDetails::Persistence(*)>(_a[2])),(*reinterpret_cast< Sample*(*)>(_a[3])),(*reinterpret_cast< QList<int>(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        case 5: showFrameDetails((*reinterpret_cast< const FrmFrameDetails::Mode(*)>(_a[1])),(*reinterpret_cast< const FrmFrameDetails::Persistence(*)>(_a[2])),(*reinterpret_cast< Sample*(*)>(_a[3])),(*reinterpret_cast< QList<int>(*)>(_a[4]))); break;
        case 6: showFrameDetails((*reinterpret_cast< const FrmFrameDetails::Mode(*)>(_a[1])),(*reinterpret_cast< const FrmFrameDetails::Persistence(*)>(_a[2])),(*reinterpret_cast< Sample*(*)>(_a[3]))); break;
        case 7: hideFrmSampling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: showFrmSampling(); break;
        case 9: showStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: showError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 11: showError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: currentHelpId((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: addRecord(); break;
        case 14: submit(); break;
        case 15: fillHeader((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: apply(); break;
        case 17: onShowForm(); break;
        case 18: { bool _r = next();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 19: goBack(); break;
        case 20: goForward(); break;
        case 21: onLockControls((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<QWidget*>(*)>(_a[2]))); break;
        case 22: onPreSubmit((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void GenericTab::lockControls(bool _t1, QList<QWidget*> & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GenericTab::forward(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GenericTab::navigate(const bool _t1, const int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GenericTab::hideFrameDetails(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GenericTab::showFrameDetails(const FrmFrameDetails::Mode _t1, const FrmFrameDetails::Persistence _t2, Sample * _t3, QList<int> & _t4, const int _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 7
void GenericTab::hideFrmSampling(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GenericTab::showFrmSampling()
{
    QMetaObject::activate(this, &staticMetaObject, 8, 0);
}

// SIGNAL 9
void GenericTab::showStatus(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GenericTab::showError(QString _t1, const bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 12
void GenericTab::currentHelpId(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GenericTab::addRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 13, 0);
}

// SIGNAL 14
void GenericTab::submit()
{
    QMetaObject::activate(this, &staticMetaObject, 14, 0);
}
static const uint qt_meta_data_SecondaryFrm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      28,   24,   13,   13, 0x05,
      64,   48,   13,   13, 0x05,
      88,   24,   13,   13, 0x25,

       0        // eod
};

static const char qt_meta_stringdata_SecondaryFrm[] = {
    "SecondaryFrm\0\0hideFrm()\0str\0"
    "showStatus(QString)\0str,bShowMsgBox\0"
    "showError(QString,bool)\0showError(QString)\0"
};

const QMetaObject SecondaryFrm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SecondaryFrm,
      qt_meta_data_SecondaryFrm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SecondaryFrm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SecondaryFrm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SecondaryFrm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SecondaryFrm))
        return static_cast<void*>(const_cast< SecondaryFrm*>(this));
    return QWidget::qt_metacast(_clname);
}

int SecondaryFrm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: hideFrm(); break;
        case 1: showStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: showError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 3: showError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SecondaryFrm::hideFrm()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SecondaryFrm::showStatus(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SecondaryFrm::showError(QString _t1, const bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
