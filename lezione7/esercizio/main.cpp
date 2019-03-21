#include <iostream>
#include <iomanip>
#include <cmath>
#include "FunzioneBase.h"

using namespace std;
int main() {
    double prec;
    int N, cifreSig;

    cout << "Inserire il numero di iterazioni massime(INTERO) e la precisione da adottare: ";
    cin >> N >> prec;

    cifreSig = -log10(prec);
    cout << fixed << setprecision(cifreSig);
    
    Tan y;
    for (int i = 0; i <= 200; ++i) {
        double xmin = i * M_PI;
        double xmax = (i + 1) * M_PI;
        bisezione* x = new bisezione(N, xmin, xmax, prec, &y);
        x -> SetN(N);
        x -> SetPrecisione(prec);
        cout << x -> CercaZeri(xmin, xmax, &y) << endl;
        delete x;
    }
    return 0;
}