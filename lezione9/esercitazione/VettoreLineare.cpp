//
// Created by dlcgold on 21/03/19.
//

#include "VettoreLineare.h"


VettoreLineare VettoreLineare::operator+(const VettoreLineare & b) const {
    VettoreLineare r(GetN());

    if(GetN() != b.GetN()) {
        cerr << "Errore: vettori di dimensione differente" << endl;
        return -1;
    }

    for (unsigned int i = 0; i < GetN(); ++i) {
        r.SetComponent(i, GetComponent(i) + b.GetComponent(i));
    }

    return r;
}

VettoreLineare VettoreLineare::operator*(const double x) const {
    VettoreLineare r(GetN());

    for (unsigned int i = 0; i < GetN(); ++i) {
        r.SetComponent(i, GetComponent(i) * x);
    }

    return r;
}

double VettoreLineare::operator*(const VettoreLineare & b) const {
    double r = 0;

    if(GetN() != b.GetN()) {
        cerr << "Errore: vettori di dimensione differente" << endl;
        return -1;
    }

    for (unsigned int i = 0; i < GetN(); ++i) {
        r +=  GetComponent(i) * b.GetComponent(i);
    }

    return r;
}
