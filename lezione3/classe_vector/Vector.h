//
// Created by dlcgold on 15/03/19.
//

#ifndef CLASSE_VECTOR_VECTOR_H
#define CLASSE_VECTOR_VECTOR_H

#include <iostream>
#include <fstream>
#include <cmath>
#include <assert.h>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
// lettura da file
template <typename T> vector<T> Read(unsigned int N, char* filename){
    vector<T> v;
    ifstream in(filename);

    assert(in && "Error: file not found");
    if(!in){
        cout <<  "Error: file "<< filename << " not found" << endl;
        exit(11);
    } else {
        for (unsigned int i = 0; i < N; ++i) {
            T val = 0;
            in >> val;
            v.push_back(val);
            assert(!(in.eof()) && "file read");
            if(in.eof()){
                cout << "file read" << endl;
                exit(11);
            }
        }
    }
    return v;
}

// read più bello
template <typename T> vector<T> Readb( unsigned int N , const char* filename ) {

    ifstream in(filename);
    assert(  in && "Input file does not exist"  ) ;
    if ( !in ) {
        cout << "Cannot open file " << filename << endl;
        exit(11);
    }

    vector<T> v;
    copy_n ( istream_iterator<T>(in) , N, back_inserter(v) );

    in.close();

    return v;

}

//read ancora più bello
template <typename T> vector<T> ReadAll( char* filename ) {

    ifstream in(filename);
    assert(  in && "Input file does not exist"  ) ;
    if ( !in ) {
        cout << "Cannot open file " << filename << endl;
        exit(11);
    }

    vector<T> v ((istream_iterator<T>(in)) ,istream_iterator<T>()) ;

    in.close();

    return v;

}

// print su terminale
template <typename T> void Print(const vector<T> & v ){
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }
}

// print bello
template <typename T> void Printb( T _start , T _end ) {
    for ( T it = _start; it != _end; it++ ) cout << *it << endl;
    copy(_start, _end, ostream_iterator<double>(cout, " "));
}

// print su file
template  <typename T> void Print(const vector<T> & v, const char* filename){
    ofstream out(filename);
    if(!out) {
        cerr << "Error with file" << filename << endl;
        return;
    }
    for (int i = 0; i < v.size(); ++i) {
        out << v[i] << endl;
    }
    out.close();
    return;
}

// print su file bello
template <typename T> void Print(  T _start , T _end  , char* filename ) {
    ofstream out(filename);
    if ( !out ) {
        cerr << "Non posso creare il file " << filename << endl;
        exit(2);
    }
    copy( _start, _end, ostream_iterator< double >( out, "\n" ));
    out.close();
}

template <typename T> T mean(const vector<T> & v){
    T somma = 0;
    T media;
    for (int i = 0; i < v.size(); ++i) {
        somma += v[i];
    }
    media = somma / v.size();
    return media;
}

// media bella
template <typename T> double CalcolaMedia( T _start , T _end ) {

    double accumulo = 0;

    for ( T it = _start; it != _end; it++ ) {
        accumulo += *it ;
    }

    return accumulo / static_cast<double>(_end-_start)  ;

}
// media ancora più bella
template <typename T> double CalcolaMediaAcc( T _start , T _end ) {

    return accumulate(_start, _end, 0.0) /  static_cast<double>(_end-_start)   ;

}

template <typename T> T var(const vector<T> & v){
    T somma = 0;
    T media = mean(v);
    for (int i = 0; i < v.size(); ++i) {
        somma = pow(v[i] - media, 2);
    }
    T varianza = somma / v.size();
    return varianza;
}

// varianza più bella
template <typename T> double CalcolaVar( T _start , T _end ) {

    double mean = accumulate(_start, _end , 0.0)  /  static_cast<double>(_end-_start)  ;

    double sq_sum = inner_product(_start, _end, _start, 0.0);
    return sqrt(sq_sum /static_cast<double>(_end-_start)   - mean * mean);

}

template <typename T> T mid(vector<T> & v){
    sort(v.begin(), v.end());
    T mediana = 0;
    if(v.size() % 2 == 0) {
        mediana = (v[v.size() / 2] + v[v.size() / 2 +1]) /2;
    } else {
        mediana = v[v.size() / 2];
    }
    return mediana;
}
#endif //CLASSE_VECTOR_VECTOR_H
