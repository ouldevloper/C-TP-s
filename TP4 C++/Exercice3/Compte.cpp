#include "Compte.h"

int Compte::_nb_compte_cree=0;

Compte::Compte(string n,string p,double s):
    _nom(n),
    _prenom(p),
    _solde(s),
    _numCompte(++_nb_compte_cree)
    {};

void Compte::afficher_info() const
{
    cout << _numCompte << " | " << _nom << " | " << _prenom << " | "<< _solde <<endl;
}

void Compte::get_solde()const
{
    cout << " Le solde du compte N° " << _numCompte << " est " << _solde << "dhs."<<endl;
    if(_solde<50)
        cout << "Veuillez alimenter votre compte " <<endl;


}


void Compte::alimenterCompte(double m)
{
    cout << "Transaction effectuee avec succes"<<endl;
    _solde+=m;
    cout << "Votre nouveau solde est " << _solde << endl;
}

void Compte::retirerArgent(double m)
{

    if(m>_solde)
     {
         cout << " Operation refusee "<< endl;
        cout << " votre solde n'est que " << _solde <<endl;
     }
    else
    {
        _solde-=m;
        cout << " Operation reussie, votre solde est " << _solde << endl;

    }

}
