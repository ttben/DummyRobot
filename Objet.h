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
	Objet(int poids);
	int getPoids() const;

	friend ostream& operator << (ostream& os, const Objet& o){
        os << "poids=" << o._poids;
        return os;
    }
    Objet& operator=(const Objet& o){
        _poids = o.getPoids();
        return *this;
    }

    ~Objet(){
        _poids  = 0;
    }
};

#endif
