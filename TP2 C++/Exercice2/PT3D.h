#ifndef PT3D_H_INCLUDED
#define PT3D_H_INCLUDED

struct PT3D
{
    double _x,_y,_z;

    void set (double x,double y,double z=0);
    double distance( const PT3D& p);
    void deplacer(double dx= 1.2, double dy= 1., double dz= 0.5);

};

struct Triangle
{
    PT3D _p1,_p2,_p3;

    void set( const PT3D& pt1, const PT3D& pt2, const PT3D& pt3 );
    double calculerPerimetre ( );
    double calculerAire ( );
    private :
    double calculerPerimetre(double , double, double);
    double calculerAire(double , double, double);
};

struct Tertraedre
{
    PT3D _p1,_p2,_p3,_p4;
    double calculerAire( );
};



#endif // PT3D_H_INCLUDED
