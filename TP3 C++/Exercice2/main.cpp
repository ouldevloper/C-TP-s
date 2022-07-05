#include <iostream>
#include "Tetra.h"
using namespace std;

int main()
{

    PT3D P1,P2,P3;

    cin >>P1>>P2>>P3;

    Triangle T(P1,P2,P3);

    cout << "Le perimetre du triangle vaut : " << T.calculerPerimetre() << endl;
    cout << "L'aire du triangle vaut : "<< T.calculerAire()<< endl;

    PT3D P4=P1;

    Tetra Te(P1,P2,P3,P4);

    cout << " L'aire du tetra vaut : " << Te.calculerAire()<<endl;

    return 0;
}
