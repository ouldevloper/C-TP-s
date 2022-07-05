#include <iostream>
#include "Compte.h"
using namespace std;

int main()
{
    Compte C1("Filali","Ali",400);
    C1.afficher_info();
    C1.alimenterCompte(200);
    C1.retirerArgent(800);


    return 0;
}
