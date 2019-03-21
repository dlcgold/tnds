//
// Created by dlcgold on 21/03/19.
//

#include "integrale.h"
#include <algorithm>

using namespace std;

integrale::integrale(double a, double b, const FunzioneBase *f) {
    m_f = f;
    m_a = min(a, b);
    m_b = max(a, b);
    if(a > b)
        m_sign = -1;
    else
        m_sign = 1;
}

double integrale::Midpoint(unsigned int nstep) {
    m_h = (m_b - m_a) / nstep;
    m_sum = 0;

    for (unsigned int i = 0; i < nstep; ++i) {
        m_sum += m_f -> Eval(m_a + (i + 0.5) * m_h);
    }

    m_integral = m_sign * m_sum * m_h;
    return m_integral;
}