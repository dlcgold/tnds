//
// Created by dlcgold on 19/03/19.
//

#include "posizione.h"
#include <cmath>

posizione::posizione() {
    m_x = 0;
    m_y = 0;
    m_z = 0;
}

posizione::posizione(double x, double y, double z) {
    m_x = x;
    m_y = y;
    m_z = z;
}

posizione::~posizione() {}

double posizione::getX() const {
    return m_x;
}
double posizione::getY() const {
    return m_y;
}
double posizione::getZ() const {
    return m_z;
}

double posizione::getR() const {
    return sqrt(pow(m_x,2) + pow(m_y, 2) + pow(m_z, 2));
}
double posizione::getPhi() const {
    return atan2(m_y, m_x);
}
double posizione::getTheta() const {
    return acos(m_z / getR());
}
double posizione::getRho() const {
    return sqrt(pow(m_x, 2) + pow(m_y, 2));
}

double posizione::Distanza(const posizione & b) const {
    return sqrt(pow(getX() - b.getX(),2) +
                pow(getY() - b.getY(),2) +
                pow(getZ() - b.getZ(),2));
}