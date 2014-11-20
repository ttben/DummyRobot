using namespace std;

#ifndef __EtatRobot_h__
#define __EtatRobot_h__

#include <exception>
#include <string>
#include <iostream>

class EtatRobot
{
	public:
        class UnAuthorizedAction{};


        virtual EtatRobot* avancer() {
            throw UnAuthorizedAction();
        }

        virtual EtatRobot* tourner() {
            throw UnAuthorizedAction();
        }

        virtual EtatRobot* saisir() {
            throw UnAuthorizedAction();
        }

        virtual EtatRobot* poser() {
            throw UnAuthorizedAction();
        }

        virtual EtatRobot* peser() {
            throw UnAuthorizedAction();
        }

        virtual EtatRobot* rencontrerPlot() {
            throw UnAuthorizedAction();
        }

        virtual EtatRobot* evaluerPlot() {
            throw UnAuthorizedAction();
        }

        virtual EtatRobot* figer() {
            throw UnAuthorizedAction();
        }

        virtual EtatRobot* repartir() {
            throw UnAuthorizedAction();
        }

        virtual void afficher() {
            throw UnAuthorizedAction();
        }

        EtatRobot& operator= (const EtatRobot&) {}

        friend ostream& operator << (ostream& os, const EtatRobot& r)
        {
           return os << &r;
        }
};

#endif
