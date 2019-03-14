#include "Vector.h"
#include "funct.h"

int main(int argc, char** argv) {
    if(argc < 3){
        cout << "Uso del programma: " << argv[0] << "<n_data><filename> " << endl;
        return -1;
    }

    int ndata = atoi(argv[1]); // primo elemento da stringa a int
    char* filename = argv[2];

    Vector v(ndata);
    ifstream fin(filename);
    for (int j = 0; j < ndata; ++j) {
        double a;
        fin >> a;
        v.SetComponent(j, a);

        if (fin.eof()) {
            cout << "file read";
            exit(0);
        }
    }

    cout << "la media è: " << mean(v) << endl;
    cout << "la varianza è: " << var(v) << endl;
    cout << "la mediana è: " << mid(v) << endl;

    // manca output su file
    return 0;
}