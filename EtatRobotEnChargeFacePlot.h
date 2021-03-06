#include <exception>
using namespace std;

#ifndef __EtatRobotEnChargeFacePlot_h__
#define __EtatRobotEnChargeFacePlot_h__

#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

// class EtatRobot;
// class EtatRobotEnRoute;
class EtatRobotEnChargeFacePlot;

class EtatRobotEnChargeFacePlot: public EtatRobotEnRoute
{
	public: EtatRobot* poser();

	public: EtatRobot* peser();

	public: EtatRobot* tourner();

	public: static EtatRobot* getInstance();

	private: EtatRobotEnChargeFacePlot();

	string getStateName()const{
            return "EtatRobotEnChargeFacePlot";
    }
};

#endif
