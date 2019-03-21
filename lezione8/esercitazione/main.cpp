#include <iostream>
#include <cmath>
#include <iomanip>
#include "FunzioneBase.h"
#include "integrale.h"

using namespace std;

int main(int argc, char** argv) {
    if(argc != 2){
        cout << "Add nstep" << endl;
        return -1;
    }

    double a = 0;
    double b = M_PI;

    int nstep = atoi(argv[1]);
    Seno* mysin = new Seno();
    integrale* integral = new integrale(a, b, mysin);

    cout << setprecision(12) << integral -> Midpoint(nstep) << endl;
    cout << setprecision(12) << integral -> Simpson(nstep) << endl;

    return 0;
}