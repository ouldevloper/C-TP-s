#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Personne
{
    protected:
    string _nom,_prenom;
    int _age;
    public:
    Personne();
    Personne(string n, string p,int a);
    Personne(const Personne& P);
    ~Personne();
    inline string get_nom(){return _nom;}
    inline string get_prenom(){return _prenom;}
    inline int get_age(){return _age;}

    virtual void afficher();

};


class Etudiant:public Personne
{
    int _id;
    float _moyenne;
    public:

    Etudiant();
    Etudiant(string n, string p,int a,int id,float moy);
    Etudiant(const Etudiant& E);
    ~Etudiant();

    inline float get_moyenne(){return _moyenne;}

     void afficher();

};



#endif // PERSONNE_H_INCLUDED
