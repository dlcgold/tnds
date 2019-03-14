/* Proviamo a scrivere un unico codice che legga dati da file,
 * li immagazzini in un array dinamico, calcoli la media,
 * la varianza e la mediana dei dati raccolti.
 * Scriviamo su un file di output i dati riordinati in ordine crescente.
 * Il numero di elementi da caricare e il nome del file
 * in cui trovare i dati sono passati da tastiera nel momento
 * in cui il programma viene eseguito.
 * Cerchiamo di costruire il codice passo passo.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
    if(argc < 3){
        cout << "Uso del programma: " << argv[0] << "<n_data><filename> " << endl;
        return -1;
    }

    int ndata = atoi(argv[1]); // primo elemento da stringa a int
    double* data = new double [ndata];
    char* filename = argv[2];

    // carico i dati su array

    ifstream fin(filename);
    if(!fin) {
        cout << "Error, file" << filename << "not found" << endl;
        exit(0);
    } else {
        for (int i = 0; i < ndata; ++i) {
            fin >> data[i];
            if(fin.eof()) {
                cout << "file read";
                exit(0);
            }
        }
    }

    // calcolo media

    double somma = 0;
    for (int j = 0; j < ndata; ++j) {
        somma += data[j];
    }

    double media = somma / ndata;
    cout << "la media è: " << media << endl;
    double sommav = 0;
    for (int k = 0; k < ndata; ++k) {
        sommav = pow(data[k]-media,2);
    }
    double varianza = sommav / ndata;
    cout << "la varianza è: " << varianza << endl;

    // copia del vettore
    double* copydata = new double[ndata];
    for (int l = 0; l < ndata; ++l) {
        copydata[l] = data[l];
    }
    // ordino copydata
    sort(copydata, copydata + ndata);

    double mediana = 0;
    if(ndata % 2 == 0) {
        mediana = (copydata[ndata / 2] + copydata[ndata / 2 + 1]) / 2;
    } else {
        mediana = copydata[ndata / 2];
    }
    cout << "la mediana è: " << mediana << endl;

    // scrivo copydata su file
    ofstream out("sort.data");
    for (int m = 0; m < ndata; ++m) {
        out << copydata[m] << endl;
    }
    return 0;
}