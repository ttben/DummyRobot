using namespace std;

#ifndef __EtatRobotAVide_h__
#define __EtatRobotAVide_h__

#include <exception>
#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

class EtatRobotAVide: public EtatRobotEnRoute
{

	public: EtatRobot avancer();

	public: EtatRobot tourner();

	public: EtatRobot rencontrerPlot();

	public:
	    static EtatRobot* getInstance();

	private: EtatRobotAVide();
};

#endif
