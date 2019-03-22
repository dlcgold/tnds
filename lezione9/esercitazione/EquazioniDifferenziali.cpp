//
// Created by dlcgold on 21/03/19.
//

#include <iostream>
#include "EquazioniDifferenziali.h"
#include <cmath>

OscillatoreArmonico::OscillatoreArmonico(double omega0) {
    m_omega0 = omega0;
}

VettoreLineare OscillatoreArmonico::Eval(double t, const VettoreLineare &x) const {
    VettoreLineare y(2);
    y.SetComponent(0, x.GetComponent(1));
    y.SetComponent(1, -x.GetComponent(0) * pow(this -> GetW(), 2));
    return y;
}

OscillatoreArmonico::~OscillatoreArmonico(){}

Eulero::Eulero(){}

Eulero::~Eulero(){}

VettoreLineare Eulero::passo(double t, const VettoreLineare &x, double h, FunzioneVettorialeBase *f) const {
    return  x + f -> Eval(t, x) * h;
}

/*
VettoreLineare Runge::Passo(double t, VettoreLineare &inizio, double h, FunzioneVettorialeBase *f) {
    VettoreLineare x(2), y(2), z(2), w(2);
    x = f -> Eval(t, inizio);
    y = f -> Eval(t + h * 0.5, inizio + x * 0.5 *h);
    z = f -> Eval(t + h * 0.5, inizio + y * 0.5 *h);
    w = f -> Eval(t + h, inizio + z * h);
    return inizio + (x + y * 2 + z * 2 + w) * (h / 6.);
}*/
