//
// Created by dlcgold on 14/03/19.
//

#ifndef LEZIONE2_VECTOR_H
#define LEZIONE2_VECTOR_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <assert.h>
#include <algorithm>

using namespace std;

class Vector{
public:
    //costruttori

    Vector();
    Vector(int N);
    // copy constructor
    Vector(const Vector&);
    // overloading assegnatore assegnazione
    Vector& operator = (const Vector&);
    //distruttori

    ~Vector();

    // getter della dimensione
    int GetN() const{
        return m_N;
    }

    // set componenete i-esima
    void SetComponent(int, double);

    // get componenete i-esima
    double GetComponent(int) const;

    void Scambia(int, int);

private:
    int m_N; // dimensione vettore
    double* m_v; // vettore dati

};
#endif //LEZIONE2_VECTOR_H
