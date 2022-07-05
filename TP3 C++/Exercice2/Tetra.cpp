#include "Tetra.h"
#include "math.h"

PT3D::PT3D():
    _x(0),
    _y(0),
    _z(0)
    {};

PT3D::PT3D(const double& x,const double& y, const double& z):
    _x(x),
    _y(y),
    _z(z)
    {};

PT3D::PT3D(const PT3D& p):
    _x(p._x),
    _y(p._y),
    _z(p._z)
    {};

PT3D::~PT3D()
{};

double PT3D::get_x() const
{
    return _x;
}
double PT3D::get_y() const
{
    return this->_y;
}

double PT3D::get_z()const
{
    return this->_z;
}

void PT3D::set_x(double x)
{
    this->_x=x;

}
void PT3D::set_y(double y)
{
    _y=y;
}
void PT3D::set_z(double z)
{
    _z=z;
}
double PT3D::distance(const PT3D& p)const
{
    double dx,dy,dz;
    dx=_x-p._x;
    dy=_y-p._y;
    dz=_z-p._z;

    return sqrt(dx*dx+dy*dy+dz*dz);

}

void PT3D::deplacer(double x,double y,double z)
{
    _x+=x;
    _y+=y;
    _z+=z;
}

PT3D& PT3D::operator=(const PT3D& p)
{
    this->_x=p._x;
    this->_y=p._y;
    this->_z=p._z;
    return *this;
}

PT3D& PT3D::operator+(const PT3D& p)
{
    this->_x+=p._x;
    this->_y+=p._y;
    this->_z+=p._z;
    return *this;
}

ostream& operator<<(ostream& os, const PT3D& p)
{
    os<<"\t P("<<p._x<<","<<p._y<<","<<p._z<<")."<<endl;
    return os;
}

istream& operator>>(istream& is,  PT3D& p)
{
    cout << "Saisir les trois coordonnees : "<<endl;
    cout <<"x:";is>>p._x;
    cout <<"y:";is>>p._y;
    cout <<"z:";is>>p._z;

    return is;
}

Triangle::Triangle(const PT3D& p1,const PT3D& p2,const PT3D& p3):
    _p1(p1),
    _p2(p2),
    _p3(p3)
    {};

void Triangle::set_p1(const PT3D& p)
{
    _p1=p;
}
void Triangle::set_p2(const PT3D& p)
{
    _p2=p;
}
void Triangle::set_p3(const PT3D& p)
{
    _p3=p;
}

PT3D Triangle::get_p(int i)const
{
    if(i==1)
        return _p1;
    if(i==2)
        return _p2;
    if(i==3)
        return _p3;

    return _p1;
}

double Triangle::calculerPerimetre(double a, double b, double c)
{
    return a+b+c;
}
double Triangle::calculerPerimetre()
{
    double a,b,c;
    a=_p1.distance(_p2);
    b=_p2.distance(_p3);
    c=_p3.distance(_p1);

    return calculerPerimetre(a,b,c);

}

double Triangle::calculerAire(double a, double b ,double c)
{
    double s=calculerPerimetre(a,b,c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

double Triangle::calculerAire()
{
    double a,b,c;
    a=_p1.distance(_p2);
    b=_p2.distance(_p3);
    c=_p3.distance(_p1);

    return calculerAire(a,b,c);

}

Tetra::Tetra(const PT3D& p1,const PT3D& p2,const PT3D& p3,const PT3D& p4):
    _p1(p1),
    _p2(p2),
    _p3(p3),
    _p4(p4)
    {};

double Tetra::calculerAire()const
{
    Triangle T1(_p1,_p2,_p3);
    Triangle T2(_p1,_p3,_p4);
    Triangle T3(_p1,_p4,_p2);
    Triangle T4(_p2,_p3,_p4);

    double a1=T1.calculerAire();
    double a2=T2.calculerAire();
    double a3=T3.calculerAire();
    double a4=T4.calculerAire();

    return a1+a2+a3+a4;
}
