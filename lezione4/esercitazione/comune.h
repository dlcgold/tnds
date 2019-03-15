//
// Created by dlcgold on 15/03/19.
//

#ifndef ESERCITAZIONE_COMUNE_H
#define ESERCITAZIONE_COMUNE_H

#include <string>
#include <vector>
#include <map>
#include "TGraph.h"

using namespace std;

class comune {
public:
    comune();
    comune(string nome);
    comune(string nome, vector<int> tutti);

    string getNome() const {
        return m_nome;
    };

    double getMedia() const;
    double getVar() const;
    double getMeanError() const;
    int getNabitanti() const;
    void printAge() const;
    unsigned int getBin(unsigned int) const;
    vector<int> getDistribuzione() const;

    TGraph getAgeGraph();
     // ridefinisco < per l'ordonamento
     bool operator < (const comune & b) const{
         return getNabitanti() < b.getNabitanti();
     };

    // ridefinisco == per la ricerc
    bool operator == (const comune & b) const{
        return getNome() == b.getNome();
    }

    double getM_media() const;

    const vector<int> &getM_distribuzione() const;;
private:
    string m_nome;

    int m_nabitanti;
    double m_media;
    double m_varianza;
    vector<int> m_distribuzione;
    double m_sumx, m_sumx2;
    double mean();
    double var();
    int calcAbit();
};
#endif //ESERCITAZIONE_COMUNE_H
