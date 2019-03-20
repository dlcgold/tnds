//
// Created by dlcgold on 20/03/19.
//

#include "particella.h"
#include <iostream>
using namespace std;

Particella::Particella(double massa, double carica) {
    m_massa=massa;
    m_carica=carica;
}

Particella::~Particella() { }

void Particella::Print() const {
    cout << "Particella:m= " << m_massa <<", q= "<< m_carica << endl;
}

