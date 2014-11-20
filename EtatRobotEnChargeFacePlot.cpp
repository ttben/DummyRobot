#include <exception>
using namespace std;

#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotEnCharge.h"
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"
#include "SingletonHandler.h"

EtatRobot* EtatRobotEnChargeFacePlot::poser() {
	return EtatRobotAVideFacePlot::getInstance();
}

EtatRobot* EtatRobotEnChargeFacePlot::peser() {
	return this;
}

EtatRobot* EtatRobotEnChargeFacePlot::tourner() {
	return EtatRobotEnCharge::getInstance();
}

EtatRobot* EtatRobotEnChargeFacePlot::getInstance() {
	if(SingletonHandler::existe("EtatRobotEnChargeFacePlot")) {
        return SingletonHandler::recupererInstance("EtatRobotEnChargeFacePlot");
    }

    EtatRobot* etat = new EtatRobotEnChargeFacePlot;

    SingletonHandler::ajouterSingleton("EtatRobotEnChargeFacePlot", etat);

    return SingletonHandler::recupererInstance("EtatRobotEnChargeFacePlot");
}

EtatRobotEnChargeFacePlot::EtatRobotEnChargeFacePlot() {
}

