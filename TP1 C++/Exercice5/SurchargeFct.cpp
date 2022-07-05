#include <iostream>
#include "SurchargeFct.h"

int maximum(int v1,int v2, int v3)
{
    int maxi=v1;
    if (maxi< v2)
    maxi=v2;

    if(maxi<v3)
    maxi=v3;

    return maxi;

}
double maximum(double v1,double v2, double v3)
{
    double maxi=v1;
    if (maxi< v2)
    maxi=v2;

    if(maxi<v3)
    maxi=v3;

    return maxi;

}
