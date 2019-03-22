//
// Created by dlcgold on 14/03/19.
//

#ifndef ESERCITAZIONE_VETTORE_H
#define ESERCITAZIONE_VETTORE_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <assert.h>
#include <algorithm>

using namespace std;

class Vettore{
public:
    //costruttori

    Vettore();
    Vettore(int N);
    // copy constructor
    Vettore(const Vettore&);
    // overloading assegnatore assegnazione
    Vettore& operator = (const Vettore&);
    //distruttori

    ~Vettore();

    // getter della dimensione
    int GetN() const{
        return m_N;
    }

    // set componenete i-esima
    void SetComponent(int, double);

    // get componenete i-esima
    double GetComponent(int) const;

    void Scambia(int, int);
    double* SortArray();
private:
    int m_N; // dimensione vettore
    double* m_v; // vettore dati

};
#endif //ESERCITAZIONE_VETTORE_H
