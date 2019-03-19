//
// Created by dlcgold on 15/03/19.
//

#include "funct.h"
#include "TAxis.h"
#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>

OverallQuantities CalcolaMedieTotali(const vector<comune> & comuni){
    OverallQuantities quantity;
    double meanc = 0;
    double abitantic = 0;
    for (int i = 0; i < comuni.size(); ++i) {
        meanc += comuni[i].getMedia() * comuni[i].getNabitanti();
        abitantic += comuni[i].getNabitanti();
    }
    quantity.mean = meanc / abitantic;
    quantity.num = abitantic;
    return quantity;
}

TGraph CalcolaDistribuzioneEta (const vector<comune> & comuni){
    int size = comuni[0].getDistribuzione().size();
    vector<int> accumulation(size, 0); // vettore lungo size riempito di 0
    for (int i = 0; i < comuni.size(); ++i) {
        for (int j = 0; j < size; ++j) {
            accumulation[j] += comuni[i].getBin(j);
        }
    }
    TGraph g_all;
    unsigned int index = 0;
    for (int k = 0; k < 100; ++k) {
        g_all.SetPoint(index, k+ 0.5, accumulation[k]);
        index++;
    }

    g_all.GetXaxis()->SetTitle("Eta'");
    g_all.GetYaxis()->SetTitle("Numero");
    g_all.SetLineColor(1);
    g_all.SetMarkerStyle(21);
    g_all.SetMarkerColor(1);

    return g_all;
}

const int DISTRICT_NAME_COL = 1;
const int AGE_COL = 2;
const int MALE_NUM_COL = 7;
const int FEMALE_NUM_COL = 12;

vector<comune> ReadFromFile(const string filename) {

    cout << "===>>> Inizio lettura da file " << filename << endl;

    vector<comune> vett;

    ifstream f(filename);

    string line;
    unsigned int index = 0;

    vector<int> uomini;
    vector<int> donne;
    vector<int> tutti;

    if (!f) {
        cerr << "Il file di input non esiste!\n";
    }

    vector<string> fields_in_line;
    while (getline(f, line)) {
        istringstream ss(line);

        fields_in_line.clear();
        while (ss) {
            string column;
            if (!getline(ss, column, ','))
                break;
            fields_in_line.push_back(column);
        }

        index++;

        if (fields_in_line[AGE_COL] == "999") {
            string nome = fields_in_line[DISTRICT_NAME_COL];
            comune newcomune(nome, tutti);
            vett.push_back(newcomune);
            index = 0;
            uomini.clear();
            donne.clear();
            tutti.clear();
        } else {
            int male_num = atoi(fields_in_line[MALE_NUM_COL].c_str());
            int female_num = atoi(fields_in_line[FEMALE_NUM_COL].c_str());
            uomini.push_back(male_num);
            donne.push_back(female_num);
            tutti.push_back(male_num + female_num);
        }

        if ((vett.size() % 1000 == 0) && index == 0) {
            cout << "Finora caricati " << vett.size() << " comuni, procedo." << endl;
        }
    }

    cout << "===>>> Lettura terminata : caricati " << vett.size() << " comuni."
         << endl;

    return vett;
}

void PrintStat(const OverallQuantities & stats) {
    cout << "Informazioni statistiche generali ================" << endl;

    std::cout << "Età media: " << stats.mean << "\n";
    std::cout << "Numero di abitanti: " << stats.num << "\n";

    cout << "==================================================" << endl;
}