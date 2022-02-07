/****************************************************************************
** Meta object code from reading C++ file 'forma.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Mi_Paint-main/forma.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'forma.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Forma_t {
    QByteArrayData data[11];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Forma_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Forma_t qt_meta_stringdata_Forma = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Forma"
QT_MOC_LITERAL(1, 6, 24), // "on_actionColor_triggered"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "on_actionLibre_triggered"
QT_MOC_LITERAL(4, 57, 33), // "on_actionCircunferencia_trigg..."
QT_MOC_LITERAL(5, 91, 26), // "on_actionGuardar_triggered"
QT_MOC_LITERAL(6, 118, 25), // "on_actionLineas_triggered"
QT_MOC_LITERAL(7, 144, 24), // "on_actionAncho_triggered"
QT_MOC_LITERAL(8, 169, 30), // "on_actionRectangulos_triggered"
QT_MOC_LITERAL(9, 200, 24), // "on_actionSalir_triggered"
QT_MOC_LITERAL(10, 225, 24) // "on_actionNuevo_triggered"

    },
    "Forma\0on_actionColor_triggered\0\0"
    "on_actionLibre_triggered\0"
    "on_actionCircunferencia_triggered\0"
    "on_actionGuardar_triggered\0"
    "on_actionLineas_triggered\0"
    "on_actionAncho_triggered\0"
    "on_actionRectangulos_triggered\0"
    "on_actionSalir_triggered\0"
    "on_actionNuevo_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Forma[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void Forma::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Forma *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionColor_triggered(); break;
        case 1: _t->on_actionLibre_triggered(); break;
        case 2: _t->on_actionCircunferencia_triggered(); break;
        case 3: _t->on_actionGuardar_triggered(); break;
        case 4: _t->on_actionLineas_triggered(); break;
        case 5: _t->on_actionAncho_triggered(); break;
        case 6: _t->on_actionRectangulos_triggered(); break;
        case 7: _t->on_actionSalir_triggered(); break;
        case 8: _t->on_actionNuevo_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Forma::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Forma.data,
    qt_meta_data_Forma,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Forma::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Forma::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Forma.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Forma::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
