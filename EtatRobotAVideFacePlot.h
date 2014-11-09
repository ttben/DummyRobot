using namespace std;

#ifndef __EtatRobotAVideFacePlot_h__
#define __EtatRobotAVideFacePlot_h__

#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"
#include <exception>

class EtatRobotAVideFacePlot: public EtatRobotEnRoute
{

private:
        EtatRobotAVideFacePlot();
public:
	    EtatRobot* tourner();
	    EtatRobot* saisir();
	    EtatRobot* evaluerPlot();
	    static EtatRobot* getInstance();

};

#endif
