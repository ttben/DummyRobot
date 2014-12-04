#include <exception>
using namespace std;

#ifndef __EtatRobotEnCharge_h__
#define __EtatRobotEnCharge_h__

#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

// class EtatRobot;
// class EtatRobotEnRoute;
class EtatRobotEnCharge;

class EtatRobotEnCharge: public EtatRobotEnRoute
{

	public: EtatRobot* avancer();

	public: EtatRobot* tourner();

	public: EtatRobot* peser();

	public: EtatRobot* rencontrerPlot();

	public: static EtatRobot* getInstance();

	private: EtatRobotEnCharge();

	string getStateName()const{
            return "EtatRobotEnCharge";
    }
};

#endif
