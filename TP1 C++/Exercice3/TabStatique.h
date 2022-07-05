#ifndef TABSTATIQUE_H_INCLUDED
#define TABSTATIQUE_H_INCLUDED

const int T=10;
void remplirTab(double* Tab,int T);
void afficherTab(double* Tab, int T);
double calculerMoyenne(double* Tab, int T);
void calculerMinMax(double* Tab, int T, double& vmax, double& vmin);


#endif // TABSTATIQUE_H_INCLUDED
