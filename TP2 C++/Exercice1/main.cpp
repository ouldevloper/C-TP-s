#include <iostream>
#include "Personne.h"
using namespace std;

int main()
{
    /*
    Personne p;
    p.saisirinfo();
    p.afficherinfo();
    */
    int T;
    cout << "Saisir la taille du tableau : "; cin >>T;

    TabPers TP;

    TP.allouerTab(T);
    TP.remplirTab();
    TP.afficherTab();

    float tm=TP.tailleMoyenne();
    cout << "La taille moyenne du tableau est : " << tm << endl;

    float pm=TP.poidsMoyen(1.5);
    cout << " Le poids moyen des personnes est : " << pm << endl;

    Personne ptm=TP.infoPersTailleMax();
    cout << " La personne ayant la taille maximale :"<< endl;
    ptm.afficherinfo();

     Personne ppm=TP.infoPersPoidsMin();
    cout << " La personne ayant le poids minimal :"<< endl;
    ppm.afficherinfo();

    return 0;
}
