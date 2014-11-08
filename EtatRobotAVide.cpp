#include <exception>
using namespace std;

#include "EtatRobotAVide.h"
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

EtatRobot EtatRobotAVide::avancer() {
	throw "Not yet implemented";
}

EtatRobot EtatRobotAVide::tourner() {
	throw "Not yet implemented";
}

EtatRobot EtatRobotAVide::rencontrerPlot() {
	throw "Not yet implemented";
}

EtatRobotAVide EtatRobotAVide::getInstance() {
	throw "Not yet implemented";
}

EtatRobotAVide::EtatRobotAVide() {
}

