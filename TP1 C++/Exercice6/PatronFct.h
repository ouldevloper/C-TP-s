#ifndef PATRONFCT_H_INCLUDED
#define PATRONFCT_H_INCLUDED

template <class T>
T maximum (T v1, T v2, T v3)
{
    T maxi=v1;
    if(maxi<v2)
        maxi=v2;

    if(maxi<v3)
        maxi=v3;

    return maxi;
}

#endif // PATRONFCT_H_INCLUDED
