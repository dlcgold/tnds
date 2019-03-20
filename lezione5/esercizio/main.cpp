//
// Created by dlcgold on 25/09/18.
//
#include "particella.h"
#include "posizione.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    string name;
    double m, r;
    Corpoceleste *c = new Corpoceleste("SOLE", 2E30, 0.7E9);

    double x1, y1, z1, x2, y2, z2;
    cout << "Inserire le coordinate del corpoceleste rispetto al sole: ";
    cin >> x1 >> y1 >> z1;
    posizione P(x1, y1, z1);

    cout << "Inserire le coordinate del punto rispetto al Sole: ";
    cin >> x2 >> y2 >> z2;
    posizione D(x2, y2, z2);
    double distanza1 = D.Distanza(P), distanza2;
    double pot1 = c -> getPG(distanza1);
    cout << "Il potenziale gravitazionale rispetto al sole è è: "<< pot1 << "." << endl;

    Corpoceleste *d = new Corpoceleste("TERRA", 5.972E24, 6E3);
    cout << "Inserire le coordinate del punto rispetto alla Terra: ";
    cin >> x2 >> y2 >> z2;
    posizione C(x2, y2, z2);
    distanza2 = C.Distanza(P);
    double pot2 = d -> getPG(distanza2);
    cout << "Il potenziale gravitazionale rispetto al sole è è: " << pot2 << "."<< endl;

    cout << "Il rapporto tra i due potenziali è " << pot2 / pot1 << " J" << endl;
    return 0;

}
