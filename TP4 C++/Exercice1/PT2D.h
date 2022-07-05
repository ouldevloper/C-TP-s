#ifndef PT2D_H_INCLUDED
#define PT2D_H_INCLUDED
#include <iostream>
using namespace std;
class PT2D
{

    double _x,_y;
    public:
    PT2D();
    PT2D(double x,double y);
    PT2D(const PT2D& pt);
    ~PT2D();
    double get_x();
    double get_y();
    void set(double x=0,double y=0);
    void deplacer(double dx=1.2,double dy=0.5);
    double distance(const PT2D& pt);
    double norme();
    friend ostream& operator<<(ostream& os, const PT2D& pt);
    friend istream& operator>>(istream& is,  PT2D& pt);
    PT2D operator + (const PT2D& pt);
    PT2D operator - (const PT2D& pt);
    PT2D& operator += (const PT2D& pt);
    PT2D& operator -= (const PT2D& pt);
    PT2D& operator = (const PT2D& pt);
    bool operator == (const PT2D& pt);



    static int nb_Point;



};





#endif // PT2D_H_INCLUDED
