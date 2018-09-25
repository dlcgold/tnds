//
// Created by dlcgold on 25/09/18.
//

#include <cmath>

#ifndef INC_1_POSIZIONE_H
#define INC_1_POSIZIONE_H

class Posizione{
public:
    Posizione();
    Posizione(double x, double y, double z);

    ~Posizione();

    double X() const;
    double Y() const;
    double Z() const;
    double R() const;
    double Phi() const;
    double Theta() const;
    double Rho() const;
    double Distanza(const Posizione &) const;

private:
    double m_x, m_y, m_z;
};

#endif //INC_1_POSIZIONE_H
