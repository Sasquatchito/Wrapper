/****************************************************************************
** Meta object code from reading C++ file 'gift.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/Wrapper/gift.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gift.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gift_t {
    QByteArrayData data[11];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gift_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gift_t qt_meta_stringdata_Gift = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Gift"
QT_MOC_LITERAL(1, 5, 12), // "price_change"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "new_price"
QT_MOC_LITERAL(4, 29, 14), // "gift_available"
QT_MOC_LITERAL(5, 44, 12), // "availability"
QT_MOC_LITERAL(6, 57, 15), // "ratings_changed"
QT_MOC_LITERAL(7, 73, 11), // "new_ratings"
QT_MOC_LITERAL(8, 85, 13), // "image_changed"
QT_MOC_LITERAL(9, 99, 6), // "string"
QT_MOC_LITERAL(10, 106, 7) // "img_url"

    },
    "Gift\0price_change\0\0new_price\0"
    "gift_available\0availability\0ratings_changed\0"
    "new_ratings\0image_changed\0string\0"
    "img_url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gift[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       8,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void Gift::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Gift *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->price_change((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->gift_available((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->ratings_changed((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->image_changed((*reinterpret_cast< string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Gift::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gift::price_change)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Gift::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gift::gift_available)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Gift::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gift::ratings_changed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Gift::*)(string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Gift::image_changed)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gift::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Gift.data,
    qt_meta_data_Gift,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gift::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gift::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gift.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Gift::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Gift::price_change(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gift::gift_available(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gift::ratings_changed(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Gift::image_changed(string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
