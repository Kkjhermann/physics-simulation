#include "simulation.h"

#include <QDebug>
#include <QtMath>
#include <cmath>

Simulation::Simulation(QObject *parent)
    : QObject(parent)
{
    connect(&m_timer, &QTimer::timeout,
            this, &Simulation::updatePhysics);
}

double Simulation::gravity() const { return m_gravity; }
double Simulation::initialSpeed() const { return m_initialSpeed; }
double Simulation::initialAngle() const { return m_initialAngle; }
double Simulation::mass() const { return m_mass; }
double Simulation::ratio() const { return m_ratio; }
double Simulation::speedMagnitude() const { return m_speedMagnitude; }
double Simulation::speedAngle() const { return m_speedAngle; }

double Simulation::x() const { return m_x; }
double Simulation::y() const { return m_y; }

double Simulation::right_wall() const { return m_right_wall; }
double Simulation::left_wall() const { return m_left_wall; }
double Simulation::ground() const { return m_ground; }
double Simulation::airFriction() const{return m_airFriction;}

void Simulation::setAirFriction(double value)
{
    if (m_airFriction == value)
        return;

    m_airFriction = value;
    emit airFrictionChanged();
}
void Simulation::setGround(double ground){
    if (m_ground == ground) return;
    m_ground = ground;
    emit groundChanged();
}
void Simulation::setLeft_wall(double left_wall){
    if (m_left_wall == left_wall) return;
    m_left_wall = left_wall;
    emit left_wallChanged();
}
void Simulation::setRight_wall(double right_wall){
    if (m_right_wall == right_wall) return;
    m_right_wall = right_wall;
    emit right_wallChanged();
}
void Simulation::setX(double x){
    if (m_x == x) return;
    m_x = x;
    emit positionChanged();
}
void Simulation::setY(double y){
    if (m_y == y) return;
    m_y = y;
    emit positionChanged();
}
void Simulation::setGravity(double g)
{
    if (m_gravity == g) return;
    m_gravity = g;
    emit gravityChanged();
}

void Simulation::setInitialSpeed(double v)
{
    if (m_initialSpeed == v) return;
    m_initialSpeed = v;
    m_speedMagnitude = v;

    emit initialSpeedChanged();
    emit speedMagnitudeChanged();
}

void Simulation::setInitialAngle(double a)
{
    if (m_initialAngle == a) return;
    m_initialAngle = a;
    m_speedAngle = a;

    emit initialAngleChanged();
    emit speedAngleChanged();
}

void Simulation::setMass(double m)
{
    if (m_mass == m) return;
    m_mass = m;
    emit massChanged();
}

void Simulation::setRatio(double r)
{
    if (m_ratio == r) return;
    m_ratio = r;
    emit ratioChanged();
}

void Simulation::setSpeedMagnitude(double v)
{
    if (m_speedMagnitude == v) return;
    m_speedMagnitude = v;
    emit speedMagnitudeChanged();
}

void Simulation::setSpeedAngle(double a)
{
    if (m_speedAngle == a) return;
    m_speedAngle = a;
    emit speedAngleChanged();
}

void Simulation::start()
{
    if (m_running)
        return;

    qDebug() << "Simulation START";

    double angleRad = qDegreesToRadians(m_initialAngle);

    m_vx = m_initialSpeed * std::cos(angleRad);
    m_vy = -m_initialSpeed * std::sin(angleRad);

    m_speedMagnitude = std::sqrt(m_vx * m_vx + m_vy * m_vy);
    m_speedAngle = m_initialAngle;

    emit speedMagnitudeChanged();
    emit speedAngleChanged();

    m_running = true;
    m_timer.start(16); // ~60 FPS
}

void Simulation::stop()
{
    if (!m_running)
        return;

    qDebug() << "Simulation STOP";

    m_timer.stop();
    m_running = false;

    // m_vx = 0.0;
    // m_vy = 0.0;
    // m_speedMagnitude = 0.0;

    // emit speedMagnitudeChanged();
    // emit speedAngleChanged();
}

void Simulation::updatePhysics()
{
    if (!m_running)
        return;

    double bounceFactor = m_restitution / m_mass;
    const double dt = 0.016;

    /*
        ==========================
        GRAVITY
        ==========================
    */
    double ax = 0.0;
    double ay = m_gravity;

    /*
        ==========================
        AIR FRICTION
        ==========================
    */
    ax += -(m_airFriction / m_mass) * m_vx;
    ay += -(m_airFriction / m_mass) * m_vy;

    /*
        ==========================
        UPDATE VELOCITY
        ==========================
    */
    m_vx += ax * dt;
    m_vy += ay * dt;

    /*
        ==========================
        UPDATE POSITION
        ==========================
    */
    m_x += m_vx * dt * 50.0;
    m_y += m_vy * dt * 50.0;

    /*
        ==========================
        GROUND COLLISION
        ==========================
    */
    if (m_y >= m_ground)
    {
        m_y = m_ground;
        m_vy *= -bounceFactor;

        // friction on ground
        m_vx *= 0.98;

        if (std::abs(m_vy) < 0.2)
            m_vy = 0.0;
    }

    /*
        ==========================
        WALL COLLISIONS
        ==========================
    */
    if (m_x <= m_left_wall)
    {
        m_x = m_left_wall;
        m_vx *= -bounceFactor;
    }

    if (m_x >= m_right_wall)
    {
        m_x = m_right_wall;
        m_vx *= -bounceFactor;
    }

    /*
        ==========================
        UPDATE DISPLAY VALUES
        ==========================
    */
    m_speedMagnitude = std::sqrt(m_vx * m_vx + m_vy * m_vy);

    if (m_speedMagnitude > 0.001)
        m_speedAngle = qRadiansToDegrees(std::atan2(-m_vy, m_vx));

    m_initialAngle = m_speedAngle;
    m_initialSpeed = m_speedMagnitude;

    emit initialSpeedChanged();
    emit initialAngleChanged();
    emit positionChanged();
    emit speedMagnitudeChanged();
    emit speedAngleChanged();
}
