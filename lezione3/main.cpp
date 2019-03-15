#include <iostream>
#include <fstream>
#include <cstdlib>
#include "funct.h"
#include "Vector.h"

int main(int argc, char** argv) {
    int ndata = atoi(argv[1]);
    char* filename = argv[2];
    Vector <double> V = Read<double>(ndata, filename);
    Print(V);
    const char *outfile = "out.data";
    Print(V, outfile);
    cout << endl;
    cout << "media = " << mean<double>(V) << endl;
    cout << "varianza = " << var<double>(V) << endl;
    cout << "mediana = " << mid<double>(V) << endl;
    return 0;
}