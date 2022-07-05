#include <iostream>
#include "ConversionMetrePouce.h"

using namespace std;

int main()
{
    double x=0;
    saisie(x);

    double vc=conversionMetreEnPouce(x);
    cout << "la conversion de " << x << " m en pouce vaut : " << vc << endl;

    return 0;
}
