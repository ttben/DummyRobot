using namespace std;

#ifndef __EtatRobotEnRoute_h__
#define __EtatRobotEnRoute_h__

#include <exception>
#include "EtatRobot.h"

class EtatRobotEnRoute: public EtatRobot
{
	public:
	    virtual EtatRobot* figer();
		virtual EtatRobot* avancer(){};
        virtual EtatRobot* tourner(){};
        virtual EtatRobot* rencontrerPlot(){
            cout << "ETATROBOT"<< endl;
            throw "Not yet implemented";
        }
};

#endif
