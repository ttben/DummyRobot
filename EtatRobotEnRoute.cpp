#include <exception>
using namespace std;

#include "EtatRobotEnRoute.h"
#include "EtatRobot.h"
#include "EtatRobotFige.h"

EtatRobot* EtatRobotEnRoute::figer() {
    EtatRobot* erf = EtatRobotFige::getInstance();
    static_cast<EtatRobotFige*> (erf)->setEtatPrecedent(this);
    return erf;
}
