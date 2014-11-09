using namespace std;

#ifndef __EtatRobot_h__
#define __EtatRobot_h__

#include <exception>
#include <string>
#include <iostream>
class EtatRobot
{
	public:
	    EtatRobot* avancer();
        EtatRobot* tourner();
        EtatRobot* saisir();
        EtatRobot* poser();
        EtatRobot* peser();
        EtatRobot* rencontrerPlot();
        EtatRobot* evaluerPlot();
        EtatRobot* figer();
        EtatRobot* repartir();
        void afficher();

        EtatRobot& operator= (const EtatRobot&) {}

    friend ostream& operator << (ostream& os, const EtatRobot& r)
    {
       return os << &r;
    }
};

#endif
