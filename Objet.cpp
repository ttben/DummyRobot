
#include "Objet.h"

Objet::Objet(){
    _poids = 0;
}

Objet::Objet(int poids){
    _poids = poids;
}

int Objet::getPoids() const{
	return _poids;
}

