#include <exception>
using namespace std;

#include "EtatRobotAVide.h"
#include "SingletonHandler.h"
EtatRobotAVide::EtatRobotAVide() {
}

EtatRobot* EtatRobotAVide::rencontrerPlot() {
    return EtatRobotAVideFacePlot::getInstance();
}

EtatRobot* EtatRobotAVide::avancer(){
    return this;
}

EtatRobot* EtatRobotAVide::tourner(){
    return this;
}

EtatRobot* EtatRobotAVide::getInstance() {
    if(SingletonHandler::existe("EtatRobotAVide")) {
        cout << "Le singleton EtatRobotAVide existe deja à @" <<SingletonHandler::recupererInstance("EtatRobotAVide") << endl;
        return SingletonHandler::recupererInstance("EtatRobotAVide");
    }

    EtatRobot* etat = new EtatRobotAVide;

    SingletonHandler::ajouterSingleton("EtatRobotAVide", etat);

    return SingletonHandler::recupererInstance("EtatRobotAVide");
}

