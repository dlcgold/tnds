//
// Created by dlcgold on 14/03/19.
//
#include "Vector.h"

Vector::Vector(){
    m_N = 0;
    m_v = NULL;
};

Vector::Vector(int N){
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

Vector::Vector(const Vector& V) {
    m_N = V.GetN();
    m_v = new double_t[m_N];
    for (int i = 0; i < m_N ; ++i) {
        m_v[i] = V.GetComponent(i);
    }
}

Vector& Vector::operator=(const Vector& V) {
    m_N = V.GetN();
    if(m_v) delete[] m_v;
    m_v = new double[m_N];
    for (int i = 0; i < m_N; ++i) {
        m_v[i] = V.GetComponent(i);
    }
    return *this;
}
Vector::~Vector(){
    delete[] m_v;
}

void Vector::SetComponent(int i, double a) {
    assert((m_N > i) && "Error: index too big");
    if( i < m_N) {
        m_v[i] = a;
    } else {
        cerr << "Error: index" << i << ", dimension " << m_N << endl;
        exit(2);
    }
}

double Vector::GetComponent(int i) const{
    assert((m_N > i) && "Error: index too big");
    if( i < m_N) {
        return m_v[i];
    } else {
        cerr << "Error: index" << i << ", dimension " << m_N << endl;
        exit(2);
    }
}
void Vector::Scambia(int primo, int secondo) {
    double tmp = GetComponent(primo);
    SetComponent(primo, GetComponent(secondo));
    SetComponent(secondo, tmp);
}