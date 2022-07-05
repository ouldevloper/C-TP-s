#ifndef LIGNE_POLYGONE_H_INCLUDED
#define LIGNE_POLYGONE_H_INCLUDED

#include "PT2D.h"

class Ligne_Polygone
{
    protected:
    int _nbPts;
    PT2D* _tabPts;

    public:
    Ligne_Polygone();
    Ligne_Polygone(int nb);
    Ligne_Polygone(const Ligne_Polygone& LP);
    ~Ligne_Polygone();

    PT2D get_sommet(int i);
    void set_sommet(int i, const PT2D& P);
    inline int get_nbPts() {return _nbPts;}

    virtual double perimetre();
    bool isOpen();

    friend ostream& operator<<(ostream& os, const Ligne_Polygone& LP);
    friend istream& operator>>(istream& is,  Ligne_Polygone& LP);

};

class Triangle : public Ligne_Polygone
{
    public:
    Triangle();
    Triangle(PT2D p1,PT2D p2, PT2D p3);
    Triangle(const Triangle& T);
    ~Triangle();

    double perimetre();
    bool isOpen();



};


#endif // LIGNE_POLYGONE_H_INCLUDED
