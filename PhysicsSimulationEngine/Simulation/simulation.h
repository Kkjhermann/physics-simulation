#ifndef SIMULATION_H
#define SIMULATION_H

#pragma once

#include <QObject>
#include <QTimer>

class Simulation : public QObject
{
    Q_OBJECT

    Q_PROPERTY(double gravity READ gravity WRITE setGravity NOTIFY gravityChanged)
    Q_PROPERTY(double initialSpeed READ initialSpeed WRITE setInitialSpeed NOTIFY initialSpeedChanged)
    Q_PROPERTY(double initialAngle READ initialAngle WRITE setInitialAngle NOTIFY initialAngleChanged)
    Q_PROPERTY(double mass READ mass WRITE setMass NOTIFY massChanged)
    Q_PROPERTY(double ratio READ ratio WRITE setRatio NOTIFY ratioChanged)

    Q_PROPERTY(double speedMagnitude READ speedMagnitude WRITE setSpeedMagnitude NOTIFY speedMagnitudeChanged)
    Q_PROPERTY(double speedAngle READ speedAngle WRITE setSpeedAngle NOTIFY speedAngleChanged)

    Q_PROPERTY(double x READ x WRITE setX NOTIFY positionChanged)
    Q_PROPERTY(double y READ y WRITE setY NOTIFY positionChanged)

    Q_PROPERTY(double left_wall READ left_wall WRITE setLeft_wall NOTIFY left_wallChanged)
    Q_PROPERTY(double right_wall READ right_wall WRITE setRight_wall NOTIFY right_wallChanged)
    Q_PROPERTY(double ground READ ground WRITE setGround NOTIFY groundChanged)

    Q_PROPERTY(double airFriction READ airFriction WRITE setAirFriction NOTIFY airFrictionChanged)

public:
    explicit Simulation(QObject *parent = nullptr);

    double gravity() const;
    double initialSpeed() const;
    double initialAngle() const;
    double mass() const;
    double ratio() const;
    double speedMagnitude() const;
    double speedAngle() const;

    double x() const;
    double y() const;

    double left_wall() const;
    double right_wall() const;
    double ground() const;

    double airFriction() const;

public slots:
    void setGravity(double g);
    void setInitialSpeed(double v);
    void setInitialAngle(double a);
    void setMass(double m);
    void setRatio(double r);
    void setSpeedMagnitude(double v);
    void setSpeedAngle(double a);
    void setX(double x);
    void setY(double y);
    void setLeft_wall(double left_Wall);
    void setRight_wall(double right_wall);
    void setGround(double ground);

    void start();
    void stop();
    void updatePhysics();
    void setAirFriction(double value);

signals:
    void gravityChanged();
    void initialSpeedChanged();
    void initialAngleChanged();
    void massChanged();
    void ratioChanged();
    void speedMagnitudeChanged();
    void speedAngleChanged();
    void positionChanged();
    void left_wallChanged();
    void right_wallChanged();
    void groundChanged();
    void airFrictionChanged();

private:
    double m_gravity = 10.0;
    double m_initialSpeed = 0.0;
    double m_initialAngle = -90.0;
    double m_mass = 1.0;
    double m_ratio = 0.1;

    double m_speedMagnitude = 0.0;
    double m_speedAngle = -90.0;

    double m_x = 300.0;
    double m_y = 300.0;

    double m_vx = 0.0;
    double m_vy = 0.0;

    double m_radius = 20.0;
    double m_restitution = 0.8;

    bool m_running = false;

    double m_ground = 500;
    double m_right_wall = 500;
    double m_left_wall = 20;

    double m_airFriction = 0.05;

    QTimer m_timer;
};

#endif // SIMULATION_H
