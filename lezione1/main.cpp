/* Proviamo a scrivere un unico codice che legga dati da file,
 * li immagazzini in un array dinamico, calcoli la media,
 * la varianza e la mediana dei dati raccolti.
 * Scriviamo su un file di output i dati riordinati in ordine crescente.
 * Il numero di elementi da caricare e il nome del file
 * in cui trovare i dati sono passati da tastiera nel momento
 * in cui il programma viene eseguito.
 * Cerchiamo di costruire il codice passo passo.
 */
#include "funct.h"

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

    // calcolo media, varianza e mediana

    double media = mean(data, ndata);
    cout << "la media è: " << setprecision(2) << media << endl;

    double varianza = var(data, ndata);
    cout << "la varianza è: " << varianza << endl;

    double mediana = mid(data, ndata);
    cout << "la mediana è: " << mediana << endl;

    // scrivo copydata su file
    out(data, ndata);

    Print(data, ndata);

    delete [] data;
    return 0;
}

