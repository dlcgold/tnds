//
// Created by dlcgold on 14/03/19.
//
#include "Vettore.h"

Vettore::Vettore(){
    m_N = 0;
    m_v = NULL;
};

Vettore::Vettore(int N){
    assert((N >= 0) && "Error: size must be positive");
    if(N < 0){
        cerr << "Error: size must be positive" << endl;
        exit(4);
    } else {
        m_N = N;
        m_v = new double[N];
        for (int i = 0; i < N; ++i) {
            m_v[i] = 0;
        }
    }
}

Vettore::Vettore(const Vettore& V) {
    m_N = V.GetN();
    m_v = new double[m_N];
    for (int i = 0; i < m_N ; ++i) {
        m_v[i] = V.GetComponent(i);
    }
}

Vettore& Vettore::operator=(const Vettore& V) {
    m_N = V.GetN();
    if(m_v) delete[] m_v;
    m_v = new double[m_N];
    for (int i = 0; i < m_N; ++i) {
        m_v[i] = V.GetComponent(i);
    }
    return *this;
}
Vettore::~Vettore(){
    delete[] m_v;
}

void Vettore::SetComponent(int i, double a) {
    assert((m_N > i) && "Error: index too big");
    if( i < m_N) {
        m_v[i] = a;
    } else {
        cerr << "Error: index" << i << ", dimension " << m_N << endl;
        exit(2);
    }
}

double Vettore::GetComponent(int i) const{
    assert((m_N > i) && "Error: index too big");
    if( i < m_N) {
        return m_v[i];
    } else {
        cerr << "Error: index" << i << ", dimension " << m_N << endl;
        exit(2);
    }
}
void Vettore::Scambia(int primo, int secondo) {
    double tmp = GetComponent(primo);
    SetComponent(primo, GetComponent(secondo));
    SetComponent(secondo, tmp);
}

double* Vettore::SortArray() {
    double* sorted = new double[m_N];
    for (int i = 0; i < m_N; ++i) {
        sorted[i] = m_v[i];
    }
    sort(sorted, sorted + m_N);

    return sorted;
}