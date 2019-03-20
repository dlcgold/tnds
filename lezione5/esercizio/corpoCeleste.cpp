//
// Created by dlcgold on 20/03/19.
//
#include "particella.h"
#include <string>
#include <iostream>
using namespace std;

Corpoceleste::Corpoceleste(string nome, double massa, double raggio) : Particella(massa,0) {
    m_nome=nome;
    m_raggio=raggio;
}

Corpoceleste::~Corpoceleste() { }

void Corpoceleste::Print() const {
    cout << m_nome << ": m=" << m_massa << ", R=" << m_raggio << endl;
}

