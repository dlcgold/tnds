//
// Created by dlcgold on 25/09/18.
//

#include <iostream>
#include "Particella.h"
#include "Elettrone.h"
#include "CorpoCeleste.h"

using namespace std;

int main(){
    Particella *a = new Particella(1.,1.6E-19);
    Elettrone *e = new Elettrone();
    CorpoCeleste *c = new CorpoCeleste("Terra", 5.9742E24,6.372797E6);

    cout<<"Particella."<<endl;
    cout<<a->GetMassa()<<", "<<a->GetCarica()<<endl;
    a->Print();

    cout<<"Elettrone:"<<endl;
    cout<<e->GetMassa()<<", "<<e->GetCarica()<<endl;
    e->Print();

    cout<<"CorpoCeleste:"<<endl;
    cout<<c->GetMassa()<<", "<<c->GetCarica()<<endl;
    cout<<c->GetNome()<<endl;
    c->Print();

    return 0;
}