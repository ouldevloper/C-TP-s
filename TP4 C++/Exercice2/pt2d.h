#ifndef _PT2D_
#define _PT2D_

#include <iostream>
using namespace std;

class PT2D
{
    double _x, _y;

  public:
    PT2D( double x= 0., double y= 0. );
    PT2D( const PT2D& pt );
    ~PT2D();

    void set_x( double val ){ _x= val; };
    void set_y( double val ){ _y= val; };

    inline double x() const { return _x; };
    inline double y() const { return _y; };

    inline double& x(){ return _x; };
    inline double& y(){ return _y; };

	void   deplacer( double dx= 1., double dy= 0. );
	double distance( const PT2D& pt );

	PT2D& operator=(const PT2D& pt);
	PT2D& operator+=(const PT2D& pt);
	bool operator==(const PT2D& pt);

	/// PT2D operator+(const PT2D& pt);

	friend PT2D operator+( const PT2D& pt1, const PT2D& pt2 );
	friend ostream& operator<<(ostream& os, const PT2D& pt);  /// afficher
    friend istream& operator>>(istream& is, PT2D& pt);        /// Saisir

  public:
    static int _nbPoints;
};

#endif
