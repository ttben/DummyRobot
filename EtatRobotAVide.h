#include <exception>
using namespace std;

#ifndef __EtatRobotAVide_h__
#define __EtatRobotAVide_h__

#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

// class EtatRobot;
// class EtatRobotEnRoute;
class EtatRobotAVide;

class EtatRobotAVide: public EtatRobotEnRoute
{

	public: EtatRobot avancer();

	public: EtatRobot tourner();

	public: EtatRobot rencontrerPlot();

	public: EtatRobotAVide getInstance();

	private: EtatRobotAVide();
};

#endif
