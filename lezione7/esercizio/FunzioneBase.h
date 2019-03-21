//
// Created by dlcgold on 20/03/19.
//

#ifndef LEZIONE7_FUNZIONEBASE_H
#define LEZIONE7_FUNZIONEBASE_H


class FunzioneBase {
public:
    virtual double Eval(double x) const = 0;
};

class Tan : public FunzioneBase{
    virtual double Eval(double x) const;
};

class Parabola : public FunzioneBase {
public:
    Parabola();
    Parabola(double a, double b, double c);
    ~Parabola();
    virtual double Eval(double x) const;

    void setA(double a){
        m_a = a;
    }
    double getA() const{
        return m_a;
    }

    void setB(double b){
        m_b = b;
    }
    double getB() const{
        return m_b;
    }

    void setC(double c){
        m_c = c;
    }
    double getC() const{
        return m_c;
    }

private:
    double m_a, m_b, m_c;
};

class solutore{
public:
    virtual double CercaZeri(double xmin, double xmax, const FunzioneBase* f) = 0;
    void SetPrecisione(double epsilon) {
        _prec = epsilon;
    };
    double GetPrecision() {
        return _prec;
    };

    void SetN(int N){
        _N=N ;
    }

protected:
    int _N;
    double _xmin;
    double _xmax;
    double _prec;
    const FunzioneBase *_f;
};

class bisezione : public solutore{
public:
    bisezione(int N, double xmin, double xmax, double prec, const FunzioneBase* f);
    ~bisezione();
    virtual double CercaZeri(double xmin, double xmax, const FunzioneBase* f) ;
};

int sign(double x);

#endif //LEZIONE7_FUNZIONEBASE_H
