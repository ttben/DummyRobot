using namespace std;

#ifndef __EtatRobotEnRoute_h__
#define __EtatRobotEnRoute_h__

#include <exception>
#include "EtatRobot.h"

class EtatRobotEnRoute: public EtatRobot
{
	public:
	    virtual EtatRobot* figer();
		virtual EtatRobot* avancer() {
		            throw "Not yet implemented";
        };
        virtual EtatRobot* tourner() {
            throw "NOT YET IMPLEMENTED";
        };
        virtual EtatRobot* rencontrerPlot(){
            cout << "ETATROBOTENROUTE"<< endl;
            throw "Not yet implemented";
        }
};

#endif
