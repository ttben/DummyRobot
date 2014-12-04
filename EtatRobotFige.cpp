#include <exception>
using namespace std;

#include "EtatRobotFige.h"
#include "EtatRobotEnRoute.h"
#include "EtatRobot.h"
#include "SingletonHandler.h"
EtatRobotFige::EtatRobotFige() {
}

EtatRobot* EtatRobotFige::repartir() {
	return _etatPrecedent;
}

void EtatRobotFige::setEtatPrecedent(EtatRobotEnRoute *aEtatPrecedent) {
	_etatPrecedent = aEtatPrecedent;
}

EtatRobot* EtatRobotFige::getInstance() {
	if(SingletonHandler::existe("EtatRobotFige")) {
        return SingletonHandler::recupererInstance("EtatRobotFige");
    }

    EtatRobot* etat = new EtatRobotFige;

    SingletonHandler::ajouterSingleton("EtatRobotFige", etat);

    return SingletonHandler::recupererInstance("EtatRobotFige");
}
