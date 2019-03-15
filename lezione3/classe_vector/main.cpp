#include <iostream>
#include <fstream>
#include <cmath>
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
    return 0;
}