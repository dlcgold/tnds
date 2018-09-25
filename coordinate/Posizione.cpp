#include "Posizione.h"
#include <cmath>

Posizione::Posizione() {
    m_x=0;
    m_y=0;
    m_z=0;
}

Posizione::Posizione(double x, double y, double z) {
    m_x=x;
    m_y=y;
    m_z=z;
}

Posizione::~Posizione() {
//
}

double Posizione::X() const {
    return m_x;
}

double Posizione::Y() const {
    return m_y;
}

double Posizione::Z() const {
    return m_z;
}

double Posizione::R() const {
    return sqrt(m_x*m_x+m_y*m_y+m_z*m_z);
}

double Posizione::Phi() const {
    return atan2(m_y,m_x);
}

double Posizione::Theta() const {
    return acos(m_z/R());
}

double Posizione::Rho() const {
    return sqrt(m_x*m_x+m_y*m_y);
}

double Posizione::Distanza(const Posizione & b) const {
    return sqrt(pow(X()-b.X(),2)+pow(Y()-b.Y(),2)+pow(Z()-b.Z(),2 ) );
}