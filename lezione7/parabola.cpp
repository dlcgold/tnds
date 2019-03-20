//
// Created by dlcgold on 20/03/19.
//
#include <cmath>
#include "FunzioneBase.h"

Parabola::Parabola() {
    m_a = 0;
    m_b = 0;
    m_c = 0;
}

Parabola::Parabola(double a, double b, double c) {
    m_a = a;
    m_b = b;
    m_c = c;
}

Parabola::~Parabola() {}

double Parabola::Eval(double x) const {
    return m_a * pow(x, 2) + m_b * x + m_c;
}