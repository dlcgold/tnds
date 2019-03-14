#include "Vector.h"

int main() {

    // test Vector senza argomenti
    Vector vnull;
    cout << "vnull: dim " << vnull.GetN() << endl;
    // test Vector con argomenti
    Vector Vec(10);
    cout << "vec: dim " << Vec.GetN() << endl;

    for (int i = 0; i < Vec.GetN(); ++i) {
        cout << Vec.GetComponent(i) << " " << endl;
    }

    //metodo alternativo:
    Vector* v = new Vector(10);
    cout << "vec: dim " << v -> GetN() << endl;

    for (int i = 0; i < v -> GetN(); ++i) {
        cout << v -> GetComponent(i) << " " << endl;
    }

    // campio il contenuto di Vec
    for (int j = 0; j < Vec.GetN(); ++j) {
        Vec.SetComponent(j, j + 2);
    }
    cout << "dopo modifiche" << endl;
    cout << "vec: dim " << Vec.GetN() << endl;

    for (int i = 0; i < Vec.GetN(); ++i) {
        cout << Vec.GetComponent(i) << " " << endl;
    }

    // uso il copy constructor

    Vector w = Vec;
    cout << "dati di w " << endl;
    cout << "w: dim " << w.GetN() << endl;

    for (int i = 0; i < w.GetN(); ++i) {
        cout << w.GetComponent(i) << " " << endl;
    }

    // scambio un componente di Vec
    Vec.SetComponent(4, 99);
    cout << "dopo modifiche" << endl;
    cout << "vec: dim " << Vec.GetN() << endl;

    for (int i = 0; i < Vec.GetN(); ++i) {
        cout << Vec.GetComponent(i) << " " << endl;
    }

    cout << "vediamo che fa w" << endl;
    cout << "dati di w " << endl;
    cout << "w: dim " << w.GetN() << endl;

    for (int i = 0; i < w.GetN(); ++i) {
        cout << w.GetComponent(i) << " " << endl;
    }

    // operatore di assegnazione
    Vector z(10);
    z = w;
    cout << "dati di z " << endl;
    cout << "z: dim " << z.GetN() << endl;

    for (int i = 0; i < z.GetN(); ++i) {
        cout << z.GetComponent(i) << " " << endl;
    }

    return 0;
}