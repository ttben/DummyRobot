using namespace std;
#ifndef __Plot_h__
#define __Plot_h__

#include <ostream>
#include <iostream>

class Plot
{
	private:
	int _hauteur;

	public:
    Plot();
    Plot(int hauteur);
    int getHauteur() const;

    friend ostream& operator << (ostream& os, const Plot& p){
        os << "hauteur=" << p._hauteur;
        return os;
    }

    Plot& operator=(const Plot& p){
        _hauteur = p.getHauteur();
        return *this;
    }
};

#endif
