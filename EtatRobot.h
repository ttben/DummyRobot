using namespace std;

#ifndef __EtatRobot_h__
#define __EtatRobot_h__

#include <exception>
#include <string>
#include <iostream>
class EtatRobot
{
	public:
        virtual EtatRobot* avancer() {
            throw "Not yet implemented";
        }

        virtual EtatRobot* tourner() {
            throw "Not yet implemented";
        }

        virtual EtatRobot* saisir() {
            throw "Not yet implemented";
        }

        virtual EtatRobot* poser() {
            throw "Not yet implemented";
        }

        virtual EtatRobot* peser() {
            throw "Not yet implemented";
        }

        virtual EtatRobot* rencontrerPlot() {
            cout << "ETATROBOT"<< endl;
            throw "Not yet implemented";
        }

        virtual EtatRobot* evaluerPlot() {
            throw "Not yet implemented";
        }

        virtual EtatRobot* figer() {
            throw "Not yet implemented";
        }

        virtual EtatRobot* repartir() {
            throw "Not yet implemented";
        }

        virtual void afficher() {
            throw "Not yet implemented";
        }

        EtatRobot& operator= (const EtatRobot&) {}

    friend ostream& operator << (ostream& os, const EtatRobot& r)
    {
       return os << &r;
    }
};

#endif
