#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include "EquazioniDifferenziali.h"

#include "TApplication.h"
#include "TCanvas.h"
#include "TGraph.h"

using  namespace std;
int main(int argc, char** argv) {
    if(argc != 2){
        std::cerr << "add steps" << endl;
        return -1;
    }
    TApplication myApp("myApp", 0, 0);
    Eulero Euler;
    OscillatoreArmonico* osc = new OscillatoreArmonico(1.);
    double tmax = 70;
    double h = atoi(argv[1]);
    VettoreLineare x(2);
    double t = 0;
    x.SetComponent(0, 0.);
    x.SetComponent(1, 1.);
    TGraph* graph = new TGraph();
    int nstep = int(tmax / h +0.5);
    for (int i = 0; i < nstep; ++i) {
        graph -> SetPoint(nstep, t, x.GetComponent(0));
        std::cout << t << " " << x.GetComponent(0) << " " << x.GetComponent(1) << std::endl;
        x = Euler.passo(t, x, h, osc);
        t = t + h;
    }
    std::cout << std::setprecision(10) << h << " " << t << " " << x.GetComponent(0) << " " << x.GetComponent(1) << std::endl;
    TCanvas* c = new TCanvas();
    graph -> Draw("AL");
    myApp.Run();
    return 0;
}