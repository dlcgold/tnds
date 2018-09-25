//
// Created by dlcgold on 25/09/18.
//

#ifndef PROJECT_CORPOCELESTE_H
#define PROJECT_CORPOCELESTE_H

#include <string>
#include "Particella.h"
using namespace std;

class CorpoCeleste : public Particella{
public:
     CorpoCeleste(string nome, double massa, double raggio);
    ~CorpoCeleste();

    void SetNome(std::string nome){
        m_nome=nome;
    }

    void SetMassa(double massa){
        m_massa=massa;
    }

    void SetRaggio(double raggio){
        m_raggio=raggio;
    }

    string GetNome() const{
        return m_nome;
    }

    double GetRaggio() const {
        return m_raggio;
    }
    virtual void Print() const ;

protected:
    string m_nome;
    double m_raggio;
};
#endif //PROJECT_CORPOCELESTE_H
