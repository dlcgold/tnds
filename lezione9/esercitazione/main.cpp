#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include "EquazioniDifferenziali.h"

#include "TApplication.h"
#include "TCanvas.h"
#include "TGraph.h"
#include <TF1.h>
#include <TAxis.h>

using  namespace std;
int main(int argc, char** argv) {
    if(argc != 2){
        std::cerr << "add steps" << endl;
        return -1;
    }
    TApplication myApp("myApp", 0, 0);
    Runge rung;
    OscillatoreArmonico* osc = new OscillatoreArmonico(1.);
    double tmax;
    cout << "Inserire tempo massimo:" << endl;
    cin >> tmax;
    double h = atoi(argv[1]);
    VettoreLineare x(2);
    double t = 0;
    x.SetComponent(0, 0.);
    x.SetComponent(1, 1.);
    TGraph* posizione = new TGraph();
    TGraph* errore = new TGraph();
    int nstep = int(tmax / h + 0.5);
    for (int i = 0; i < nstep; ++i) {
        posizione -> SetPoint(i, t, x.GetComponent(0));
        errore -> SetPoint(i, t, x.GetComponent(0) - sin(t));
        std::cout << t << " " << x.GetComponent(0) << " " << x.GetComponent(1) << std::endl;
        x = rung.passo(t, x, h, osc);
        t += h;
    }

    std::cout << std::setprecision(10) << h << " " << t << " " << x.GetComponent(0) << " " << x.GetComponent(1) << std::endl;
    TCanvas c;
    c.Divide(1, 2);
    c.cd(1);
    errore -> Draw("AL");
    posizione -> GetXaxis() -> SetTitle("Tempo[s]");
    posizione -> GetYaxis() -> SetTitle("Posizione [m]");
    c.cd(2);
    errore -> Draw("AL");
    errore -> GetXaxis() -> SetTitle("Tempo[s]");
    errore -> GetYaxis() -> SetTitle("Posizione [m] - sin(t)");
    myApp.Run(true);
    return 0;
}