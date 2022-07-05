#include <iostream>
#include "Ligne_Polygonale.h"
using namespace std;

int main()
{
    PT2D pt1(1, 0), pt2(1, 1), pt3(2, 0);

    int t;
    cout << "Saisir le nombre de sommets : ";cin >> t;

    Ligne_Polygonale LP(t);

    cout << LP;
    cin >> LP;
    cout << LP;

    cout << "Le perimetre de la ligne polygonale vaut : " << LP.perimetre() << endl;
    /// Test si la ligne polygonale est ouverte
     cout << "La ligne polygonale est-elle ouverte: " << LP.isOpen() << endl;
     cout << "------------" << endl;



    return 0;
}
