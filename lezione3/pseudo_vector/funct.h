//
// Created by dlcgold on 15/03/19.
//

#ifndef LEZIONE3_FUNCT_H
#define LEZIONE3_FUNCT_H

#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
#include "Vector.h"

using namespace std;

// lettura da file
template <typename T> Vector<T> Read(unsigned int N, char* filename){
    Vector<T> v(N);
    ifstream in(filename);

    assert(in && "Error: file not found");
    if(!in){
        cout <<  "Error: file "<< filename << " not found" << endl;
        exit(11);
    } else {
        for (unsigned int i = 0; i < N; ++i) {
            T val = 0;
            in >> val;
            v.SetComponent(i, val);
            assert(!(in.eof()) && "file read");
            if(in.eof()){
                cout << "file read" << endl;
                exit(11);
            }
        }
    }
    return v;
}

// print su terminale
template <typename T> void Print(const Vector<T> & v ){
    for (int i = 0; i < v.GetN(); ++i) {
        cout << v.GetComponent(i) << endl;
    }
}

// print su file
template  <typename T> void Print(const Vector<T> & v, const char* filename){
    ofstream out(filename);
    if(!out) {
        cerr << "Error with file" << filename << endl;
        return;
    }
    for (int i = 0; i < v.GetN(); ++i) {
        out << v.GetComponent(i) << endl;
    }
    out.close();
    return;
}

template <typename T> T mean(const Vector<T> & v){
    T somma = 0;
    T media;
    for (int i = 0; i < v.GetN(); ++i) {
        somma += v.GetComponent(i);
    }
    media = somma / v.GetN();
    return media;
}

template <typename T> T var(const Vector<T> & v){
    T somma = 0;
    T media = mean(v);
    for (int i = 0; i < v.GetN(); ++i) {
        somma = pow(v.GetComponent(i) - media, 2);
    }
    T varianza = somma / v.GetN();
    return varianza;
}

template <typename T> T mid(Vector<T> & v){
    T* copy = v.SortArray();
    T mediana = 0;
    if(v.GetN() % 2 == 0) {
        mediana = (copy[v.GetN() / 2] + copy[v.GetN() / 2 +1]) /2;
    } else {
        mediana = copy[v.GetN() / 2];
    }
    return mediana;
}
#endif //LEZIONE3_FUNCT_H
