/****************************************************************************
** Meta object code from reading C++ file 'MessageAddressFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/gui/MessageAddressFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessageAddressFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__MessageAddressFrame_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__MessageAddressFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__MessageAddressFrame_t qt_meta_stringdata_WalletGui__MessageAddressFrame = {
    {
QT_MOC_LITERAL(0, 0, 30), // "WalletGui::MessageAddressFrame"
QT_MOC_LITERAL(1, 31, 18), // "addressBookClicked"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 13), // "addressEdited"
QT_MOC_LITERAL(4, 65, 5), // "_text"
QT_MOC_LITERAL(5, 71, 12) // "pasteClicked"

    },
    "WalletGui::MessageAddressFrame\0"
    "addressBookClicked\0\0addressEdited\0"
    "_text\0pasteClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__MessageAddressFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void WalletGui::MessageAddressFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MessageAddressFrame *_t = static_cast<MessageAddressFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressBookClicked(); break;
        case 1: _t->addressEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->pasteClicked(); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::MessageAddressFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__MessageAddressFrame.data,
      qt_meta_data_WalletGui__MessageAddressFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::MessageAddressFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::MessageAddressFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__MessageAddressFrame.stringdata0))
        return static_cast<void*>(const_cast< MessageAddressFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int WalletGui::MessageAddressFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
