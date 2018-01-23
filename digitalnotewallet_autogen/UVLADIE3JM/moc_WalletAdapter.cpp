/****************************************************************************
** Meta object code from reading C++ file 'WalletAdapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/WalletAdapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WalletAdapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__WalletAdapter_t {
    QByteArrayData data[42];
    char stringdata0[1047];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__WalletAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__WalletAdapter_t qt_meta_stringdata_WalletGui__WalletAdapter = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGui::WalletAdapter"
QT_MOC_LITERAL(1, 25, 25), // "walletInitCompletedSignal"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 6), // "_error"
QT_MOC_LITERAL(4, 59, 10), // "_errorText"
QT_MOC_LITERAL(5, 70, 26), // "walletCloseCompletedSignal"
QT_MOC_LITERAL(6, 97, 25), // "walletSaveCompletedSignal"
QT_MOC_LITERAL(7, 123, 42), // "walletSynchronizationProgress..."
QT_MOC_LITERAL(8, 166, 8), // "_current"
QT_MOC_LITERAL(9, 175, 6), // "_total"
QT_MOC_LITERAL(10, 182, 36), // "walletSynchronizationComplete..."
QT_MOC_LITERAL(11, 219, 11), // "_error_text"
QT_MOC_LITERAL(12, 231, 32), // "walletActualBalanceUpdatedSignal"
QT_MOC_LITERAL(13, 264, 14), // "_actualBalance"
QT_MOC_LITERAL(14, 279, 33), // "walletPendingBalanceUpdatedSi..."
QT_MOC_LITERAL(15, 313, 15), // "_pendingBalance"
QT_MOC_LITERAL(16, 329, 39), // "walletActualDepositBalanceUpd..."
QT_MOC_LITERAL(17, 369, 21), // "_actualDepositBalance"
QT_MOC_LITERAL(18, 391, 40), // "walletPendingDepositBalanceUp..."
QT_MOC_LITERAL(19, 432, 22), // "_pendingDepositBalance"
QT_MOC_LITERAL(20, 455, 30), // "walletTransactionCreatedSignal"
QT_MOC_LITERAL(21, 486, 25), // "CryptoNote::TransactionId"
QT_MOC_LITERAL(22, 512, 14), // "_transactionId"
QT_MOC_LITERAL(23, 527, 36), // "walletSendTransactionComplete..."
QT_MOC_LITERAL(24, 564, 32), // "walletSendMessageCompletedSignal"
QT_MOC_LITERAL(25, 597, 34), // "walletCreateDepositCompletedS..."
QT_MOC_LITERAL(26, 632, 36), // "walletWithdrawDepositComplete..."
QT_MOC_LITERAL(27, 669, 30), // "walletTransactionUpdatedSignal"
QT_MOC_LITERAL(28, 700, 27), // "walletDepositsUpdatedSignal"
QT_MOC_LITERAL(29, 728, 30), // "QVector<CryptoNote::DepositId>"
QT_MOC_LITERAL(30, 759, 11), // "_depositIds"
QT_MOC_LITERAL(31, 771, 24), // "walletStateChangedSignal"
QT_MOC_LITERAL(32, 796, 10), // "_stateText"
QT_MOC_LITERAL(33, 807, 28), // "openWalletWithPasswordSignal"
QT_MOC_LITERAL(34, 836, 26), // "changeWalletPasswordSignal"
QT_MOC_LITERAL(35, 863, 25), // "updateWalletAddressSignal"
QT_MOC_LITERAL(36, 889, 8), // "_address"
QT_MOC_LITERAL(37, 898, 30), // "reloadWalletTransactionsSignal"
QT_MOC_LITERAL(38, 929, 27), // "updateBlockStatusTextSignal"
QT_MOC_LITERAL(39, 957, 36), // "updateBlockStatusTextWithDela..."
QT_MOC_LITERAL(40, 994, 21), // "updateBlockStatusText"
QT_MOC_LITERAL(41, 1016, 30) // "updateBlockStatusTextWithDelay"

    },
    "WalletGui::WalletAdapter\0"
    "walletInitCompletedSignal\0\0_error\0"
    "_errorText\0walletCloseCompletedSignal\0"
    "walletSaveCompletedSignal\0"
    "walletSynchronizationProgressUpdatedSignal\0"
    "_current\0_total\0walletSynchronizationCompletedSignal\0"
    "_error_text\0walletActualBalanceUpdatedSignal\0"
    "_actualBalance\0walletPendingBalanceUpdatedSignal\0"
    "_pendingBalance\0walletActualDepositBalanceUpdatedSignal\0"
    "_actualDepositBalance\0"
    "walletPendingDepositBalanceUpdatedSignal\0"
    "_pendingDepositBalance\0"
    "walletTransactionCreatedSignal\0"
    "CryptoNote::TransactionId\0_transactionId\0"
    "walletSendTransactionCompletedSignal\0"
    "walletSendMessageCompletedSignal\0"
    "walletCreateDepositCompletedSignal\0"
    "walletWithdrawDepositCompletedSignal\0"
    "walletTransactionUpdatedSignal\0"
    "walletDepositsUpdatedSignal\0"
    "QVector<CryptoNote::DepositId>\0"
    "_depositIds\0walletStateChangedSignal\0"
    "_stateText\0openWalletWithPasswordSignal\0"
    "changeWalletPasswordSignal\0"
    "updateWalletAddressSignal\0_address\0"
    "reloadWalletTransactionsSignal\0"
    "updateBlockStatusTextSignal\0"
    "updateBlockStatusTextWithDelaySignal\0"
    "updateBlockStatusText\0"
    "updateBlockStatusTextWithDelay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__WalletAdapter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  139,    2, 0x06 /* Public */,
       5,    0,  144,    2, 0x06 /* Public */,
       6,    2,  145,    2, 0x06 /* Public */,
       7,    2,  150,    2, 0x06 /* Public */,
      10,    2,  155,    2, 0x06 /* Public */,
      12,    1,  160,    2, 0x06 /* Public */,
      14,    1,  163,    2, 0x06 /* Public */,
      16,    1,  166,    2, 0x06 /* Public */,
      18,    1,  169,    2, 0x06 /* Public */,
      20,    1,  172,    2, 0x06 /* Public */,
      23,    3,  175,    2, 0x06 /* Public */,
      24,    3,  182,    2, 0x06 /* Public */,
      25,    3,  189,    2, 0x06 /* Public */,
      26,    3,  196,    2, 0x06 /* Public */,
      27,    1,  203,    2, 0x06 /* Public */,
      28,    1,  206,    2, 0x06 /* Public */,
      31,    1,  209,    2, 0x06 /* Public */,
      33,    1,  212,    2, 0x06 /* Public */,
      34,    0,  215,    2, 0x06 /* Public */,
      35,    1,  216,    2, 0x06 /* Public */,
      37,    0,  219,    2, 0x06 /* Public */,
      38,    0,  220,    2, 0x06 /* Public */,
      39,    0,  221,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      40,    0,  222,    2, 0x08 /* Private */,
      41,    0,  223,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,   11,
    QMetaType::Void, QMetaType::ULongLong,   13,
    QMetaType::Void, QMetaType::ULongLong,   15,
    QMetaType::Void, QMetaType::ULongLong,   17,
    QMetaType::Void, QMetaType::ULongLong,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 21, QMetaType::Int, QMetaType::QString,   22,    3,    4,
    QMetaType::Void, 0x80000000 | 21, QMetaType::Int, QMetaType::QString,   22,    3,    4,
    QMetaType::Void, 0x80000000 | 21, QMetaType::Int, QMetaType::QString,   22,    3,    4,
    QMetaType::Void, 0x80000000 | 21, QMetaType::Int, QMetaType::QString,   22,    3,    4,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletGui::WalletAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletAdapter *_t = static_cast<WalletAdapter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->walletInitCompletedSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->walletCloseCompletedSignal(); break;
        case 2: _t->walletSaveCompletedSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->walletSynchronizationProgressUpdatedSignal((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 4: _t->walletSynchronizationCompletedSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->walletActualBalanceUpdatedSignal((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 6: _t->walletPendingBalanceUpdatedSignal((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 7: _t->walletActualDepositBalanceUpdatedSignal((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 8: _t->walletPendingDepositBalanceUpdatedSignal((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 9: _t->walletTransactionCreatedSignal((*reinterpret_cast< CryptoNote::TransactionId(*)>(_a[1]))); break;
        case 10: _t->walletSendTransactionCompletedSignal((*reinterpret_cast< CryptoNote::TransactionId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 11: _t->walletSendMessageCompletedSignal((*reinterpret_cast< CryptoNote::TransactionId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->walletCreateDepositCompletedSignal((*reinterpret_cast< CryptoNote::TransactionId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 13: _t->walletWithdrawDepositCompletedSignal((*reinterpret_cast< CryptoNote::TransactionId(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 14: _t->walletTransactionUpdatedSignal((*reinterpret_cast< CryptoNote::TransactionId(*)>(_a[1]))); break;
        case 15: _t->walletDepositsUpdatedSignal((*reinterpret_cast< const QVector<CryptoNote::DepositId>(*)>(_a[1]))); break;
        case 16: _t->walletStateChangedSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->openWalletWithPasswordSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->changeWalletPasswordSignal(); break;
        case 19: _t->updateWalletAddressSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->reloadWalletTransactionsSignal(); break;
        case 21: _t->updateBlockStatusTextSignal(); break;
        case 22: _t->updateBlockStatusTextWithDelaySignal(); break;
        case 23: _t->updateBlockStatusText(); break;
        case 24: _t->updateBlockStatusTextWithDelay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WalletAdapter::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletInitCompletedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletCloseCompletedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletSaveCompletedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(quint64 , quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletSynchronizationProgressUpdatedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletSynchronizationCompletedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletActualBalanceUpdatedSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletPendingBalanceUpdatedSignal)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletActualDepositBalanceUpdatedSignal)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletPendingDepositBalanceUpdatedSignal)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(CryptoNote::TransactionId );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletTransactionCreatedSignal)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(CryptoNote::TransactionId , int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletSendTransactionCompletedSignal)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(CryptoNote::TransactionId , int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletSendMessageCompletedSignal)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(CryptoNote::TransactionId , int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletCreateDepositCompletedSignal)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(CryptoNote::TransactionId , int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletWithdrawDepositCompletedSignal)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(CryptoNote::TransactionId );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletTransactionUpdatedSignal)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(const QVector<CryptoNote::DepositId> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletDepositsUpdatedSignal)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::walletStateChangedSignal)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::openWalletWithPasswordSignal)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::changeWalletPasswordSignal)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::updateWalletAddressSignal)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::reloadWalletTransactionsSignal)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::updateBlockStatusTextSignal)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (WalletAdapter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalletAdapter::updateBlockStatusTextWithDelaySignal)) {
                *result = 22;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::WalletAdapter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__WalletAdapter.data,
      qt_meta_data_WalletGui__WalletAdapter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::WalletAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::WalletAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__WalletAdapter.stringdata0))
        return static_cast<void*>(const_cast< WalletAdapter*>(this));
    if (!strcmp(_clname, "CryptoNote::IWalletLegacyObserver"))
        return static_cast< CryptoNote::IWalletLegacyObserver*>(const_cast< WalletAdapter*>(this));
    return QObject::qt_metacast(_clname);
}

int WalletGui::WalletAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::WalletAdapter::walletInitCompletedSignal(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::WalletAdapter::walletCloseCompletedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletGui::WalletAdapter::walletSaveCompletedSignal(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletGui::WalletAdapter::walletSynchronizationProgressUpdatedSignal(quint64 _t1, quint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGui::WalletAdapter::walletSynchronizationCompletedSignal(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGui::WalletAdapter::walletActualBalanceUpdatedSignal(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGui::WalletAdapter::walletPendingBalanceUpdatedSignal(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletGui::WalletAdapter::walletActualDepositBalanceUpdatedSignal(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WalletGui::WalletAdapter::walletPendingDepositBalanceUpdatedSignal(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WalletGui::WalletAdapter::walletTransactionCreatedSignal(CryptoNote::TransactionId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WalletGui::WalletAdapter::walletSendTransactionCompletedSignal(CryptoNote::TransactionId _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WalletGui::WalletAdapter::walletSendMessageCompletedSignal(CryptoNote::TransactionId _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WalletGui::WalletAdapter::walletCreateDepositCompletedSignal(CryptoNote::TransactionId _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void WalletGui::WalletAdapter::walletWithdrawDepositCompletedSignal(CryptoNote::TransactionId _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void WalletGui::WalletAdapter::walletTransactionUpdatedSignal(CryptoNote::TransactionId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void WalletGui::WalletAdapter::walletDepositsUpdatedSignal(const QVector<CryptoNote::DepositId> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void WalletGui::WalletAdapter::walletStateChangedSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void WalletGui::WalletAdapter::openWalletWithPasswordSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void WalletGui::WalletAdapter::changeWalletPasswordSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void WalletGui::WalletAdapter::updateWalletAddressSignal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void WalletGui::WalletAdapter::reloadWalletTransactionsSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void WalletGui::WalletAdapter::updateBlockStatusTextSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void WalletGui::WalletAdapter::updateBlockStatusTextWithDelaySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
