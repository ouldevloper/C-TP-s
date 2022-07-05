#include <iostream>
#include <math.h>
#include "pt2d.h"

using namespace std;

int PT2D::_nbPoints= 0;

PT2D::PT2D( double x, double y )
  : _x(x),
	_y(y)
{
    _nbPoints++;
}

PT2D::PT2D( const PT2D& rc )
  : _x(rc._x),
	_y(rc._y)
{
    PT2D::_nbPoints++;
};

PT2D::~PT2D()
{
    _nbPoints -= 1;
};

double PT2D::distance( const PT2D& pt )
{
    double XX = _x - pt._x;
	double YY = _y - pt._y;

	return( sqrt( XX*XX + YY*YY ) );
}

void PT2D::deplacer( double dx, double dy )
{
	_x += dx;
	_y += dy;
}

PT2D& PT2D::operator=(const PT2D& pt)
{
    if( &pt == this )
        return *this;

	_x = pt._x;
	_y = pt._y;

	return *this;
}

PT2D& PT2D::operator+=(const PT2D& pt)
{
	_x += pt._x;
	_y += pt._y;

	return *this;
}

bool PT2D::operator==(const PT2D& pt)
{
    double dist= distance( pt );
    if( dist < 1.e-6 )
        return true;
    return false;
}

/*
PT2D PT2D::operator+(const PT2D& pt)
{
 	PT2D ptSom( _x + pt._x, _y + pt._y, _z + pt._z );
 	return ptSom;
}*/

PT2D operator+(const PT2D& pt1, const PT2D& pt2)
{
  	PT2D ptSom( pt1._x + pt2._x, pt1._y + pt2._y );
 	return ptSom;
}


/// afficher point
ostream& operator<<(ostream& os, const PT2D& pt)
{
    os << "\t P( " << pt._x << ", " << pt._y << " )."  << endl;
    return os;
}

istream& operator>>(istream& is, PT2D& pt)        /// Saisir
{
    cout << "Saisir les 2 coordonnees x et y : "<< endl;
    cout << "x=";is >> pt._x;
    cout << "y=";is >> pt._y;

    return is;
}
