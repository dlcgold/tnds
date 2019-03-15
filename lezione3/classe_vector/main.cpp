#include <iostream>
#include <fstream>
#include <cmath>
#include "TH1F.h"
#include "TApplication.h"
#include "TCanvas.h"
#include "Vector.h"

int main(int argc, char** argv) {
    vector<double> V = Read<double>(atoi(argv[1]), argv[2]);
    Print(V);
    const char *outfile = "out.data";
    Print(V, outfile);
    cout << endl;
    cout << "media = " << mean<double>(V) << endl;
    cout << "varianza = " << var<double>(V) << endl;
    cout << "mediana = " << mid<double>(V) << endl;
     // creo un processo app che lascia app.run attivo
     TApplication app("app", 0, 0);
     // stampo l'istrogramma, cpn statOverFlows per dati anche
     // fuori dal range di definizione dell'istrogramma
     TH1F histo("Histo", "histo", 100, -10, 100);
     histo.StatOverflows(kTRUE);
    for (int i = 0; i < V.size(); ++i) {
        histo.Fill(V[i]);
    }
    cout << "media fatta con root = " << histo.GetMean() << endl;
    // disegno
    TCanvas mycanvas("histo", "histo");
    histo.Draw();
    histo.GetXaxis() -> SetTitle("misure");

    app.Run();
    return 0;
}