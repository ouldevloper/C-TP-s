#include "PT2D.h"
#include "math.h"



int PT2D::nb_Point=0;

PT2D::PT2D():
    _x(0),
    _y(0)
    {
        nb_Point++;
    }
PT2D::PT2D(double x,double y):
    _x(x),_y(y)
    {
       nb_Point++;
    }
PT2D::PT2D(const PT2D& pt):
    _x(pt._x),_y(pt._y)
    {
       nb_Point++;
    }

PT2D::~PT2D()
    {
        nb_Point--;
    }

void PT2D::set(double x, double y)
{
    _x=x;
    _y=y;
}
double PT2D::get_x()
{
    return _x;
}

double PT2D::get_y()
{
    return _y;
}

void PT2D::deplacer(double dx,double dy)
{
    this->_x+=dx;
    this->_y+=dy;

}

double PT2D::distance(const PT2D& pt)
{
    double dx=this->_x-pt._x;
    double dy=this->_y-pt._y;

    return sqrt(dx*dx+dy*dy);

}
double PT2D::norme()
{

    return sqrt(_x*_x+_y*_y);
}

PT2D PT2D::operator+(const PT2D& pt)
{
    PT2D Ps(this->_x+pt._x,this->_y+pt._y);

    return Ps;
}
PT2D PT2D::operator-(const PT2D& pt)
{
    PT2D Ps(this->_x-pt._x,this->_y-pt._y);

    return Ps;
}

PT2D& PT2D::operator=(const PT2D& pt)
{
    if(this==&pt)
        return *this;
    this->_x=pt._x;
    this->_y=pt._y;

    return *this;
}

PT2D& PT2D::operator+=(const PT2D& pt)
{

    this->_x+=pt._x;
    this->_y+=pt._y;

    return *this;
}
PT2D& PT2D::operator-=(const PT2D& pt)
{

    this->_x-=pt._x;
    this->_y-=pt._y;

    return *this;
}

bool PT2D::operator==(const PT2D& pt)
{

    /*double d=distance(pt);
    if(d<1.e-6)
        return true;
    return false;*/
    if(this->_x==pt._x && this->_y==pt._y)
        return true;
    return false;

}
/*
bool PT2D::operator!=(const PT2D& pt)
{
    if(this->_x==pt._x && this->_y==pt._y)
        return false;
    return true;

}
*/
ostream& operator<<(ostream& os, const PT2D& pt)
{

    os <<"P("<<pt._x<<","<<pt._y<<")"<<endl;
    return os;

}
istream& operator>>(istream& is,  PT2D& pt)
{
    cout << "Entrer les coordonnees x et y du point : " <<endl;
    cout << "x=";is>>pt._x;
    cout << "y=";is>>pt._y;
    return is;

}
