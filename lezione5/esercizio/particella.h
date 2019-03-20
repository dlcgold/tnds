//
// Created by dlcgold on 20/03/19.
//

#ifndef INC_1_PARTICELLA_H
#define INC_1_PARTICELLA_H

#include <string>
#include <cmath>
using namespace std;

class Particella {
public:
    Particella(double massa,double carica);
    ~Particella();

    double getMassa() const {return m_massa;}
    double getCarica() const {return m_carica;}

    void Print() const;
protected:
    double m_massa;
    double m_carica;
};
class Elettrone : public Particella{
public:
    Elettrone();
    ~Elettrone();
    void Print() const;
};

class Corpoceleste : public Particella{
public:
    Corpoceleste(string nome, double massa, double raggio);
    ~Corpoceleste();

    void setNome(string nome){
        m_nome=nome;
    }
    void setMassa(double massa){
        m_massa=massa;
    }
    void setRaggio(double raggio){
        m_raggio=raggio;
    }
    string getNome() const {
        return m_nome;
    }
    double getRaggio() const {
        return m_raggio;
    }
    virtual void Print() const;

    double getPG(double d) const{
        return ((6.67E-11 * m_massa) / pow(d, 2));
    }

protected:
    string m_nome;
    double m_raggio;
};

#endif


