using namespace std;

#ifndef __EtatRobotAVide_h__
#define __EtatRobotAVide_h__

#include <exception>
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

class EtatRobotAVide: public EtatRobotEnRoute
{

	private:
	    EtatRobotAVide();

	public:
	    EtatRobot avancer();
        EtatRobot tourner();
        EtatRobot rencontrerPlot();
        static EtatRobot& getInstance();
};

#endif
