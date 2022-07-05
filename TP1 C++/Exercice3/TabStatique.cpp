#include <iostream>
#include "TabStatique.h"
using namespace std;

void remplirTab(double* Tab, int T)
{
    cout << "Remplir le tableau :" << endl;
    for (int i=0;i<T;i++)
    {
        cout << "Tab [" << i << "]= ";
        cin >> Tab[i];
    }

}


void afficherTab(double* Tab, int T)
{
    cout << "Affichage du tableau " << endl;
    for (int i=0;i<T;i++)
    {
        cout << "Tab [" << i << "]= " << Tab[i] << endl;
    }
}


double calculerMoyenne(double* Tab, int T)
{
    double m=0;
    for(int i=0;i<T;i++)
    {
        m+=Tab[i];
    }
    m=m/T;
    return m;

}

void calculerMinMax(double* Tab, int T, double& vmax,double& vmin)
{
    vmax=Tab[0];
    vmin=Tab[0];

    for(int i=0;i<T;i++)
    {

        if (vmax<Tab[i])
            vmax=Tab[i];

        if(vmin>Tab[i])
            vmin=Tab[i];
    }

}

