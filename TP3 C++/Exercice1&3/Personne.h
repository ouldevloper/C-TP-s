#ifndef PERSONNE_H_INCLUDED
#define PERSONNE_H_INCLUDED
#include <string>

using namespace std;

class Personne
{

    string _nom,_prenom;
    float _taille,_poids;

    public:
    // constructeur par defaut
    Personne();
    // constructeur avec argument
    Personne(const string& nom,const string& prenom,const float& taille,const float& poids);
    // constructeur par copie
    Personne( const Personne& p);

    float get_taille()const;
    float get_poids()const;
    void set_taille(float taille);
    void set_poids(float poids);
    void afficher()const;

    friend ostream& operator <<(ostream& os,const Personne& P);
    friend istream& operator >>(istream& is,Personne& P);

};


class TabPers

{

    int _nb;
    Personne* _tab;
    public:
    TabPers(int nb=0);
    TabPers(const TabPers& tp);
    ~TabPers();

    int get_nb()const;
    void set_nb(int nb);

    float taille_Moyenne()const;
    float poids_Moyen(float tmin=1.5)const;

    Personne infoTailleMax()const;
    Personne infoPoidsMin()const;

    TabPers& operator=(const TabPers& tp);
    Personne operator[](int i);

   friend ostream& operator<< (ostream& fsortie, const TabPers& tp);
    friend istream& operator>> (istream& fentree,  TabPers& tp);




};

#endif // PERSONNE_H_INCLUDED
