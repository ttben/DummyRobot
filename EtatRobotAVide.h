using namespace std;

#ifndef __EtatRobotAVide_h__
#define __EtatRobotAVide_h__

#include <exception>
#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotEnRoute.h"

class EtatRobotAVide: public EtatRobotEnRoute
{

	private:
	    EtatRobotAVide();

	public:
	    EtatRobot* avancer(){return this;}
        EtatRobot* tourner(){return this;}
        EtatRobot* rencontrerPlot();
        static EtatRobot* getInstance();
};

#endif
