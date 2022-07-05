#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include <string>

using namespace std;

struct Personne
{
    string _nom,_prenom;
    float _taille,_poids;

    void saisirinfo();
    void afficherinfo();

};

struct TabPers
{
   int _nb;
   Personne* _Tab;


   void allouerTab(int nb);
   void remplirTab();
   void afficherTab();
   void desallouerTab();
   float tailleMoyenne();
   float poidsMoyen(float tailleMin=1.5);
   Personne infoPersTailleMax();
   Personne infoPersPoidsMin();

};






#endif // PERSONNE_H_INCLUDED
