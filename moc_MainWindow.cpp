/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[23];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 8), // "openFile"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "loadFile"
QT_MOC_LITERAL(4, 30, 9), // "closeFile"
QT_MOC_LITERAL(5, 40, 8), // "saveFile"
QT_MOC_LITERAL(6, 49, 9), // "addRecord"
QT_MOC_LITERAL(7, 59, 13), // "deleteRecords"
QT_MOC_LITERAL(8, 73, 11), // "findRecords"
QT_MOC_LITERAL(9, 85, 10), // "listfields"
QT_MOC_LITERAL(10, 96, 12), // "deleteFields"
QT_MOC_LITERAL(11, 109, 9), // "addFields"
QT_MOC_LITERAL(12, 119, 12), // "modifyFields"
QT_MOC_LITERAL(13, 132, 8), // "nextPage"
QT_MOC_LITERAL(14, 141, 12), // "previousPage"
QT_MOC_LITERAL(15, 154, 8), // "gotoPage"
QT_MOC_LITERAL(16, 163, 12), // "generateTest"
QT_MOC_LITERAL(17, 176, 9), // "joinFiles"
QT_MOC_LITERAL(18, 186, 13), // "saveIndexFile"
QT_MOC_LITERAL(19, 200, 9), // "exportCSV"
QT_MOC_LITERAL(20, 210, 9), // "exportXML"
QT_MOC_LITERAL(21, 220, 7), // "refresh"
QT_MOC_LITERAL(22, 228, 4) // "exit"

    },
    "MainWindow\0openFile\0\0loadFile\0closeFile\0"
    "saveFile\0addRecord\0deleteRecords\0"
    "findRecords\0listfields\0deleteFields\0"
    "addFields\0modifyFields\0nextPage\0"
    "previousPage\0gotoPage\0generateTest\0"
    "joinFiles\0saveIndexFile\0exportCSV\0"
    "exportXML\0refresh\0exit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x08 /* Private */,
       3,    0,  120,    2, 0x08 /* Private */,
       4,    0,  121,    2, 0x08 /* Private */,
       5,    0,  122,    2, 0x08 /* Private */,
       6,    0,  123,    2, 0x08 /* Private */,
       7,    0,  124,    2, 0x08 /* Private */,
       8,    0,  125,    2, 0x08 /* Private */,
       9,    0,  126,    2, 0x08 /* Private */,
      10,    0,  127,    2, 0x08 /* Private */,
      11,    0,  128,    2, 0x08 /* Private */,
      12,    0,  129,    2, 0x08 /* Private */,
      13,    0,  130,    2, 0x08 /* Private */,
      14,    0,  131,    2, 0x08 /* Private */,
      15,    0,  132,    2, 0x08 /* Private */,
      16,    0,  133,    2, 0x08 /* Private */,
      17,    0,  134,    2, 0x08 /* Private */,
      18,    0,  135,    2, 0x08 /* Private */,
      19,    0,  136,    2, 0x08 /* Private */,
      20,    0,  137,    2, 0x08 /* Private */,
      21,    0,  138,    2, 0x08 /* Private */,
      22,    0,  139,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openFile(); break;
        case 1: _t->loadFile(); break;
        case 2: _t->closeFile(); break;
        case 3: _t->saveFile(); break;
        case 4: _t->addRecord(); break;
        case 5: _t->deleteRecords(); break;
        case 6: _t->findRecords(); break;
        case 7: _t->listfields(); break;
        case 8: _t->deleteFields(); break;
        case 9: _t->addFields(); break;
        case 10: _t->modifyFields(); break;
        case 11: _t->nextPage(); break;
        case 12: _t->previousPage(); break;
        case 13: _t->gotoPage(); break;
        case 14: _t->generateTest(); break;
        case 15: _t->joinFiles(); break;
        case 16: _t->saveIndexFile(); break;
        case 17: _t->exportCSV(); break;
        case 18: _t->exportXML(); break;
        case 19: _t->refresh(); break;
        case 20: _t->exit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
