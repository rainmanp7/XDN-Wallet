/****************************************************************************
** Meta object code from reading C++ file 'DepositModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/gui/DepositModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DepositModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__DepositModel_t {
    QByteArrayData data[30];
    char stringdata0[538];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__DepositModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__DepositModel_t qt_meta_stringdata_WalletGui__DepositModel = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WalletGui::DepositModel"
QT_MOC_LITERAL(1, 24, 7), // "Columns"
QT_MOC_LITERAL(2, 32, 12), // "COLUMN_STATE"
QT_MOC_LITERAL(3, 45, 13), // "COLUMN_AMOUNT"
QT_MOC_LITERAL(4, 59, 15), // "COLUMN_INTEREST"
QT_MOC_LITERAL(5, 75, 10), // "COLUMN_SUM"
QT_MOC_LITERAL(6, 86, 16), // "COLUMN_YEAR_RATE"
QT_MOC_LITERAL(7, 103, 11), // "COLUMN_TERM"
QT_MOC_LITERAL(8, 115, 20), // "COLUMN_UNLOCK_HEIGHT"
QT_MOC_LITERAL(9, 136, 18), // "COLUMN_UNLOCK_TIME"
QT_MOC_LITERAL(10, 155, 33), // "COLUMN_CREATRING_TRANSACTION_..."
QT_MOC_LITERAL(11, 189, 22), // "COLUMN_CREATING_HEIGHT"
QT_MOC_LITERAL(12, 212, 20), // "COLUMN_CREATING_TIME"
QT_MOC_LITERAL(13, 233, 32), // "COLUMN_SPENDING_TRANSACTION_HASH"
QT_MOC_LITERAL(14, 266, 22), // "COLUMN_SPENDING_HEIGHT"
QT_MOC_LITERAL(15, 289, 20), // "COLUMN_SPENDING_TIME"
QT_MOC_LITERAL(16, 310, 5), // "Roles"
QT_MOC_LITERAL(17, 316, 17), // "ROLE_DEPOSIT_TERM"
QT_MOC_LITERAL(18, 334, 19), // "ROLE_DEPOSIT_AMOUNT"
QT_MOC_LITERAL(19, 354, 21), // "ROLE_DEPOSIT_INTEREST"
QT_MOC_LITERAL(20, 376, 10), // "ROLE_STATE"
QT_MOC_LITERAL(21, 387, 28), // "ROLE_CREATING_TRANSACTION_ID"
QT_MOC_LITERAL(22, 416, 28), // "ROLE_SPENDING_TRANSACTION_ID"
QT_MOC_LITERAL(23, 445, 18), // "ROLE_UNLOCK_HEIGHT"
QT_MOC_LITERAL(24, 464, 8), // "ROLE_ROW"
QT_MOC_LITERAL(25, 473, 11), // "ROLE_COLUMN"
QT_MOC_LITERAL(26, 485, 12), // "DepositState"
QT_MOC_LITERAL(27, 498, 12), // "STATE_LOCKED"
QT_MOC_LITERAL(28, 511, 14), // "STATE_UNLOCKED"
QT_MOC_LITERAL(29, 526, 11) // "STATE_SPENT"

    },
    "WalletGui::DepositModel\0Columns\0"
    "COLUMN_STATE\0COLUMN_AMOUNT\0COLUMN_INTEREST\0"
    "COLUMN_SUM\0COLUMN_YEAR_RATE\0COLUMN_TERM\0"
    "COLUMN_UNLOCK_HEIGHT\0COLUMN_UNLOCK_TIME\0"
    "COLUMN_CREATRING_TRANSACTION_HASH\0"
    "COLUMN_CREATING_HEIGHT\0COLUMN_CREATING_TIME\0"
    "COLUMN_SPENDING_TRANSACTION_HASH\0"
    "COLUMN_SPENDING_HEIGHT\0COLUMN_SPENDING_TIME\0"
    "Roles\0ROLE_DEPOSIT_TERM\0ROLE_DEPOSIT_AMOUNT\0"
    "ROLE_DEPOSIT_INTEREST\0ROLE_STATE\0"
    "ROLE_CREATING_TRANSACTION_ID\0"
    "ROLE_SPENDING_TRANSACTION_ID\0"
    "ROLE_UNLOCK_HEIGHT\0ROLE_ROW\0ROLE_COLUMN\0"
    "DepositState\0STATE_LOCKED\0STATE_UNLOCKED\0"
    "STATE_SPENT"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__DepositModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,   14,   26,
      16, 0x0,    9,   54,
      26, 0x0,    3,   72,

 // enum data: key, value
       2, uint(WalletGui::DepositModel::COLUMN_STATE),
       3, uint(WalletGui::DepositModel::COLUMN_AMOUNT),
       4, uint(WalletGui::DepositModel::COLUMN_INTEREST),
       5, uint(WalletGui::DepositModel::COLUMN_SUM),
       6, uint(WalletGui::DepositModel::COLUMN_YEAR_RATE),
       7, uint(WalletGui::DepositModel::COLUMN_TERM),
       8, uint(WalletGui::DepositModel::COLUMN_UNLOCK_HEIGHT),
       9, uint(WalletGui::DepositModel::COLUMN_UNLOCK_TIME),
      10, uint(WalletGui::DepositModel::COLUMN_CREATRING_TRANSACTION_HASH),
      11, uint(WalletGui::DepositModel::COLUMN_CREATING_HEIGHT),
      12, uint(WalletGui::DepositModel::COLUMN_CREATING_TIME),
      13, uint(WalletGui::DepositModel::COLUMN_SPENDING_TRANSACTION_HASH),
      14, uint(WalletGui::DepositModel::COLUMN_SPENDING_HEIGHT),
      15, uint(WalletGui::DepositModel::COLUMN_SPENDING_TIME),
      17, uint(WalletGui::DepositModel::ROLE_DEPOSIT_TERM),
      18, uint(WalletGui::DepositModel::ROLE_DEPOSIT_AMOUNT),
      19, uint(WalletGui::DepositModel::ROLE_DEPOSIT_INTEREST),
      20, uint(WalletGui::DepositModel::ROLE_STATE),
      21, uint(WalletGui::DepositModel::ROLE_CREATING_TRANSACTION_ID),
      22, uint(WalletGui::DepositModel::ROLE_SPENDING_TRANSACTION_ID),
      23, uint(WalletGui::DepositModel::ROLE_UNLOCK_HEIGHT),
      24, uint(WalletGui::DepositModel::ROLE_ROW),
      25, uint(WalletGui::DepositModel::ROLE_COLUMN),
      27, uint(WalletGui::DepositModel::STATE_LOCKED),
      28, uint(WalletGui::DepositModel::STATE_UNLOCKED),
      29, uint(WalletGui::DepositModel::STATE_SPENT),

       0        // eod
};

void WalletGui::DepositModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WalletGui::DepositModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGui__DepositModel.data,
      qt_meta_data_WalletGui__DepositModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::DepositModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::DepositModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__DepositModel.stringdata0))
        return static_cast<void*>(const_cast< DepositModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGui::DepositModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
