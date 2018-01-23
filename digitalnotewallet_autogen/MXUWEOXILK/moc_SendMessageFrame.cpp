/****************************************************************************
** Meta object code from reading C++ file 'SendMessageFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/gui/SendMessageFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SendMessageFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__SendMessageFrame_t {
    QByteArrayData data[11];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__SendMessageFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__SendMessageFrame_t qt_meta_stringdata_WalletGui__SendMessageFrame = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WalletGui::SendMessageFrame"
QT_MOC_LITERAL(1, 28, 19), // "addRecipientClicked"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 18), // "messageTextChanged"
QT_MOC_LITERAL(4, 68, 17), // "mixinValueChanged"
QT_MOC_LITERAL(5, 86, 6), // "_value"
QT_MOC_LITERAL(6, 93, 11), // "sendClicked"
QT_MOC_LITERAL(7, 105, 20), // "ttlCheckStateChanged"
QT_MOC_LITERAL(8, 126, 6), // "_state"
QT_MOC_LITERAL(9, 133, 15), // "ttlValueChanged"
QT_MOC_LITERAL(10, 149, 9) // "_ttlValue"

    },
    "WalletGui::SendMessageFrame\0"
    "addRecipientClicked\0\0messageTextChanged\0"
    "mixinValueChanged\0_value\0sendClicked\0"
    "ttlCheckStateChanged\0_state\0ttlValueChanged\0"
    "_ttlValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__SendMessageFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void WalletGui::SendMessageFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendMessageFrame *_t = static_cast<SendMessageFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addRecipientClicked(); break;
        case 1: _t->messageTextChanged(); break;
        case 2: _t->mixinValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sendClicked(); break;
        case 4: _t->ttlCheckStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ttlValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::SendMessageFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__SendMessageFrame.data,
      qt_meta_data_WalletGui__SendMessageFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::SendMessageFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::SendMessageFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__SendMessageFrame.stringdata0))
        return static_cast<void*>(const_cast< SendMessageFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGui::SendMessageFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
