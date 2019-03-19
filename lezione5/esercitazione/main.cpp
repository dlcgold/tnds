#include <iostream>
#include "posizione.h"
#include <cstdlib>
using namespace std;
int main(int argc, char** argv) {
    if(argc!=4){
        std::cerr<<"Usage: "<<argv[0]<< " <x> <y> <z>" <<endl;
        return -1;
    }
    //atof converte da char* a double
    double x= atof(argv[1]);
    double y= atof(argv[2]);
    double z= atof(argv[3]);
    posizione P(x,y,z);
    cout<<"Coordinate cartesiane: "<< P.getX()<<", "<<P.getY()<<", "<<P.getZ()<<endl;
    cout<<"Coordinate cilindriche: "<< P.getRho() <<", "<<P.getPhi()<<", "<<P.getZ()<<endl;
    cout<<"Coordinate sferiche: "<< P.getR() <<", "<<P.getPhi()<<", "<<P.getTheta()<<endl;

    return 0;
}