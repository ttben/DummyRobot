#include <exception>
using namespace std;

#include "EtatRobotAVide.h"
#include "SingletonHandler.h"
EtatRobotAVide::EtatRobotAVide() {

}

EtatRobot EtatRobotAVide::avancer() {
	throw "Not yet implemented";
}

EtatRobot EtatRobotAVide::tourner() {
	throw "Not yet implemented";
}

EtatRobot EtatRobotAVide::rencontrerPlot() {
	throw "Not yet implemented";
}

EtatRobot* EtatRobotAVide::getInstance() {
	 if(SingletonHandler::existe("EtatRobotAVide")) {
        return SingletonHandler::recupererInstance("EtatRobotAVide");
	 }

    EtatRobot etat = EtatRobotAVide();

	 SingletonHandler::ajouterSingleton("EtatRobotAVide", std::addressof(etat));

	 return SingletonHandler::recupererInstance("EtatRobotAVide");
}

