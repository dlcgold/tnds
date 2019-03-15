//
// Created by dlcgold on 15/03/19.
//
#include <iostream>
#include <vector>
#include <math.h>
#include "TAxis.h"
#include "comune.h"

comune::comune(){
    m_nome = "none";
    m_media = 0;
    m_varianza = 0;
    m_nabitanti = 0;
};

comune::comune(string nome){
    m_nome = nome;
    m_media = 0;
    m_varianza = 0;
    m_nabitanti = 0;
};

comune::comune(string nome, vector<int> v){
    m_nome = nome;
    m_distribuzione = v;
    m_media = mean();
    m_varianza = var();
    m_nabitanti = calcAbit();
};

double comune::mean() {
    double sump = 0;
    double sum = 0;
    for (int i = 0; i < m_distribuzione.size(); ++i) {
        sump += m_distribuzione[i] * (i * 0.5);
        sum += m_distribuzione[i];
    }
    return sump / sum;
}

double comune::var() {
    unsigned long size = m_distribuzione.size() ;
    int number = 0;
    double result=0.;
    if ( size == 0 ) return result;

    double sumx  = 0;
    double sumx2 = 0;

    for ( int i = 0 ; i < size ; i++ ) {
        sumx   += ( m_distribuzione[i]*(i+0.5) ) ;
        sumx2  += ( (i+0.5) * (m_distribuzione[i])*(i+0.5) );
        number += m_distribuzione[i];
    }

    //  m_sumx  = sumx ;
    //  m_sumx2 = sumx2;

    result = 1./static_cast<double>( number ) * ( sumx2)   -  pow( sumx/static_cast<double>( number ) ,2 )  ;
    return result;
}

int comune::calcAbit() {
    int sum = 0;
    for (int i = 0; i < m_distribuzione.size(); ++i) {
        sum += m_distribuzione[i];
    }
    return sum;
}

double comune::getMedia() const {
    return m_media;
}

double comune::getVar() const {
    return m_varianza;
}

double comune::getNabitanti() const {
    return m_nabitanti;
}

double comune::getMeanError() const {
    return sqrt(m_varianza / double (m_nabitanti));
}

vector<int> &comune::getDistribuzione() const {
    return m_distribuzione;
}

void comune::printAge() const {
    for (int i = 0; i < m_distribuzione.size(); ++i) {
        cout << i << " " << m_distribuzione[i] << endl;
    }
}

unsigned int comune::getBin(unsigned int k) const {
    return m_distribuzione[k];
}

TGraph comune::getAgeGraph() {
    TGraph gr;
    for (int i = 0; i < 100; ++i) {
        gr.SetPoint(i, i + 0.5, m_distribuzione[i]);
    }
    gr.GetXaxis() -> SetTitle("eta");
    gr.GetYaxis() -> SetTitle("abitanti");
    return gr;
}