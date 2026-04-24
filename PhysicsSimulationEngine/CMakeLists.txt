cmake_minimum_required(VERSION 3.16)

project(PhysicsSimulationEngine VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appPhysicsSimulationEngine
    main.cpp
)

qt_add_qml_module(appPhysicsSimulationEngine
    URI PhysicsSimulationEngine
    VERSION 1.0
    QML_FILES
        Main.qml
        RESOURCES ressource.qrc
        QML_FILES UI/TopMenu.qml
        QML_FILES UI/MechanicsView.qml
        QML_FILES UI/WaveView.qml
        QML_FILES UI/ThermoView.qml
        QML_FILES UI/Cinematic_view.qml
        SOURCES Simulation/simulation.h Simulation/simulation.cpp
        QML_FILES UI/VectorArrow.qml
        QML_FILES UI/PhysicsObject.qml
        QML_FILES UI/InclinedPlane.qml
        QML_FILES UI/Spring.qml
        QML_FILES UI/Rope.qml
        QML_FILES UI/Pulley.qml
        SOURCES Simulation/simulationmecanic.h Simulation/simulationmecanic.cpp
        QML_FILES
        QML_FILES UI/PendulumTestView.qml
        QML_FILES UI/SpringTestView.qml
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appPhysicsSimulationEngine PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appPhysicsSimulationEngine
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appPhysicsSimulationEngine
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appPhysicsSimulationEngine
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
