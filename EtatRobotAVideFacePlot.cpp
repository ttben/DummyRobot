using namespace std;

#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotEnRoute.h"
#include "SingletonHandler.h"
#include <exception>

EtatRobot* EtatRobotAVideFacePlot::tourner() {
	throw "Not yet implemented";
}

EtatRobot* EtatRobotAVideFacePlot::saisir() {
	throw "Not yet implemented";
}

EtatRobot* EtatRobotAVideFacePlot::evaluerPlot() {
	throw "Not yet implemented";
}

EtatRobot* EtatRobotAVideFacePlot::getInstance() {
    if(SingletonHandler::existe("EtatRobotAVideFacePlot")) {
        cout << "Le singleton EtatRobotAVide existe deja à @" <<SingletonHandler::recupererInstance("EtatRobotAVideFacePlot") << endl;
        return SingletonHandler::recupererInstance("EtatRobotAVideFacePlot");
    }

    EtatRobot etat = EtatRobotAVideFacePlot();

    SingletonHandler::ajouterSingleton("EtatRobotAVideFacePlot", &etat);

    return SingletonHandler::recupererInstance("EtatRobotAVideFacePlot");
}

EtatRobotAVideFacePlot::EtatRobotAVideFacePlot() {
}

