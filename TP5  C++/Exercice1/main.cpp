#include <iostream>
#include "Personne.h"
using namespace std;

int main()
{
    Personne P1("Rabi","Mouhcine",30);
    Etudiant E1("Rami","Ali",19,1,17.5);


    P1.afficher();
    cout << endl;
    E1.afficher();

    //  Personne* pp=new Personne(P1);
    Personne* pp;
    pp=&P1;
    pp->afficher();
    cout << endl;
    //delete pp;

   // Personne* pe=new Etudiant(E1);
    pp=&E1;
    pp->afficher();
    cout << endl;

    //delete pp;




    return 0;
}
