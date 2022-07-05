#include <iostream>
#include "NbPremier.h"
using namespace std;

int main()
{
   int nb=0;
   do{
        cout << "saisir un entier positif : ";
        cin >> nb;
    }while (nb <=0);

    if(testerSiPremier(nb))
        cout << "Le nombre " << nb << " est premier" <<endl;
    else
        cout << "le nombre " << nb << " est non premier "<< endl;

    int nps=rechercherNbPremierSup(nb);

     cout << "le nombre premier superieur a " << nb << " est :" << nps << endl;

    return 0;
}
