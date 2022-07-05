#include "Ligne_Polygonale.h"
#include <iomanip>
using namespace std;
Ligne_Polygonale::Ligne_Polygonale():
    _nbPts(0),
    _tabPts(NULL)
    {};

Ligne_Polygonale::Ligne_Polygonale(int nb):
    _nbPts(nb),
    _tabPts(NULL)
    {
        if(nb>0)
        _tabPts=new PT2D[nb];
        else
        _nbPts=0;

    };
Ligne_Polygonale::Ligne_Polygonale(const Ligne_Polygonale& LP):
    _nbPts(LP._nbPts),
    _tabPts(NULL)
    {
      _tabPts= new PT2D[_nbPts];

        for(int i= 0; i < _nbPts; i++ )
            _tabPts[i]= LP._tabPts[i];
    };
Ligne_Polygonale::~Ligne_Polygonale()
{
    if( _tabPts != NULL )
	{
		delete [] _tabPts;
		_tabPts= NULL;
	}
	_nbPts= 0;

    cout << "Destructeur de la classe LIGNE_POLYG" << endl;
    cout << "*** (---) ***" << endl;

};

int Ligne_Polygonale::get_nbPts()
{
    return _nbPts;
}

PT2D Ligne_Polygonale::get_sommet(int i)
{

    return _tabPts[i];

}

double Ligne_Polygonale::perimetre()
{
    double perim= 0;
    for( int i= 1; i < _nbPts; ++i )
        perim += _tabPts[i].distance( _tabPts[i-1] );
    return perim;

}

bool Ligne_Polygonale::isOpen()
{
    if(_tabPts[0]==_tabPts[_nbPts-1])
        return false;

        return true;

}

ostream& operator<<(ostream& os,const Ligne_Polygonale& LP)
{
    os << " les sommets de la ligne polygonale "<<endl;

    for(int i=0;i<LP._nbPts;i++)
        os << LP._tabPts[i]<< " ";
    cout << endl;
    return os;
}

istream& operator>>(istream& is, Ligne_Polygonale& LP)
{

    cout << " Saisir les coordonnees des points constituant la ligne ploygonale " <<endl;
    for(int i=0;i<LP._nbPts;i++)
        is >>LP._tabPts[i];

    return is;

}


