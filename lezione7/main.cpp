#include <iostream>
#include <iomanip>
#include <cmath>

#include "FunzioneBase.h"

using namespace std;

int main(){
    double a, b, c;
    double xmin, xmax, exit;
    double prec;
    int N, cifreSig;

    cout<<"Inserire i valori di a, di b e di c: ";
    cin >> a >> b >> c;
    cout << endl;

    Parabola exe(a, b, c);

    cout << "Inserire i gli estremi dell'intervallo di studio: ";
    cin >> xmin >> xmax;
    cout << endl;

    cout << "Inserire il numero di iterazioni massime(INTERO) e la precisione da adottare: ";
    cin >> N >> prec;

    cifreSig = -log10(prec);
    cout << fixed << setprecision(cifreSig);

    bisezione x(N, xmin, xmax, prec, &exe);
    x.SetN(N);
    x.SetPrecisione(prec);

    cout << x.CercaZeri(xmin, xmax, &exe) << endl;

    return 0;
}