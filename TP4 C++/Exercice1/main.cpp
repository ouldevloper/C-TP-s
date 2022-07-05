#include <iostream>
#include "PT2D.h"
#include "Ligne_Polygone.h"
using namespace std;

int main()
{
/* ************************** Exo 1 TP4
    PT2D P1;
    cin >> P1;

    cout << P1;
    cout << "La norme du point vaut : " << P1.norme()<< endl;

    P1.deplacer();

  //  cout << P1;


    PT2D P2(4,9);

    cout << P2;

    PT2D P3(P1+P2);

    cout << P3;


    if(P1==P2)
        cout <<" les deux points sont egaux " << endl;
    else
        cout << "les deux points sont differents "<< endl;



    cout << "Le nombre de points crees : "<< PT2D::nb_Point<<endl;
    P3.~PT2D();
    cout << "Le nombre de points crees : "<< PT2D::nb_Point<<endl;

    cout << "------------------"<<endl;
    */

/*  Exo 2 TP 4*************************************************************
    int t;
    do{
    cout << " Saisir le nombre de points (Au moins 3 ): ";cin >>t;
    }while(t<=2);

    Ligne_Polygone LP(t);


    cin >> LP;
    cout << "------------------"<<endl;
    cout << LP;
    cout << "------------------"<<endl;
    cout << "Le perimetre de la ligne polygone est : "<< LP.perimetre()<<endl;
    cout << "------------------"<<endl;
    PT2D P(9,9);
    LP.set_sommet(1,P);
    cout << LP.get_sommet(1)<<endl;
    cout << "------------------"<<endl;
    if(LP.isOpen())
        cout << "La ligne polygone est ouverte "<<endl;
    else
        cout << "La ligne polygone est fermee "<<endl;

*/

    // Exo 2 TP5******************************************

   PT2D P1(1,2),P2(2,4),P3(1,5);

   Ligne_Polygone LP(3);

   LP.set_sommet(0,P1);
   LP.set_sommet(1,P2);
   LP.set_sommet(2,P3);

   cout << LP;

   cout << "Le perimetre de la ligne polygone vaut : " << LP.perimetre()<<endl;

   Triangle T(P1,P2,P3);

    cout << T;

    cout << "Le perimetre du triangle vaut : " << T.perimetre()<<endl;

    Ligne_Polygone* pl=new Ligne_Polygone(LP);

    cout << "sommets de la ligne polygone sont :" << *pl<<endl;
    cout << "Le perimetre de la ligne polygone vaut : " << pl->perimetre()<<endl;

    Ligne_Polygone* pt=new Triangle(T);

    cout << "sommets du triangle sont :" << *pt<<endl;
    cout << "Le perimetre du triangle vaut : " << pt->perimetre()<<endl;

    delete pl,pt;


    return 0;
}
