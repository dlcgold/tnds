//
// Created by dlcgold on 21/03/19.
//

#ifndef ESERCITAZIONE_INTEGRALE_H
#define ESERCITAZIONE_INTEGRALE_H

#include "FunzioneBase.h"

class integrale {
public:
    integrale(double a, double b, const FunzioneBase* f);
    double Midpoint(unsigned int nstep);
    double Simpson(unsigned int nstep);

private:
    double m_a, m_b;
    double m_sum;
    double m_h;
    int m_sign;
    double m_integral;
    const FunzioneBase* m_f;
};


#endif //ESERCITAZIONE_INTEGRALE_H
