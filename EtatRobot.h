#include <exception>

using namespace std;

#include <string>


#ifndef __EtatRobot_h__
#define __EtatRobot_h__

// #include "Robot.h"

class Robot;
class EtatRobot;

class EtatRobot
{
	public: Robot* _etat;

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

	public: void getAttribute();

	public: void setAttribute(string aAttribute);
};

#endif
