
#include "Plot.h"

Plot::Plot(){
    _hauteur = 0;
}

Plot::Plot(int hauteur){
    _hauteur = hauteur;
}

int Plot::getHauteur() const{
	return this->_hauteur;
}

