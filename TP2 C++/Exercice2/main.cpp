#include <iostream>
#include "PT3D.h"
using namespace std;

int main()
{
    PT3D p1,p2,p3;

    cout << " Saisir les coordonnees du point1" << endl;
    cout << " x="; cin >> p1._x;
    cout << " y="; cin >> p1._y;
    cout << " z="; cin >> p1._z;

    cout << " Saisir les coordonnees du point2" << endl;
    cout << " x="; cin >> p2._x;
    cout << " y="; cin >> p2._y;
    cout << " z="; cin >> p2._z;

    cout << " Saisir les coordonnees du point3" << endl;
    cout << " x="; cin >> p3._x;
    cout << " y="; cin >> p3._y;
    cout << " z="; cin >> p3._z;

    Triangle T={p1,p2,p3};

    cout << " Le perimtre du triangle vaut : " << T.calculerPerimetre() << endl;
    cout << " L aire du triangle vaut : " << T.calculerAire() << endl;

    PT3D p4;
    p4.set(1.5,5);
    Tertraedre Te={p1,p2,p3,p4};
    cout << " l'aire du tetra est " << Te.calculerAire() <<endl;









    return 0;
}
