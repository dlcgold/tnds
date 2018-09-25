//
// Created by dlcgold on 25/09/18.
//

#include <iostream>
#include "Particella.h"
using namespace std;

Particella::Particella(double massa, double carica) {
    m_massa=massa;
    m_carica=carica;
}

Particella::~Particella() {}

void Particella::Print() const {
    cout<<"Particella: m= "<<m_massa<<", q= "<<m_carica<<endl;
}