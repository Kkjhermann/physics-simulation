#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "Simulation/simulation.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    Simulation simulation;
    engine.rootContext()->setContextProperty("simulation", &simulation);

    engine.loadFromModule("PhysicsSimulationEngine", "Main");

    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
