#include <exception>
using namespace std;

#include "EtatRobotEnRoute.h"
#include "EtatRobotFige.h"
#include "EtatRobot.h"

EtatRobot* EtatRobotEnRoute::figer() {
    EtatRobot* erf = EtatRobotFige::getInstance();
    static_cast<EtatRobotFige*> (erf)->setEtatPrecedent(*this);
    return erf;
}
