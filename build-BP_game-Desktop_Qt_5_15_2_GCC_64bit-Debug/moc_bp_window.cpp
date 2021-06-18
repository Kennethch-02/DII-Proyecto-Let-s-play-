/****************************************************************************
** Meta object code from reading C++ file 'bp_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../BP_game/bp_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bp_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BP_Window_t {
    QByteArrayData data[16];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BP_Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BP_Window_t qt_meta_stringdata_BP_Window = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BP_Window"
QT_MOC_LITERAL(1, 10, 6), // "update"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 15), // "on_Menu_clicked"
QT_MOC_LITERAL(4, 34, 20), // "on_BTN_Shot1_clicked"
QT_MOC_LITERAL(5, 55, 20), // "on_BTN_Shot2_clicked"
QT_MOC_LITERAL(6, 76, 22), // "on_Right1_stateChanged"
QT_MOC_LITERAL(7, 99, 4), // "arg1"
QT_MOC_LITERAL(8, 104, 19), // "on_Up1_stateChanged"
QT_MOC_LITERAL(9, 124, 21), // "on_Left1_stateChanged"
QT_MOC_LITERAL(10, 146, 21), // "on_Down1_stateChanged"
QT_MOC_LITERAL(11, 168, 19), // "on_Up2_stateChanged"
QT_MOC_LITERAL(12, 188, 22), // "on_Right2_stateChanged"
QT_MOC_LITERAL(13, 211, 21), // "on_Left2_stateChanged"
QT_MOC_LITERAL(14, 233, 21), // "on_Down2_stateChanged"
QT_MOC_LITERAL(15, 255, 6) // "Verify"

    },
    "BP_Window\0update\0\0on_Menu_clicked\0"
    "on_BTN_Shot1_clicked\0on_BTN_Shot2_clicked\0"
    "on_Right1_stateChanged\0arg1\0"
    "on_Up1_stateChanged\0on_Left1_stateChanged\0"
    "on_Down1_stateChanged\0on_Up2_stateChanged\0"
    "on_Right2_stateChanged\0on_Left2_stateChanged\0"
    "on_Down2_stateChanged\0Verify"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BP_Window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    1,   83,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      11,    1,   95,    2, 0x08 /* Private */,
      12,    1,   98,    2, 0x08 /* Private */,
      13,    1,  101,    2, 0x08 /* Private */,
      14,    1,  104,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void BP_Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BP_Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->on_Menu_clicked(); break;
        case 2: _t->on_BTN_Shot1_clicked(); break;
        case 3: _t->on_BTN_Shot2_clicked(); break;
        case 4: _t->on_Right1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_Up1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_Left1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_Down1_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_Up2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_Right2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_Left2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_Down2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->Verify(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BP_Window::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BP_Window::update)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BP_Window::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_BP_Window.data,
    qt_meta_data_BP_Window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BP_Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BP_Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BP_Window.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BP_Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void BP_Window::update()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
