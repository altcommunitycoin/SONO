/****************************************************************************
** Meta object code from reading C++ file 'clientcontrolpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/clientcontrolpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientcontrolpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientControlPage_t {
    QByteArrayData data[8];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientControlPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientControlPage_t qt_meta_stringdata_ClientControlPage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ClientControlPage"
QT_MOC_LITERAL(1, 18, 21), // "on_chck4_upd8_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 21), // "on_dwngrd_opt_clicked"
QT_MOC_LITERAL(4, 63, 20), // "on_CS_submit_clicked"
QT_MOC_LITERAL(5, 84, 20), // "on_BR_submit_clicked"
QT_MOC_LITERAL(6, 105, 19), // "on_AU_apply_clicked"
QT_MOC_LITERAL(7, 125, 18) // "on_minCLIE_clicked"

    },
    "ClientControlPage\0on_chck4_upd8_clicked\0"
    "\0on_dwngrd_opt_clicked\0on_CS_submit_clicked\0"
    "on_BR_submit_clicked\0on_AU_apply_clicked\0"
    "on_minCLIE_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientControlPage[] = {

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
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClientControlPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientControlPage *_t = static_cast<ClientControlPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_chck4_upd8_clicked(); break;
        case 1: _t->on_dwngrd_opt_clicked(); break;
        case 2: _t->on_CS_submit_clicked(); break;
        case 3: _t->on_BR_submit_clicked(); break;
        case 4: _t->on_AU_apply_clicked(); break;
        case 5: _t->on_minCLIE_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ClientControlPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ClientControlPage.data,
      qt_meta_data_ClientControlPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientControlPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientControlPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientControlPage.stringdata0))
        return static_cast<void*>(const_cast< ClientControlPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int ClientControlPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
