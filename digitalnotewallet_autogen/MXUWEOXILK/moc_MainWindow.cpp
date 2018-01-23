/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/gui/MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__MainWindow_t qt_meta_stringdata_WalletGui__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WalletGui::MainWindow"
QT_MOC_LITERAL(1, 22, 12), // "createWallet"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "openWallet"
QT_MOC_LITERAL(4, 47, 9), // "importKey"
QT_MOC_LITERAL(5, 57, 12), // "backupWallet"
QT_MOC_LITERAL(6, 70, 11), // "resetWallet"
QT_MOC_LITERAL(7, 82, 13), // "encryptWallet"
QT_MOC_LITERAL(8, 96, 7), // "aboutQt"
QT_MOC_LITERAL(9, 104, 5), // "about"
QT_MOC_LITERAL(10, 110, 15), // "setStartOnLogin"
QT_MOC_LITERAL(11, 126, 3), // "_on"
QT_MOC_LITERAL(12, 130, 17), // "setMinimizeToTray"
QT_MOC_LITERAL(13, 148, 14) // "setCloseToTray"

    },
    "WalletGui::MainWindow\0createWallet\0\0"
    "openWallet\0importKey\0backupWallet\0"
    "resetWallet\0encryptWallet\0aboutQt\0"
    "about\0setStartOnLogin\0_on\0setMinimizeToTray\0"
    "setCloseToTray"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void WalletGui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createWallet(); break;
        case 1: _t->openWallet(); break;
        case 2: _t->importKey(); break;
        case 3: _t->backupWallet(); break;
        case 4: _t->resetWallet(); break;
        case 5: _t->encryptWallet(); break;
        case 6: _t->aboutQt(); break;
        case 7: _t->about(); break;
        case 8: _t->setStartOnLogin((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setMinimizeToTray((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setCloseToTray((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WalletGui__MainWindow.data,
      qt_meta_data_WalletGui__MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int WalletGui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
