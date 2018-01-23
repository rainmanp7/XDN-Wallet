/****************************************************************************
** Meta object code from reading C++ file 'MessagesModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/gui/MessagesModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessagesModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__MessagesModel_t {
    QByteArrayData data[23];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__MessagesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__MessagesModel_t qt_meta_stringdata_WalletGui__MessagesModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGui::MessagesModel"
QT_MOC_LITERAL(1, 25, 7), // "Columns"
QT_MOC_LITERAL(2, 33, 11), // "COLUMN_DATE"
QT_MOC_LITERAL(3, 45, 11), // "COLUMN_TYPE"
QT_MOC_LITERAL(4, 57, 13), // "COLUMN_HEIGHT"
QT_MOC_LITERAL(5, 71, 14), // "COLUMN_MESSAGE"
QT_MOC_LITERAL(6, 86, 11), // "COLUMN_HASH"
QT_MOC_LITERAL(7, 98, 13), // "COLUMN_AMOUNT"
QT_MOC_LITERAL(8, 112, 19), // "COLUMN_MESSAGE_SIZE"
QT_MOC_LITERAL(9, 132, 19), // "COLUMN_FULL_MESSAGE"
QT_MOC_LITERAL(10, 152, 19), // "COLUMN_HAS_REPLY_TO"
QT_MOC_LITERAL(11, 172, 5), // "Roles"
QT_MOC_LITERAL(12, 178, 9), // "ROLE_DATE"
QT_MOC_LITERAL(13, 188, 9), // "ROLE_TYPE"
QT_MOC_LITERAL(14, 198, 11), // "ROLE_HEIGHT"
QT_MOC_LITERAL(15, 210, 12), // "ROLE_MESSAGE"
QT_MOC_LITERAL(16, 223, 17), // "ROLE_FULL_MESSAGE"
QT_MOC_LITERAL(17, 241, 11), // "ROLE_COLUMN"
QT_MOC_LITERAL(18, 253, 8), // "ROLE_ROW"
QT_MOC_LITERAL(19, 262, 20), // "ROLE_HEADER_REPLY_TO"
QT_MOC_LITERAL(20, 283, 9), // "ROLE_HASH"
QT_MOC_LITERAL(21, 293, 11), // "ROLE_AMOUNT"
QT_MOC_LITERAL(22, 305, 17) // "ROLE_MESSAGE_SIZE"

    },
    "WalletGui::MessagesModel\0Columns\0"
    "COLUMN_DATE\0COLUMN_TYPE\0COLUMN_HEIGHT\0"
    "COLUMN_MESSAGE\0COLUMN_HASH\0COLUMN_AMOUNT\0"
    "COLUMN_MESSAGE_SIZE\0COLUMN_FULL_MESSAGE\0"
    "COLUMN_HAS_REPLY_TO\0Roles\0ROLE_DATE\0"
    "ROLE_TYPE\0ROLE_HEIGHT\0ROLE_MESSAGE\0"
    "ROLE_FULL_MESSAGE\0ROLE_COLUMN\0ROLE_ROW\0"
    "ROLE_HEADER_REPLY_TO\0ROLE_HASH\0"
    "ROLE_AMOUNT\0ROLE_MESSAGE_SIZE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__MessagesModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    9,   22,
      11, 0x0,   11,   40,

 // enum data: key, value
       2, uint(WalletGui::MessagesModel::COLUMN_DATE),
       3, uint(WalletGui::MessagesModel::COLUMN_TYPE),
       4, uint(WalletGui::MessagesModel::COLUMN_HEIGHT),
       5, uint(WalletGui::MessagesModel::COLUMN_MESSAGE),
       6, uint(WalletGui::MessagesModel::COLUMN_HASH),
       7, uint(WalletGui::MessagesModel::COLUMN_AMOUNT),
       8, uint(WalletGui::MessagesModel::COLUMN_MESSAGE_SIZE),
       9, uint(WalletGui::MessagesModel::COLUMN_FULL_MESSAGE),
      10, uint(WalletGui::MessagesModel::COLUMN_HAS_REPLY_TO),
      12, uint(WalletGui::MessagesModel::ROLE_DATE),
      13, uint(WalletGui::MessagesModel::ROLE_TYPE),
      14, uint(WalletGui::MessagesModel::ROLE_HEIGHT),
      15, uint(WalletGui::MessagesModel::ROLE_MESSAGE),
      16, uint(WalletGui::MessagesModel::ROLE_FULL_MESSAGE),
      17, uint(WalletGui::MessagesModel::ROLE_COLUMN),
      18, uint(WalletGui::MessagesModel::ROLE_ROW),
      19, uint(WalletGui::MessagesModel::ROLE_HEADER_REPLY_TO),
      20, uint(WalletGui::MessagesModel::ROLE_HASH),
      21, uint(WalletGui::MessagesModel::ROLE_AMOUNT),
      22, uint(WalletGui::MessagesModel::ROLE_MESSAGE_SIZE),

       0        // eod
};

void WalletGui::MessagesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WalletGui::MessagesModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_WalletGui__MessagesModel.data,
      qt_meta_data_WalletGui__MessagesModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::MessagesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::MessagesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__MessagesModel.stringdata0))
        return static_cast<void*>(const_cast< MessagesModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int WalletGui::MessagesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
