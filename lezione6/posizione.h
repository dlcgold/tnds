//
// Created by dlcgold on 20/03/19.
//

#ifndef LEZIONE6_POSIZIONE_H
#define LEZIONE6_POSIZIONE_H

class posizione{
public:
    posizione();
    posizione(double x, double y, double z);
    ~posizione();
    double getX() const;
    double getY() const;
    double getZ() const;
    double getR() const;
    double getPhi() const;
    double getTheta() const;
    double getRho() const;
    double Distanza(const posizione&) const;

private:
    double m_x;
    double m_y;
    double m_z;
};
#endif //ESERCITAZIONE_POSIZIONE_H
