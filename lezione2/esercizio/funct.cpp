//
// Created by dlcgold on 14/03/19.
//
#include "funct.h"

double mean(const Vector & v){
    double somma = 0;
    for (int j = 0; j < v.GetN(); ++j) {
        somma += v.GetComponent(j);
    }

    double media = somma / v.GetN();
    return media;
}

double var(const Vector & v){
    double sommav = 0;
    double media = mean(v);
    for (int k = 0; k < v.GetN(); ++k) {
        sommav = pow(v.GetComponent(k)-media,2);
    }
    double varianza = sommav / v.GetN();
    return varianza;
}

double mid(Vector & v){

    // ordino copydata
    double* copydata = v.SortArray();

    double mediana = 0;
    if(v.GetN() % 2 == 0) {
        mediana = (copydata[v.GetN() / 2] + copydata[v.GetN() / 2 + 1]) / 2;
    } else {
        mediana = copydata[v.GetN() / 2];
    }
    return mediana;
}

void out(Vector & v){
    double* copydata = v.SortArray();
    ofstream out("sort.data");
    for (int m = 0; m < v.GetN(); ++m) {
        out << copydata[m] << endl;
    }
}

void Print(const Vector & v){
    for (int i = 0; i < v.GetN(); ++i) {
        cout << v.GetComponent(i) <<endl;
    }
}