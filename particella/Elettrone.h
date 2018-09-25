//
// Created by dlcgold on 25/09/18.
//

#ifndef PROJECT_ELETTRONE_H
#define PROJECT_ELETTRONE_H

#include "Particella.h"

class Elettrone : public Particella{
public:
    Elettrone();
    ~Elettrone();
    void Print() const;
};
#endif //PROJECT_ELETTRONE_H
