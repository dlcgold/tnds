//
// Created by dlcgold on 21/03/19.
//

#ifndef ESERCITAZIONE_EQUAZIONIDIFFERENZIALI_H
#define ESERCITAZIONE_EQUAZIONIDIFFERENZIALI_H

#include "VettoreLineare.h"

class FunzioneVettorialeBase {
public:
    virtual VettoreLineare Eval(double t, const VettoreLineare& x) const = 0;
};

class OscillatoreArmonico : public FunzioneVettorialeBase{
public:
    OscillatoreArmonico(double omega0);
    ~OscillatoreArmonico();

    virtual VettoreLineare Eval(double t, const VettoreLineare& x) const;
    double GetW() const {
        return m_omega0;
    }
private:
    double m_omega0;
};

class EquazioneDifferenzialeBase{
public:
    virtual VettoreLineare passo(double t,const VettoreLineare& inizio, double h, FunzioneVettorialeBase* f) const = 0;
};

class Eulero : public EquazioneDifferenzialeBase{
public:
    Eulero();
    ~Eulero();
    virtual VettoreLineare passo(double t, const VettoreLineare& x, double h, FunzioneVettorialeBase* f) const;
};

/*class Runge : public EquazioneDifferenzialeBase{
public:
    virtual VettoreLineare Passo(double t, const VettoreLineare & inizio, double h, FunzioneVettorialeBase *f) const;
};*/

#endif //ESERCITAZIONE_EQUAZIONIDIFFERENZIALI_H
