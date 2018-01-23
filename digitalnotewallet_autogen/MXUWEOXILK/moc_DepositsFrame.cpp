/****************************************************************************
** Meta object code from reading C++ file 'DepositsFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/gui/DepositsFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DepositsFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__DepositsFrame_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__DepositsFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__DepositsFrame_t qt_meta_stringdata_WalletGui__DepositsFrame = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGui::DepositsFrame"
QT_MOC_LITERAL(1, 25, 14), // "depositClicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 20), // "depositParamsChanged"
QT_MOC_LITERAL(4, 62, 18), // "showDepositDetails"
QT_MOC_LITERAL(5, 81, 6), // "_index"
QT_MOC_LITERAL(6, 88, 11), // "timeChanged"
QT_MOC_LITERAL(7, 100, 6), // "_value"
QT_MOC_LITERAL(8, 107, 15) // "withdrawClicked"

    },
    "WalletGui::DepositsFrame\0depositClicked\0"
    "\0depositParamsChanged\0showDepositDetails\0"
    "_index\0timeChanged\0_value\0withdrawClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__DepositsFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void WalletGui::DepositsFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DepositsFrame *_t = static_cast<DepositsFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->depositClicked(); break;
        case 1: _t->depositParamsChanged(); break;
        case 2: _t->showDepositDetails((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->timeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->withdrawClicked(); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::DepositsFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__DepositsFrame.data,
      qt_meta_data_WalletGui__DepositsFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::DepositsFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::DepositsFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__DepositsFrame.stringdata0))
        return static_cast<void*>(const_cast< DepositsFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGui::DepositsFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
