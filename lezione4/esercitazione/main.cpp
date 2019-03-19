#include <iostream>
#include "funct.h"
#include "comune.h"
#include "TApplication.h"
#include "TCanvas.h"
using namespace std;

int main(int argc, char** argv) {
    vector<comune> comuni = ReadFromFile(argv[2]);
    double meant = CalcolaMedieTotali(comuni).mean;
    cout << "La media è: " << meant << endl;
    TApplication app("app", 0, 0);
    TGraph graph = CalcolaDistribuzioneEta(comuni);
    TCanvas mycanvas("graph", "graph");
    graph.Draw();
    app.Run();
    return 0;
}