//
// Created by dlcgold on 25/09/18.
//
#include <iostream>
#include "CorpoCeleste.h"

using namespace std;

CorpoCeleste::CorpoCeleste(std::string nome, double massa, double raggio) : Particella(massa, 0){
    m_nome=nome;
    m_raggio=raggio;
} //carica nulla

CorpoCeleste::~CorpoCeleste() {}
void CorpoCeleste::Print() const {
    cout<<m_nome<<": m= "<<m_massa<<", R= "<<m_raggio<<endl;
}