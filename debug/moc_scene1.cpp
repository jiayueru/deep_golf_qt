/****************************************************************************
** Meta object code from reading C++ file 'scene1.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../scene1.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scene1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSScene1ENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSScene1ENDCLASS = QtMocHelpers::stringData(
    "Scene1",
    "scene1_finished",
    "",
    "goToScene2",
    "showpaper",
    "hidepaper"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSScene1ENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[7];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[10];
    char stringdata5[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSScene1ENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSScene1ENDCLASS_t qt_meta_stringdata_CLASSScene1ENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Scene1"
        QT_MOC_LITERAL(7, 15),  // "scene1_finished"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 10),  // "goToScene2"
        QT_MOC_LITERAL(35, 9),  // "showpaper"
        QT_MOC_LITERAL(45, 9)   // "hidepaper"
    },
    "Scene1",
    "scene1_finished",
    "",
    "goToScene2",
    "showpaper",
    "hidepaper"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSScene1ENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    0,   39,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   40,    2, 0x09,    3 /* Protected */,
       5,    0,   41,    2, 0x09,    4 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Scene1::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSScene1ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSScene1ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSScene1ENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Scene1, std::true_type>,
        // method 'scene1_finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'goToScene2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showpaper'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hidepaper'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Scene1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Scene1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scene1_finished(); break;
        case 1: _t->goToScene2(); break;
        case 2: _t->showpaper(); break;
        case 3: _t->hidepaper(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Scene1::*)();
            if (_t _q_method = &Scene1::scene1_finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Scene1::*)();
            if (_t _q_method = &Scene1::goToScene2; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Scene1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSScene1ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Scene1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Scene1::scene1_finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Scene1::goToScene2()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
