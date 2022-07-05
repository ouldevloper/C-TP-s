#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED
#include <string>
#include <iostream>
using namespace std ;
class Compte
{
    int _numCompte;
    string _nom,_prenom;
    double _solde;
    public:

    Compte(string n,string p,double s=200);
    void get_solde()const;
    void afficher_info()const;
    void retirerArgent(double);
    void alimenterCompte(double);
    static int _nb_compte_cree;


};



#endif // COMPTE_H_INCLUDED
