using namespace std;

#ifndef __EtatRobotAVide_h__
#define __EtatRobotAVide_h__

#include <exception>
#include <iostream>

#include "EtatRobotAVideFacePlot.h"
#include "EtatRobotEnRoute.h"

class EtatRobotAVide: public EtatRobotEnRoute
{

	private:
	    EtatRobotAVide();

	public:
	    EtatRobot* avancer();
        EtatRobot* tourner();
        EtatRobot* rencontrerPlot();
        static EtatRobot* getInstance();
        friend ostream& operator << (ostream& os, const EtatRobotAVide& r)
        {
           return os << "POUGOBJG";
        }
};

#endif
