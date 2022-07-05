#include "Ligne_Polygone.h"


Ligne_Polygone::Ligne_Polygone():
    _nbPts(0),
    _tabPts(NULL)
    {};

Ligne_Polygone::Ligne_Polygone(int nb):
    _nbPts(nb),
    _tabPts(NULL)
    {
        _tabPts=new PT2D[nb];
    };
Ligne_Polygone::Ligne_Polygone(const Ligne_Polygone& LP):
    _nbPts(LP._nbPts),
    _tabPts(NULL)
    {
       _tabPts=new PT2D[_nbPts];
       for(int i=0;i<_nbPts;i++)
        _tabPts[i]=LP._tabPts[i];

    };
Ligne_Polygone::~Ligne_Polygone()
{
    if(_tabPts!= NULL)
     {
         delete [] _tabPts;
        _tabPts=NULL;
     }
     _nbPts=0;

}

void Ligne_Polygone::set_sommet(int i, const PT2D& P)
{
    if(i>=0 && i <_nbPts)
        _tabPts[i]=P;
    else
        cout << " indice errone"<<endl;

}
PT2D Ligne_Polygone::get_sommet(int i)
{
    return _tabPts[i];

}

double Ligne_Polygone::perimetre()
{
    double p=0;
    for(int i=1;i<_nbPts;i++)
        p+=_tabPts[i].distance(_tabPts[i-1]);
    return p;

}

bool Ligne_Polygone::isOpen()
{
    if(_tabPts[0]==_tabPts[_nbPts-1])
        return false;
    return true;
}

ostream& operator<<(ostream& os, const Ligne_Polygone& LP)
{
    for (int i=0;i<LP._nbPts;i++)
        os << LP._tabPts[i];

        return os;
}
istream& operator>>(istream& is,  Ligne_Polygone& LP)
{
    cout << " Saisir les coordonnees des points constituant la ligne polygone : " <<endl;
    for (int i=0;i<LP._nbPts;i++)
        is >> LP._tabPts[i];

        return is;
}

Triangle::Triangle():
    Ligne_Polygone()
    {};

Triangle::Triangle(PT2D p1,PT2D p2, PT2D p3):

    Ligne_Polygone(3)
    {
        _tabPts[0]=p1;
        _tabPts[1]=p2;
        _tabPts[2]=p3;

    }
Triangle::Triangle(const Triangle& T):
    Ligne_Polygone(T)
    {};

Triangle::~Triangle(){};

double Triangle::perimetre()
{
    double p=0;
    for(int i=1;i<_nbPts;i++)
        p+=_tabPts[i].distance(_tabPts[i-1]);

    p+=_tabPts[0].distance(_tabPts[_nbPts-1]);
    return p;

}

bool Triangle::isOpen()
{
    return false;
}

