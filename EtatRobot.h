using namespace std;

#ifndef __EtatRobot_h__
#define __EtatRobot_h__

#include <exception>
#include <string>
#include <iostream>
class EtatRobot
{
	public: EtatRobot avancer();

	public: EtatRobot tourner();

	public: EtatRobot saisir();

	public: EtatRobot poser();

	public: EtatRobot peser();

	public: EtatRobot rencontrerPlot();

	public: EtatRobot evaluerPlot();

	public: EtatRobot figer();

	public: EtatRobot repartir();

	public: void afficher();

        friend ostream& operator << (ostream& os, const EtatRobot& r)
        {
           return os << &r;
        }
};

#endif
