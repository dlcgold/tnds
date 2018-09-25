//
// Created by dlcgold on 25/09/18.
//

#ifndef TNDS_PARTICELLA_H
#define TNDS_PARTICELLA_H

class Particella{
public:
    Particella(double massa, double carica);
    ~Particella();

    double GetMassa() const{
        return m_massa;
    }
    double GetCarica() const{
        return m_carica;
    }

    virtual void Print() const;
protected:
    double m_massa, m_carica;
};
#endif //TNDS_PARTICELLA_H
