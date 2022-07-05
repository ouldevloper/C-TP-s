#include <iostream>
#include "Personne.h"
 using namespace std;

Personne::Personne():
    _nom("Filali"),
    _prenom("Ali"),
    _taille(1.9),
    _poids(80)
    {
        //cout << "Appel constructeur par defaut" << endl;
    };
/*
Personne::Personne(const string& nom,const string& prenom,const float& taille,const float& poids):
    _nom(nom),
    _prenom(prenom),
    _taille(taille),
    _poids(poids)
    {
        cout << "appel constructeur avec argument" << endl;
    };
    */
Personne::Personne(const string& _nom,const string& _prenom,const float& _taille,const float& _poids)
{

    this->_nom=_nom;
    this->_prenom=_prenom;
    this->_taille=_taille;
    this->_poids=_poids;
   // cout << "appel constructeur avec argument" << endl;

}

Personne::Personne(const Personne& p)
{
    this->_nom=p._nom;
    this->_prenom=p._prenom;
    this->_taille=p._taille;
    this->_poids=p._poids;


       // cout << "appel constructeur par copie "<< endl;
};

    //accesseurs
float Personne::get_taille()const
{
    return _taille;
}
float Personne::get_poids()const
{
    return _poids;
}
//modificateur

void Personne::set_taille(float taille)
{
    _taille=taille;
}

ostream& operator<<(ostream& os,const Personne& P)
{
    os << P._nom << " " << P._prenom << " a une taille " << P._taille << " et poids " << P._poids << " kg." <<endl;
    return os;
}

istream& operator >>(istream& is,Personne& P)
{
    cout << "Saisir les informations suivantes :"<< endl;
    cout << "Nom:";is>>P._nom;
    cout << "Prenom:";is>>P._prenom;
    cout << "Taille:";is>>P._taille;
    cout<< "Poids:";is>>P._poids;

return is;
}

void Personne::afficher()const
{
    cout << _nom << " " << _prenom << " " << _taille << " "<< _poids << endl;

}
//Méthode 1
TabPers::TabPers(int nb)
{
    this->_nb=nb;
    this->_tab=NULL;
    _tab=new Personne[nb];

}
//Méthode 2
/*
TabPers::TabPers(int nb):

    _nb(nb),
    _tab(NULL)
    {
        _tab=new Personne[nb];
    };
*/
TabPers::TabPers(const TabPers& tp):
    _nb(tp._nb),
    _tab(NULL)
    {
        _tab=new Personne[tp._nb];
        for(int i=0;i<_nb;i++)
            _tab[i]=tp._tab[i];
    }

TabPers::~TabPers()
{
    delete []_tab;
    _tab=NULL;

}
int TabPers::get_nb()const
{
    return this->_nb;
}
void TabPers::set_nb(int nb)
{

    this->_nb=nb;
}

float TabPers::taille_Moyenne()const
{
    float m=0;
    for(int i=0;i<_nb;i++)
        m+=_tab[i].get_taille();

    return m/_nb;
}

float TabPers::poids_Moyen(float tmin)const
{

    float m=0;
    int c=0;
    for (int i=0;i<_nb;i++)
    {
        if(_tab[i].get_taille()>tmin)
        {
            m+=_tab[i].get_poids();
            c++;
        }
    }
    return m/c;
}

Personne TabPers::infoTailleMax()const
{
    Personne p=_tab[0];
    for(int i=1;i<_nb;i++)
    {
        if(_tab[i].get_taille()>p.get_taille())
        p=_tab[i];
    }

    return p;
}

Personne TabPers::infoPoidsMin()const
{
    Personne p=_tab[0];
    for(int i=1;i<_nb;i++)
    {
        if(_tab[i].get_poids()<p.get_poids())
        p=_tab[i];
    }

    return p;
}

TabPers& TabPers::operator=(const TabPers& tp)
{
    this->_nb=tp._nb;
    _tab=NULL;
    _tab=new Personne[tp._nb];
    for(int i=0;i<_nb;i++)
        _tab[i]=tp._tab[i];

    return *this;
}

Personne TabPers::operator[](int i)
{
    if(i>=0 && i<_nb)
    return _tab[i];
    else
    {
    cout << " indice erroné, on retourne le premier ... "<< endl;
   return _tab[0];
    }
}

ostream& operator<<(ostream& fsortie, const TabPers& tp)
{

    for(int i=0;i<tp._nb;i++)
    fsortie << tp._tab[i];

    return fsortie;

}

istream& operator>>(istream& fentree,  TabPers& tp)
{

    for(int i=0;i<tp._nb;i++)
    fentree >> tp._tab[i];

    return fentree;

}








