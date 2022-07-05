#ifndef LIGNE_POLYGONALE_H_INCLUDED
#define LIGNE_POLYGONALE_H_INCLUDED
#include <iostream>
#include "pt2d.h"
class Ligne_Polygonale
{

    int _nbPts;
    PT2D* _tabPts;

    public:
    //constructeurs
    Ligne_Polygonale();
    Ligne_Polygonale(int nb);
    Ligne_Polygonale(const Ligne_Polygonale& LP);
    //destructeur
    ~Ligne_Polygonale();
    // retourne un point sommet en fonction de son indice
    PT2D get_sommet(int i);
    // retourne le nb de points sommets composant la ligne polygonale
    int get_nbPts();

    double perimetre();
    bool isOpen();

    friend ostream& operator<<(ostream& os,const Ligne_Polygonale& LP);
    friend istream& operator>>(istream& is, Ligne_Polygonale& LP);



};




#endif // LIGNE_POLYGONALE_H_INCLUDED
