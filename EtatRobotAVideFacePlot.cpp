using namespace std;

#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotAVide.h"
#include "EtatRobotEnRoute.h"
#include "SingletonHandler.h"
#include <exception>

EtatRobot* EtatRobotAVideFacePlot::tourner() {
	return EtatRobotAVide::getInstance();
}

EtatRobot* EtatRobotAVideFacePlot::saisir() {
	return EtatRobotEnChargeFacePlot::getInstance();
}

EtatRobot* EtatRobotAVideFacePlot::evaluerPlot() {
    return this;
}

EtatRobot* EtatRobotAVideFacePlot::getInstance() {
    if(SingletonHandler::existe("EtatRobotAVideFacePlot")) {
        cout << "Le singleton EtatRobotAVide existe deja à @" <<SingletonHandler::recupererInstance("EtatRobotAVideFacePlot") << endl;
        return SingletonHandler::recupererInstance("EtatRobotAVideFacePlot");
    }

    EtatRobot* etat = new EtatRobotAVideFacePlot;

    SingletonHandler::ajouterSingleton("EtatRobotAVideFacePlot", etat);

    return SingletonHandler::recupererInstance("EtatRobotAVideFacePlot");
}

EtatRobotAVideFacePlot::EtatRobotAVideFacePlot() {
}

