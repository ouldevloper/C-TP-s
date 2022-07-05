#ifndef TETRA_H_INCLUDED
#define TETRA_H_INCLUDED
#include <iostream>
using namespace std;
class PT3D
{

    double _x,_y,_z;

    public:

    PT3D();
    PT3D(const double& x,const double& y, const double& z);
    PT3D(const PT3D& p);
    ~PT3D();

    double get_x()const;
    double get_y()const;
    double get_z()const;

    void set_x(double x);
    void set_y(double y);
    void set_z(double z);

    double distance(const PT3D& p)const;
    void deplacer(double x=1.2,double y=1.5,double z=0.5);

    PT3D& operator=(const PT3D& p);
    PT3D& operator+(const PT3D& p);

    friend ostream& operator << (ostream& os, const PT3D& p);
    friend istream& operator >> (istream& is,  PT3D& p);


};


class Triangle
{

    PT3D _p1,_p2,_p3;
    public:
    Triangle(const PT3D& p1,const PT3D& p2,const PT3D& p3);

    void set_p1(const PT3D& p1);
    void set_p2(const PT3D& p2);
    void set_p3(const PT3D& p3);

    PT3D get_p(int i) const;
    double calculerPerimetre();
    double calculerAire();

    private:
    double calculerPerimetre(double,double,double);
    double calculerAire(double,double,double);


};

class Tetra
{
    PT3D _p1,_p2,_p3,_p4;
    public:

    Tetra(const PT3D& p1,const PT3D& p2,const PT3D& p3,const PT3D& p4);
    double calculerAire()const;

};

#endif // TETRA_H_INCLUDED
