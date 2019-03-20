//
// Created by dlcgold on 19/03/19.
//

#ifndef INC_1_POSIZIONE_H
#define INC_1_POSIZIONE_H
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
#endif //INC_1_POSIZIONE_H
