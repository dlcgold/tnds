//
// Created by dlcgold on 14/03/19.
//
#include "funct.h"

double mean(double* data, int ndata){
    double somma = 0;
    for (int j = 0; j < ndata; ++j) {
        somma += data[j];
    }

    double media = somma / ndata;
    return media;
}

double var(double* data, int ndata){
    double sommav = 0;
    double media = mean(data, ndata);
    for (int k = 0; k < ndata; ++k) {
        sommav = pow(data[k]-media,2);
    }
    double varianza = sommav / ndata;
    return varianza;
}

double mid(double* data, int ndata){
    // copia del vettore
    double* copydata = new double[ndata];
    for (int l = 0; l < ndata; ++l) {
        copydata[l] = data[l];
    }
    // ordino copydata
    sort(copydata, copydata + ndata);

    double mediana = 0;
    if(ndata % 2 == 0) {
        mediana = (copydata[ndata / 2] + copydata[ndata / 2 + 1]) / 2;
    } else {
        mediana = copydata[ndata / 2];
    }
    return mediana;
}

void out(double* data, int ndata){
    double* copydata = new double[ndata];
    for (int l = 0; l < ndata; ++l) {
        copydata[l] = data[l];
    }
    // ordino copydata
    sort(copydata, copydata + ndata);
    ofstream out("sort.data");
    for (int m = 0; m < ndata; ++m) {
        out << copydata[m] << endl;
    }
}

void Print(double* data, int ndata){
    for (int i = 0; i < ndata; ++i) {
        cout << data[i] <<endl;
    }
}