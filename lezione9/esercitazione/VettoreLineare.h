//
// Created by dlcgold on 21/03/19.
//

#ifndef ESERCITAZIONE_VETTORELINEARE_H
#define ESERCITAZIONE_VETTORELINEARE_H

#include "Vettore.h"

class VettoreLineare : public Vector{
public:
    VettoreLineare();
    VettoreLineare(unsigned int);

    ~VettoreLineare();

    // somma vettori
    VettoreLineare operator+(const VettoreLineare&) const;
    // prodotto scalare
    double operator*(const VettoreLineare&) const;
    // prodotto per uno scalare
    VettoreLineare operator*(const double) const;

};


#endif //ESERCITAZIONE_VETTORELINEARE_H
