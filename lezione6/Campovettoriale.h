//
// Created by dlcgold on 20/03/19.
//

#ifndef LEZIONE6_CAMPOVETTORIALE_H
#define LEZIONE6_CAMPOVETTORIALE_H

#include "posizione.h"
#include "particella.h"
#include <cmath>

class vettore{
public:
    vettore(double x, double y,double z){
        m_Fx = x;
        m_Fy = y;
        m_Fx = z;
    }

    double GetFx(){
        return m_Fx;
    }
    double GetFy(){
        return m_Fy;
    }
    double GetFz(){
        return m_Fz;
    }

    void SetFx(double a){
        m_Fx = a;
    }
    void SetFy(double a){
        m_Fy = a;
    }
    void SetFz(double a){
        m_Fz = a;
    }

    double Modulo() const{
        return sqrt(m_Fx * m_Fx + m_Fy * m_Fy + m_Fz * m_Fz);
    }

protected:
    double m_Fx, m_Fy, m_Fz;
};

class Campovettoriale : public posizione, public vettore {
public:
    Campovettoriale(const posizione& pos);
    Campovettoriale(const posizione& pos, vettore& vect);
    Campovettoriale(double x, double y, double z, double Fx, double Fy, double Fz);
    ~Campovettoriale();

    Campovettoriale& operator += (const Campovettoriale&);
    Campovettoriale& operator + (const Campovettoriale&) const;

    double getM_Fx() const;
    double getM_Fy() const;
    double getM_Fz() const;

    void somma(Campovettoriale b);
    double modulo();

protected:
    double m_Fx, m_Fy, m_Fz;
};

class Puntomateriale : public posizione, public Particella{
public:
    Puntomateriale() : posizione(0, 0, 0), Particella(0, 0){}
    Puntomateriale(posizione&, Particella&);
    Puntomateriale(double, double, double, double, double);
    Campovettoriale Campoelettrico(posizione&);
    Campovettoriale Campogravitazionale(posizione&);
protected:
    double m_G, m_k;
};
#endif //LEZIONE6_CAMPOVETTORIALE_H
