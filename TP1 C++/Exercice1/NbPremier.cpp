#include "NbPremier.h"

bool testerSiPremier(int nb)
{
    int moitie=nb/2;
    int i=2;
    while(i<=moitie && (nb%i!=0))
        i++;

    if(i>moitie)
        return (true);
    else
        return(false);

}

int rechercherNbPremierSup(int nb)
{
    int nps=nb+1;
    while(!testerSiPremier(nps))
        ++nps;
    return nps;

}

