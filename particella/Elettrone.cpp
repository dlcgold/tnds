//
// Created by dlcgold on 25/09/18.
//
#include <iostream>
#include "Elettrone.h"

using namespace std;

Elettrone::Elettrone() : Particella(9.1093826E-31, -1.60217653E-19){}

Elettrone::~Elettrone() {}

void Elettrone::Print() const {
    cout<<"Elettrone: m= "<<m_massa<<", q= "<<m_carica<<endl;
}

