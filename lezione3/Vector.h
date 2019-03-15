//
// Created by dlcgold on 15/03/19.
//

#ifndef LEZIONE3_VECTOR_H
#define LEZIONE3_VECTOR_H

#include <iostream>
#include <assert.h>
using namespace std;

template <typename T> class Vector{
public:
    Vector(){
        m_N = 0;
        m_v = NULL;
    };

    Vector(int N){
        assert((N >= 0) && "Error: size must be positive");
        if(N < 0){
            cerr << "Error: size must be positive" << endl;
            exit(4);
        } else {
            m_N = N;
            m_v = new T[N];
            for (int i = 0; i < N; ++i) {
                m_v[i] = 0;
            }
        }
    };

    Vector(const Vector & V){
      m_N = V.GetN();
      m_v = new T[m_N];
        for (int i = 0; i < V.GetN(); ++i) {
            m_v[i] = V.GetComponent(i);
        }
    };

    Vector& operator = (const Vector& V){
        m_N = V.GetN();
        if(m_v) delete[] m_v;
        m_v = new double[m_N];
        for (int i = 0; i < m_N; ++i) {
            m_v[i] = V.GetComponent(i);
        }
        return *this;
    };

    ~Vector(){
        delete[] m_v;
    };

    int GetN() const{
        return m_N;
    };

    T GetComponent(int i) const{
        assert((m_N > i) && "Error: index too big");
        if( i < m_N) {
            return m_v[i];
        } else {
            cerr << "Error: index" << i << ", dimension " << m_N << endl;
            exit(2);
        }
    };

    void SetComponent(int i, T a){
        assert((m_N > i) && "Error: index too big");
        if( i < m_N) {
            m_v[i] = a;
        } else {
            cerr << "Error: index" << i << ", dimension " << m_N << endl;
            exit(2);
        }
    };

    void Scambia(int primo, int secondo) {
        double tmp = GetComponent(primo);
        SetComponent(primo, GetComponent(secondo));
        SetComponent(secondo, tmp);
    };

    T* SortArray() {
        T* sorted = new T[m_N];
        for (int i = 0; i < m_N; ++i) {
            sorted[i] = m_v[i];
        }
        sort(sorted, sorted + m_N);
        return sorted;
    }

private:
    int m_N;
    T* m_v;
};
#endif //LEZIONE3_VECTOR_H
