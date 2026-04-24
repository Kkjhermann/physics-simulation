/****************************************************************************
** Meta object code from reading C++ file 'simulation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Simulation/simulation.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSSimulationENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSimulationENDCLASS = QtMocHelpers::stringData(
    "Simulation",
    "gravityChanged",
    "",
    "initialSpeedChanged",
    "initialAngleChanged",
    "massChanged",
    "ratioChanged",
    "speedMagnitudeChanged",
    "speedAngleChanged",
    "positionChanged",
    "left_wallChanged",
    "right_wallChanged",
    "groundChanged",
    "airFrictionChanged",
    "setGravity",
    "g",
    "setInitialSpeed",
    "v",
    "setInitialAngle",
    "a",
    "setMass",
    "m",
    "setRatio",
    "r",
    "setSpeedMagnitude",
    "setSpeedAngle",
    "setX",
    "x",
    "setY",
    "y",
    "setLeft_wall",
    "left_Wall",
    "setRight_wall",
    "right_wall",
    "setGround",
    "ground",
    "start",
    "stop",
    "updatePhysics",
    "setAirFriction",
    "value",
    "gravity",
    "initialSpeed",
    "initialAngle",
    "mass",
    "ratio",
    "speedMagnitude",
    "speedAngle",
    "left_wall",
    "airFriction"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSimulationENDCLASS_t {
    uint offsetsAndSizes[100];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[20];
    char stringdata5[12];
    char stringdata6[13];
    char stringdata7[22];
    char stringdata8[18];
    char stringdata9[16];
    char stringdata10[17];
    char stringdata11[18];
    char stringdata12[14];
    char stringdata13[19];
    char stringdata14[11];
    char stringdata15[2];
    char stringdata16[16];
    char stringdata17[2];
    char stringdata18[16];
    char stringdata19[2];
    char stringdata20[8];
    char stringdata21[2];
    char stringdata22[9];
    char stringdata23[2];
    char stringdata24[18];
    char stringdata25[14];
    char stringdata26[5];
    char stringdata27[2];
    char stringdata28[5];
    char stringdata29[2];
    char stringdata30[13];
    char stringdata31[10];
    char stringdata32[14];
    char stringdata33[11];
    char stringdata34[10];
    char stringdata35[7];
    char stringdata36[6];
    char stringdata37[5];
    char stringdata38[14];
    char stringdata39[15];
    char stringdata40[6];
    char stringdata41[8];
    char stringdata42[13];
    char stringdata43[13];
    char stringdata44[5];
    char stringdata45[6];
    char stringdata46[15];
    char stringdata47[11];
    char stringdata48[10];
    char stringdata49[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSimulationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSimulationENDCLASS_t qt_meta_stringdata_CLASSSimulationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "Simulation"
        QT_MOC_LITERAL(11, 14),  // "gravityChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 19),  // "initialSpeedChanged"
        QT_MOC_LITERAL(47, 19),  // "initialAngleChanged"
        QT_MOC_LITERAL(67, 11),  // "massChanged"
        QT_MOC_LITERAL(79, 12),  // "ratioChanged"
        QT_MOC_LITERAL(92, 21),  // "speedMagnitudeChanged"
        QT_MOC_LITERAL(114, 17),  // "speedAngleChanged"
        QT_MOC_LITERAL(132, 15),  // "positionChanged"
        QT_MOC_LITERAL(148, 16),  // "left_wallChanged"
        QT_MOC_LITERAL(165, 17),  // "right_wallChanged"
        QT_MOC_LITERAL(183, 13),  // "groundChanged"
        QT_MOC_LITERAL(197, 18),  // "airFrictionChanged"
        QT_MOC_LITERAL(216, 10),  // "setGravity"
        QT_MOC_LITERAL(227, 1),  // "g"
        QT_MOC_LITERAL(229, 15),  // "setInitialSpeed"
        QT_MOC_LITERAL(245, 1),  // "v"
        QT_MOC_LITERAL(247, 15),  // "setInitialAngle"
        QT_MOC_LITERAL(263, 1),  // "a"
        QT_MOC_LITERAL(265, 7),  // "setMass"
        QT_MOC_LITERAL(273, 1),  // "m"
        QT_MOC_LITERAL(275, 8),  // "setRatio"
        QT_MOC_LITERAL(284, 1),  // "r"
        QT_MOC_LITERAL(286, 17),  // "setSpeedMagnitude"
        QT_MOC_LITERAL(304, 13),  // "setSpeedAngle"
        QT_MOC_LITERAL(318, 4),  // "setX"
        QT_MOC_LITERAL(323, 1),  // "x"
        QT_MOC_LITERAL(325, 4),  // "setY"
        QT_MOC_LITERAL(330, 1),  // "y"
        QT_MOC_LITERAL(332, 12),  // "setLeft_wall"
        QT_MOC_LITERAL(345, 9),  // "left_Wall"
        QT_MOC_LITERAL(355, 13),  // "setRight_wall"
        QT_MOC_LITERAL(369, 10),  // "right_wall"
        QT_MOC_LITERAL(380, 9),  // "setGround"
        QT_MOC_LITERAL(390, 6),  // "ground"
        QT_MOC_LITERAL(397, 5),  // "start"
        QT_MOC_LITERAL(403, 4),  // "stop"
        QT_MOC_LITERAL(408, 13),  // "updatePhysics"
        QT_MOC_LITERAL(422, 14),  // "setAirFriction"
        QT_MOC_LITERAL(437, 5),  // "value"
        QT_MOC_LITERAL(443, 7),  // "gravity"
        QT_MOC_LITERAL(451, 12),  // "initialSpeed"
        QT_MOC_LITERAL(464, 12),  // "initialAngle"
        QT_MOC_LITERAL(477, 4),  // "mass"
        QT_MOC_LITERAL(482, 5),  // "ratio"
        QT_MOC_LITERAL(488, 14),  // "speedMagnitude"
        QT_MOC_LITERAL(503, 10),  // "speedAngle"
        QT_MOC_LITERAL(514, 9),  // "left_wall"
        QT_MOC_LITERAL(524, 11)   // "airFriction"
    },
    "Simulation",
    "gravityChanged",
    "",
    "initialSpeedChanged",
    "initialAngleChanged",
    "massChanged",
    "ratioChanged",
    "speedMagnitudeChanged",
    "speedAngleChanged",
    "positionChanged",
    "left_wallChanged",
    "right_wallChanged",
    "groundChanged",
    "airFrictionChanged",
    "setGravity",
    "g",
    "setInitialSpeed",
    "v",
    "setInitialAngle",
    "a",
    "setMass",
    "m",
    "setRatio",
    "r",
    "setSpeedMagnitude",
    "setSpeedAngle",
    "setX",
    "x",
    "setY",
    "y",
    "setLeft_wall",
    "left_Wall",
    "setRight_wall",
    "right_wall",
    "setGround",
    "ground",
    "start",
    "stop",
    "updatePhysics",
    "setAirFriction",
    "value",
    "gravity",
    "initialSpeed",
    "initialAngle",
    "mass",
    "ratio",
    "speedMagnitude",
    "speedAngle",
    "left_wall",
    "airFriction"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSimulationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
      13,  236, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x06,   14 /* Public */,
       3,    0,  183,    2, 0x06,   15 /* Public */,
       4,    0,  184,    2, 0x06,   16 /* Public */,
       5,    0,  185,    2, 0x06,   17 /* Public */,
       6,    0,  186,    2, 0x06,   18 /* Public */,
       7,    0,  187,    2, 0x06,   19 /* Public */,
       8,    0,  188,    2, 0x06,   20 /* Public */,
       9,    0,  189,    2, 0x06,   21 /* Public */,
      10,    0,  190,    2, 0x06,   22 /* Public */,
      11,    0,  191,    2, 0x06,   23 /* Public */,
      12,    0,  192,    2, 0x06,   24 /* Public */,
      13,    0,  193,    2, 0x06,   25 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,  194,    2, 0x0a,   26 /* Public */,
      16,    1,  197,    2, 0x0a,   28 /* Public */,
      18,    1,  200,    2, 0x0a,   30 /* Public */,
      20,    1,  203,    2, 0x0a,   32 /* Public */,
      22,    1,  206,    2, 0x0a,   34 /* Public */,
      24,    1,  209,    2, 0x0a,   36 /* Public */,
      25,    1,  212,    2, 0x0a,   38 /* Public */,
      26,    1,  215,    2, 0x0a,   40 /* Public */,
      28,    1,  218,    2, 0x0a,   42 /* Public */,
      30,    1,  221,    2, 0x0a,   44 /* Public */,
      32,    1,  224,    2, 0x0a,   46 /* Public */,
      34,    1,  227,    2, 0x0a,   48 /* Public */,
      36,    0,  230,    2, 0x0a,   50 /* Public */,
      37,    0,  231,    2, 0x0a,   51 /* Public */,
      38,    0,  232,    2, 0x0a,   52 /* Public */,
      39,    1,  233,    2, 0x0a,   53 /* Public */,

 // signals: parameters
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

 // slots: parameters
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void, QMetaType::Double,   21,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Double,   19,
    QMetaType::Void, QMetaType::Double,   27,
    QMetaType::Void, QMetaType::Double,   29,
    QMetaType::Void, QMetaType::Double,   31,
    QMetaType::Void, QMetaType::Double,   33,
    QMetaType::Void, QMetaType::Double,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   40,

 // properties: name, type, flags
      41, QMetaType::Double, 0x00015103, uint(0), 0,
      42, QMetaType::Double, 0x00015103, uint(1), 0,
      43, QMetaType::Double, 0x00015103, uint(2), 0,
      44, QMetaType::Double, 0x00015103, uint(3), 0,
      45, QMetaType::Double, 0x00015103, uint(4), 0,
      46, QMetaType::Double, 0x00015103, uint(5), 0,
      47, QMetaType::Double, 0x00015103, uint(6), 0,
      27, QMetaType::Double, 0x00015103, uint(7), 0,
      29, QMetaType::Double, 0x00015103, uint(7), 0,
      48, QMetaType::Double, 0x00015103, uint(8), 0,
      33, QMetaType::Double, 0x00015103, uint(9), 0,
      35, QMetaType::Double, 0x00015103, uint(10), 0,
      49, QMetaType::Double, 0x00015103, uint(11), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Simulation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSSimulationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSimulationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSimulationENDCLASS_t,
        // property 'gravity'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'initialSpeed'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'initialAngle'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'mass'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'ratio'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'speedMagnitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'speedAngle'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'x'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'y'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'left_wall'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'right_wall'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'ground'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'airFriction'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Simulation, std::true_type>,
        // method 'gravityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initialSpeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initialAngleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'massChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ratioChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'speedMagnitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'speedAngleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'left_wallChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'right_wallChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'groundChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'airFrictionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setGravity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setInitialSpeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setInitialAngle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setMass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setRatio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setSpeedMagnitude'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setSpeedAngle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setLeft_wall'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setRight_wall'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'setGround'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updatePhysics'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAirFriction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void Simulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Simulation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gravityChanged(); break;
        case 1: _t->initialSpeedChanged(); break;
        case 2: _t->initialAngleChanged(); break;
        case 3: _t->massChanged(); break;
        case 4: _t->ratioChanged(); break;
        case 5: _t->speedMagnitudeChanged(); break;
        case 6: _t->speedAngleChanged(); break;
        case 7: _t->positionChanged(); break;
        case 8: _t->left_wallChanged(); break;
        case 9: _t->right_wallChanged(); break;
        case 10: _t->groundChanged(); break;
        case 11: _t->airFrictionChanged(); break;
        case 12: _t->setGravity((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->setInitialSpeed((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->setInitialAngle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->setMass((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 16: _t->setRatio((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 17: _t->setSpeedMagnitude((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 18: _t->setSpeedAngle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 19: _t->setX((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 20: _t->setY((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 21: _t->setLeft_wall((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 22: _t->setRight_wall((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 23: _t->setGround((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 24: _t->start(); break;
        case 25: _t->stop(); break;
        case 26: _t->updatePhysics(); break;
        case 27: _t->setAirFriction((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::gravityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::initialSpeedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::initialAngleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::massChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::ratioChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::speedMagnitudeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::speedAngleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::positionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::left_wallChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::right_wallChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::groundChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Simulation::*)();
            if (_t _q_method = &Simulation::airFrictionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Simulation *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->gravity(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->initialSpeed(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->initialAngle(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->mass(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->ratio(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->speedMagnitude(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->speedAngle(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->x(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->y(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->left_wall(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->right_wall(); break;
        case 11: *reinterpret_cast< double*>(_v) = _t->ground(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->airFriction(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Simulation *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGravity(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setInitialSpeed(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setInitialAngle(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setMass(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setRatio(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setSpeedMagnitude(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setSpeedAngle(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setX(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setY(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setLeft_wall(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setRight_wall(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setGround(*reinterpret_cast< double*>(_v)); break;
        case 12: _t->setAirFriction(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Simulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Simulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSimulationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Simulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Simulation::gravityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Simulation::initialSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Simulation::initialAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Simulation::massChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Simulation::ratioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Simulation::speedMagnitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Simulation::speedAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Simulation::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Simulation::left_wallChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Simulation::right_wallChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Simulation::groundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Simulation::airFrictionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
