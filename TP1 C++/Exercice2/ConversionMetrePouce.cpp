#include <iostream>
#include "ConversionMetrePouce.h"
using namespace std;

void saisie(double& v)
{
    bool valide;
    char chaine[80];
    do{
        valide =true;
        cout << "Entrer une taille en metre :";
        cin >> v;

        if(!cin.good())
        {
            valide=false;
            cout << "Erreur : Veuillez saisir un nombre reel " << endl;
            cin.clear();
            cin.getline(chaine,80);
        }
        else
        {
            if (v<vmin || v >vmax)
            {
                valide=false;
                 cout << "Erreur : Veuillez saisir un nombre reel entre 0.2 et 2.8 " << endl;
            }
        }

    }while(!valide);

}

double conversionMetreEnPouce(double v)
{
    return v*coef;

}



