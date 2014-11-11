using namespace std;
#ifndef __Objet_h__
#define __Objet_h__

#include <ostream>
#include <iostream>

class Objet
{
	private:
	int _poids;

	public:
	Objet();
	int getPoids();

	friend ostream& operator << (ostream& os, const Objet& o){
        os << "poids:" << o._poids;
        return os;
    }
};

#endif
