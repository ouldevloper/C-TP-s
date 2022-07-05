#include "Personne.h"
#include <iostream>

using namespace std;
void Personne::saisirinfo()
{
    cout << "La saisie des coordonnées " << endl;
    cout << " Nom : ";cin >> _nom;
    cout << " Prenom : ";cin >> _prenom;
    cout << " Taille : ";cin >> _taille;
    cout << " Poids : ";cin >> _poids;

}

void Personne::afficherinfo()
{
    cout << _nom << " " << _prenom << " a une taille de " << _taille << " m et un poids de " << _poids << " kg." << endl;

}


void TabPers::allouerTab(int nb)
{
    _nb=nb;
    _Tab=new Personne[nb];

}

void TabPers::remplirTab()
{
    for (int i=0;i<_nb;i++)
        _Tab[i].saisirinfo();

}

void TabPers::afficherTab()
{
    if (_nb==0)
        cout << "La liste est vide " << endl;
    else{
        for (int i=0;i<_nb;i++)
        _Tab[i].afficherinfo();
        }
}

void TabPers::desallouerTab()
{
    if(_Tab != NULL)
  {
      delete [] _Tab;
      _Tab=NULL;
  }
}

float TabPers::tailleMoyenne()
{

    float tm=0;
    for(int i=0;i<_nb;i++)
        tm+=_Tab[i]._taille;

    tm/=_nb;

    return tm;
}

float TabPers::poidsMoyen(float tmin)
{

    float pm=0;
    int c=0;
    for(int i=0;i<_nb;i++)
        if (_Tab[i]._taille>tmin)
       {
           pm+=_Tab[i]._poids;
           c++;
       }

    pm/=c;

    return pm;
}

Personne TabPers::infoPersTailleMax()
{
    Personne p=_Tab[0];

    for (int i=1;i<_nb;i++)
    {
        if(_Tab[i]._taille>p._taille)
        {
           p=_Tab[i];
        }

    }
        return p;
}

Personne TabPers::infoPersPoidsMin()
{
    Personne p=_Tab[0];

    for (int i=1;i<_nb;i++)
    {
        if(_Tab[i]._poids<p._poids)
        {
           p=_Tab[i];
        }

    }
        return p;
}
