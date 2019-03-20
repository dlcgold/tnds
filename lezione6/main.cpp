#include <iostream>
#include "Campovettoriale.h"
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){
    if(argc!=4){
        cerr << "Usage: " << argv[0] << " <x> <y> <z>" << endl;
        exit(-1);
    }
    double x = atof(argv[1]);
    double y = atof(argv[2]);
    double z = atof(argv[3]);
    posizione r(x, y, z);

    const double e = 1.60217653E-19;
    const double me = 9.1093826E-31;
    const double mp = 1.67262171E-27;
    const double d = 1.E-10;

    Puntomateriale Elettrone(me, -e, 0., 0., d / 2);
    Puntomateriale Protone(mp, e,0. ,0. , -d / 2);


   /* Campovettoriale E(r);
    E.somma(Elettrone.Campoelettrico(r));
    E.somma(Protone.Campoelettrico(r));*/

    //cout << "E=(" << E.GetFx() << "," << E.GetFy() << "," << E.GetFz() << ")"<<endl;

    return 0;

}
