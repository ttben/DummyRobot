using namespace std;

#ifndef __EtatRobotEnRoute_h__
#define __EtatRobotEnRoute_h__

#include <exception>
#include "EtatRobot.h"

class EtatRobotEnRoute: public EtatRobot
{
	public:
	    EtatRobot figer();
		EtatRobot avancer(){};
        EtatRobot tourner(){};
        EtatRobot* rencontrerPlot();
};

#endif
