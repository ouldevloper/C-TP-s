#include <iostream>
#include "TabStatique.h"
using namespace std;

int main()
{
   double Tab[T];
   remplirTab(Tab,T);
   afficherTab(Tab,T);
   double m=calculerMoyenne(Tab,T);
   cout << "La moyenne est : " << m << endl;

    double vmax=0,vmin=0;
    calculerMinMax(Tab,T,vmax,vmin);

    cout << "Le max est : " << vmax << "et le min est : " << vmin <<endl;

    return 0;
}
