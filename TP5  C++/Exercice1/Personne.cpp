#include "Personne.h"

Personne::Personne():
    _nom(" "),_prenom(" "),_age(0){};

Personne::Personne(string n, string p,int a):
    _nom(n),_prenom(p),_age(a){};

Personne::Personne(const Personne& P):
    _nom(P._nom),_prenom(P._prenom),_age(P._age){};
Personne::~Personne(){};

 void Personne::afficher()
{
    cout << _nom << " " << _prenom << " " << _age<< " ";

}


Etudiant::Etudiant():
    Personne(),
    _id(0),
    _moyenne(0.) {};

Etudiant::Etudiant(string n, string p,int a,int id,float moy):
    Personne(n,p,a),
    _id(id),
    _moyenne(moy){};

Etudiant::Etudiant(const Etudiant& E):
    Personne(E),
    _id(E._id),
    _moyenne(E._moyenne){};

Etudiant::~Etudiant()
{};

void Etudiant::afficher()
{
    cout  << _id << " ";
    Personne::afficher();
    cout << _moyenne << endl;
}

