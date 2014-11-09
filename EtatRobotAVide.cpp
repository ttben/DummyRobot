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
        cout << "Le singleton EtatRobotAVide existe deja à @" <<SingletonHandler::recupererInstance("EtatRobotAVide") << endl;
        return SingletonHandler::recupererInstance("EtatRobotAVide");
    }

    EtatRobot etat = EtatRobotAVide();

    SingletonHandler::ajouterSingleton("EtatRobotAVide", &etat);

    return &etat;
}

