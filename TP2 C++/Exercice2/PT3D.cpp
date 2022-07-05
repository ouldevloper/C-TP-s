#include "PT3D.h"
#include <math.h>
void PT3D::set(double x, double y, double z)
{
        _x=x;
        _y=y;
        _z=z;
}

double PT3D::distance(const PT3D& p)
{
      double dx,dy,dz;

      dx=_x-p._x;
      dy=_y-p._y;
      dz=_z-p._z;

      return sqrt(dx*dx+dy*dy+dz*dz);
}

void PT3D::deplacer(double x,double y, double z)
{
        _x+=x;
        _y+=y;
        _z+=z;
}

void Triangle::set(const PT3D& pt1, const PT3D& pt2, const PT3D& pt3)
{
    _p1=pt1;
    _p2=pt2;
    _p3=pt3;

}
double Triangle::calculerPerimetre(double a, double b, double c)
{
    return(a+b+c);
}


double Triangle::calculerPerimetre()
{

    double a,b,c;
    a=_p1.distance(_p2);
    b=_p2.distance(_p3);
    c=_p3.distance(_p1);

     return calculerPerimetre(a,b,c);

}


double Triangle::calculerAire(double x, double y, double z)
{

    double s=calculerPerimetre(x,y,z)/2;
    double res=sqrt(s*(s-x)*(s-y)*(s-z));
    return res;
}

double Triangle::calculerAire()
{
    double a,b,c;
    a=_p1.distance(_p2);
    b=_p2.distance(_p3);
    c=_p3.distance(_p1);

    return calculerAire(a,b,c);

}

double Tertraedre::calculerAire()
{
    Triangle T1={_p1,_p2,_p3};
    Triangle T2={_p1,_p2,_p4};
    Triangle T3={_p1,_p3,_p4};
    Triangle T4={_p2,_p3,_p4};

    double a1,a2,a3,a4;

    a1=T1.calculerAire();
    a2=T2.calculerAire();
    a3=T3.calculerAire();
    a4=T4.calculerAire();

    return (a1+a2+a3+a4);

}




