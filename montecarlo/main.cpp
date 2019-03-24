#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "TApplication.h"
#include "TCanvas.h"
#include "TF1.h"
#include "TGraph.h"
#include <iostream>
#include <cmath>
#include "TMultiGraph.h"

using namespace std;

int main(int argc, char** argv)
{
    unsigned long int points = 0;
    cout << "Inserire numero di tentativi" << endl;
    cin >> points;
    srand(static_cast<unsigned int>(time(NULL)));
    double x, y, pi;
    unsigned long int apps = 0, j = 0;
    double* pis = new double[points];
    double* ys = new double[points];
    for(j; j < points; j++) {
        x = rand() / (double)RAND_MAX;
        y = rand() / (double)RAND_MAX;
        if(x * x + y * y <= 1) {
            apps++;
        }
        ys[j] = j;
        pis[j] = apps;
    }

    pi = (4.0 * apps) / j;
    for (int i = 0; i < points; ++i) {
        pis[i] = (4 * pis[i]) / j;
    }
    cout << pi << " " << pis[points - 1] << endl;
    double* realpis = new double[points];
    for (int k = 0; k < points; ++k) {
        realpis[k] = M_PI;
    }
    TApplication app("App", &argc, argv);
    TGraph *g = new TGraph(points, ys, pis);
    TGraph *g2 = new TGraph(points, ys, realpis);
    TMultiGraph  *mg  = new TMultiGraph();
    mg->Add(g);
    mg->Add(g2);
    mg->Draw("ALP");
    app.Run();
    return 0;
}
