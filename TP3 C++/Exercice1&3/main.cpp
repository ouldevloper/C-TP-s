#include <iostream>
#include "Personne.h"
using namespace std;

int main()
{
    /*Personne P1;
    cout << P1;
   // P1.afficher();
    //cout << P1._nom <<endl;

    //cout << P1._nom << " " << P1._prenom << " a une taille " << P1._taille << " et poids " << P1._poids " kg." <<endl;
    //cout << P1.get_taille() << " " << P1.get_poids() <<endl;
    Personne P2("Semlaili","Laila",1.6,104);
    cout << P2;
    Personne P3(P2);
    cout << P3;
    Personne P4;
    cout << P4;
    cin >> P4;
    cout << P4;
*/
    int Taille;
    cout << "Donner la taille du tableau : ";cin >> Taille;

    TabPers tp(Taille);
    cin >> tp;
    cout <<"-------"<<endl;
    cout << tp;

    cout << tp[1];


    return 0;
}
