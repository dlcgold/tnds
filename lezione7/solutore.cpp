//
// Created by dlcgold on 20/03/19.
//
#include <cmath>
#include <iomanip>
#include <iostream>
#include "FunzioneBase.h"
using namespace std;

int sign(double x){
    if(x > 0)
        return 1;
    else
        return -1;
}



bisezione::bisezione(int N, double xmin, double xmax, double prec, const FunzioneBase *f) {
    _N = N;
    _prec = prec;
    _xmin = xmin;
    _xmax = xmax;
    _f = f;

}

bisezione::~bisezione(){}

double bisezione::CercaZeri(double xmin, double xmax, const FunzioneBase *f) {
    double a = xmin;
    double b = xmax;
    double med = 0;

    if( (sign(f -> Eval(a)) * sign(f -> Eval(b))) <0){
        for(int i = 0; i <= _N; i++){
            med = (a + b) / 2.;
            if(med < _prec || f -> Eval(med) == 0){
                return med;
            }
            if( (sign(f -> Eval(a)) * sign(f -> Eval(med))) <0) {
                b = med;
            }
            else if((sign(f -> Eval(b)) * sign(f -> Eval(med))) <0){
                a = med;
            }
            if(i == _N){
                return med;
            }
        }
    }
    return med;
}