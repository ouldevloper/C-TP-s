#include <iostream>
#include "SurchargeFct.h"
using namespace std;

int main()
{
    int i1=0,i2=0,i3=0;
    cout << "Entrer trois entiers" <<endl;
    cin >> i1 >> i2 >>i3;

    int iMax=maximum(i1,i2,i3);
    cout << "Le max est : " << iMax <<endl;

    double d1=0,d2=0,d3=0;
    cout << "Entrer trois reels" <<endl;
    cin >> d1 >> d2 >>d3;

    double dMax=maximum(d1,d2,d3);
    cout << "Le max est : " << dMax <<endl;

    return 0;
}
