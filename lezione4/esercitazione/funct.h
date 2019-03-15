//
// Created by dlcgold on 15/03/19.
//

#ifndef ESERCITAZIONE_FUNCT_H
#define ESERCITAZIONE_FUNCT_H

#include <vector>
#include <string>
#include <map>
#include "comune.h"
#include "TGraph.h"

using namespace std;

struct OverallQuantities {
    double mean;
    int num;
};

OverallQuantities CalcolaMedieTotali ( const vector<comune> & ListaComuni );

TGraph CalcolaDistribuzioneEta ( const vector<comune> & ListaComuni );

vector<comune> ReadFromFile ( string filename ) ;

void PrintStat(const OverallQuantities &) ;
#endif //ESERCITAZIONE_FUNCT_H
