#include <exception>
using namespace std;

#include "EtatRobotEnChargeFacePlot.h"
#include "EtatRobotEnCharge.h"
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"
#include "SingletonHandler.h"

EtatRobot* EtatRobotEnCharge::avancer() {
    return this;
}

EtatRobot* EtatRobotEnCharge::tourner() {
    return this;
}

EtatRobot* EtatRobotEnCharge::peser() {
    return this;
}

EtatRobot* EtatRobotEnCharge::rencontrerPlot() {
	return EtatRobotEnChargeFacePlot::getInstance();
}

EtatRobot* EtatRobotEnCharge::getInstance() {
    if(SingletonHandler::existe("EtatRobotEnCharge")) {
        return SingletonHandler::recupererInstance("EtatRobotEnCharge");
    }

    EtatRobot* etat = new EtatRobotEnCharge;

    SingletonHandler::ajouterSingleton("EtatRobotEnCharge", etat);

    return SingletonHandler::recupererInstance("EtatRobotEnCharge");

}

EtatRobotEnCharge::EtatRobotEnCharge() {
}

