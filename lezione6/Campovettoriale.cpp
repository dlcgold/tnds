//
// Created by dlcgold on 20/03/19.
//

#include "Campovettoriale.h"
#include "posizione.h"
#include <cmath>

Campovettoriale::Campovettoriale(const posizione &pos) : posizione(pos), vettore(0, 0, 0) {

}

Campovettoriale::~Campovettoriale(){

}

Campovettoriale::Campovettoriale(const posizione &pos, vettore &vect) : posizione(pos), vettore(vect){

}

Campovettoriale::Campovettoriale(double x, double y, double z, double Fx, double Fy, double Fz)
    : posizione(x, y, z), vettore(Fx, Fy, Fz){

}

void Campovettoriale::somma(Campovettoriale b) {
    SetFx(m_Fx + b.GetFx());
    SetFy(m_Fx + b.GetFy());
    SetFz(m_Fx + b.GetFz());
}

double Campovettoriale::getM_Fx() const {
    return m_Fx;
}

double Campovettoriale::getM_Fy() const {
    return m_Fy;
}

double Campovettoriale::getM_Fz() const {
    return m_Fz;
}

double Campovettoriale::modulo() {
    return sqrt(pow(m_Fx, 2) + pow(m_Fy, 2) + pow(m_Fz, 2));
}

Puntomateriale::Puntomateriale(posizione & pos, Particella & par)
    : posizione(pos), Particella(par),
    m_G(6.67E-11), m_k(1 / (4.*M_PI* 8.854187817E-12)){
}

Puntomateriale::Puntomateriale(double m, double q, double x, double y, double z) :
    Particella(m, q), posizione(x, y, z),
    m_G(6.67E-11), m_k(1 / (4.*M_PI* 8.854187817E-12)){
}

Campovettoriale Puntomateriale::Campogravitazionale(posizione & pos) {
    Campovettoriale V(pos);
    double dist = Distanza(pos);
    double c = -getMassa() * m_G / (dist * dist);
    V.SetFx(c * (pos.getX() - getX()) / dist);
    V.SetFy(c * (pos.getY() - getY()) / dist);
    V.SetFz(c * (pos.getZ() - getZ()) / dist);
    return V;
}


Campovettoriale Puntomateriale::Campoelettrico(posizione & pos) {
    Campovettoriale V(pos);
    double dist = Distanza(pos);
    double c = getCarica() * m_k / (dist * dist);
    V.SetFx(c * (pos.getX() - getX()) / dist);
    V.SetFy(c * (pos.getY() - getY()) / dist);
    V.SetFz(c * (pos.getZ() - getZ()) / dist);
    return V;
}