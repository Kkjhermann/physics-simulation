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
    "gravity",
    "initialSpeed",
    "initialAngle",
    "mass",
    "ratio",
    "speedMagnitude",
    "speedAngle",
    "left_wall"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSimulationENDCLASS_t {
    uint offsetsAndSizes[92];
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
    char stringdata13[11];
    char stringdata14[2];
    char stringdata15[16];
    char stringdata16[2];
    char stringdata17[16];
    char stringdata18[2];
    char stringdata19[8];
    char stringdata20[2];
    char stringdata21[9];
    char stringdata22[2];
    char stringdata23[18];
    char stringdata24[14];
    char stringdata25[5];
    char stringdata26[2];
    char stringdata27[5];
    char stringdata28[2];
    char stringdata29[13];
    char stringdata30[10];
    char stringdata31[14];
    char stringdata32[11];
    char stringdata33[10];
    char stringdata34[7];
    char stringdata35[6];
    char stringdata36[5];
    char stringdata37[14];
    char stringdata38[8];
    char stringdata39[13];
    char stringdata40[13];
    char stringdata41[5];
    char stringdata42[6];
    char stringdata43[15];
    char stringdata44[11];
    char stringdata45[10];
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
        QT_MOC_LITERAL(197, 10),  // "setGravity"
        QT_MOC_LITERAL(208, 1),  // "g"
        QT_MOC_LITERAL(210, 15),  // "setInitialSpeed"
        QT_MOC_LITERAL(226, 1),  // "v"
        QT_MOC_LITERAL(228, 15),  // "setInitialAngle"
        QT_MOC_LITERAL(244, 1),  // "a"
        QT_MOC_LITERAL(246, 7),  // "setMass"
        QT_MOC_LITERAL(254, 1),  // "m"
        QT_MOC_LITERAL(256, 8),  // "setRatio"
        QT_MOC_LITERAL(265, 1),  // "r"
        QT_MOC_LITERAL(267, 17),  // "setSpeedMagnitude"
        QT_MOC_LITERAL(285, 13),  // "setSpeedAngle"
        QT_MOC_LITERAL(299, 4),  // "setX"
        QT_MOC_LITERAL(304, 1),  // "x"
        QT_MOC_LITERAL(306, 4),  // "setY"
        QT_MOC_LITERAL(311, 1),  // "y"
        QT_MOC_LITERAL(313, 12),  // "setLeft_wall"
        QT_MOC_LITERAL(326, 9),  // "left_Wall"
        QT_MOC_LITERAL(336, 13),  // "setRight_wall"
        QT_MOC_LITERAL(350, 10),  // "right_wall"
        QT_MOC_LITERAL(361, 9),  // "setGround"
        QT_MOC_LITERAL(371, 6),  // "ground"
        QT_MOC_LITERAL(378, 5),  // "start"
        QT_MOC_LITERAL(384, 4),  // "stop"
        QT_MOC_LITERAL(389, 13),  // "updatePhysics"
        QT_MOC_LITERAL(403, 7),  // "gravity"
        QT_MOC_LITERAL(411, 12),  // "initialSpeed"
        QT_MOC_LITERAL(424, 12),  // "initialAngle"
        QT_MOC_LITERAL(437, 4),  // "mass"
        QT_MOC_LITERAL(442, 5),  // "ratio"
        QT_MOC_LITERAL(448, 14),  // "speedMagnitude"
        QT_MOC_LITERAL(463, 10),  // "speedAngle"
        QT_MOC_LITERAL(474, 9)   // "left_wall"
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
    "gravity",
    "initialSpeed",
    "initialAngle",
    "mass",
    "ratio",
    "speedMagnitude",
    "speedAngle",
    "left_wall"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSimulationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
      12,  220, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x06,   13 /* Public */,
       3,    0,  171,    2, 0x06,   14 /* Public */,
       4,    0,  172,    2, 0x06,   15 /* Public */,
       5,    0,  173,    2, 0x06,   16 /* Public */,
       6,    0,  174,    2, 0x06,   17 /* Public */,
       7,    0,  175,    2, 0x06,   18 /* Public */,
       8,    0,  176,    2, 0x06,   19 /* Public */,
       9,    0,  177,    2, 0x06,   20 /* Public */,
      10,    0,  178,    2, 0x06,   21 /* Public */,
      11,    0,  179,    2, 0x06,   22 /* Public */,
      12,    0,  180,    2, 0x06,   23 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    1,  181,    2, 0x0a,   24 /* Public */,
      15,    1,  184,    2, 0x0a,   26 /* Public */,
      17,    1,  187,    2, 0x0a,   28 /* Public */,
      19,    1,  190,    2, 0x0a,   30 /* Public */,
      21,    1,  193,    2, 0x0a,   32 /* Public */,
      23,    1,  196,    2, 0x0a,   34 /* Public */,
      24,    1,  199,    2, 0x0a,   36 /* Public */,
      25,    1,  202,    2, 0x0a,   38 /* Public */,
      27,    1,  205,    2, 0x0a,   40 /* Public */,
      29,    1,  208,    2, 0x0a,   42 /* Public */,
      31,    1,  211,    2, 0x0a,   44 /* Public */,
      33,    1,  214,    2, 0x0a,   46 /* Public */,
      35,    0,  217,    2, 0x0a,   48 /* Public */,
      36,    0,  218,    2, 0x0a,   49 /* Public */,
      37,    0,  219,    2, 0x0a,   50 /* Public */,

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

 // slots: parameters
    QMetaType::Void, QMetaType::Double,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   20,
    QMetaType::Void, QMetaType::Double,   22,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::Double,   18,
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void, QMetaType::Double,   28,
    QMetaType::Void, QMetaType::Double,   30,
    QMetaType::Void, QMetaType::Double,   32,
    QMetaType::Void, QMetaType::Double,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      38, QMetaType::Double, 0x00015103, uint(0), 0,
      39, QMetaType::Double, 0x00015103, uint(1), 0,
      40, QMetaType::Double, 0x00015103, uint(2), 0,
      41, QMetaType::Double, 0x00015103, uint(3), 0,
      42, QMetaType::Double, 0x00015103, uint(4), 0,
      43, QMetaType::Double, 0x00015103, uint(5), 0,
      44, QMetaType::Double, 0x00015103, uint(6), 0,
      26, QMetaType::Double, 0x00015103, uint(7), 0,
      28, QMetaType::Double, 0x00015103, uint(7), 0,
      45, QMetaType::Double, 0x00015103, uint(8), 0,
      32, QMetaType::Double, 0x00015103, uint(9), 0,
      34, QMetaType::Double, 0x00015103, uint(10), 0,

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
        QtPrivate::TypeAndForceComplete<void, std::false_type>
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
        case 11: _t->setGravity((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 12: _t->setInitialSpeed((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 13: _t->setInitialAngle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 14: _t->setMass((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 15: _t->setRatio((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 16: _t->setSpeedMagnitude((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 17: _t->setSpeedAngle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 18: _t->setX((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 19: _t->setY((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 20: _t->setLeft_wall((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 21: _t->setRight_wall((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 22: _t->setGround((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 23: _t->start(); break;
        case 24: _t->stop(); break;
        case 25: _t->updatePhysics(); break;
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
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 26;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
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
QT_WARNING_POP
