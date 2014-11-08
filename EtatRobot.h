#include <exception>
using namespace std;

#ifndef __EtatRobot_h__
#define __EtatRobot_h__

// #include "Robot.h"

class Robot;
class EtatRobot;

class EtatRobot
{
	public: Robot* _�tat;

	public: EtatRobot avancer();

	public: EtatRobot tourner();

	public: EtatRobot saisir();

	public: EtatRobot poser();

	public: EtatRobot peser();

	public: EtatRobot rencontrerPlot();

	public: EtatRobot �valuerPlot();

	public: EtatRobot figer();

	public: EtatRobot repartir();

	public: void afficher();

	public: void getAttribute();

	public: void setAttribute(string aAttribute);
};

#endif
