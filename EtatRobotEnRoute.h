using namespace std;

#ifndef __EtatRobotEnRoute_h__
#define __EtatRobotEnRoute_h__

#include <exception>
#include <iostream>
#include "EtatRobot.h"

class EtatRobotEnRoute: public EtatRobot
{
	public:
	    virtual EtatRobot* figer();
		virtual EtatRobot* avancer() {
		            throw EtatRobot::UnAuthorizedAction();
        };
        virtual EtatRobot* tourner() {
            throw EtatRobot::UnAuthorizedAction();
        };
        virtual EtatRobot* rencontrerPlot(){
            throw EtatRobot::UnAuthorizedAction();
        }

        friend ostream& operator << (ostream& os, const EtatRobotEnRoute& r)
        {
           return os << "pouet";
        }
};

#endif
