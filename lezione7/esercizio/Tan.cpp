//
// Created by dlcgold on 21/03/19.
//
#include <cmath>
#include "FunzioneBase.h"

using namespace std;

double Tan::Eval(double x) const {
    return sin(x) - x * cos(x);
}