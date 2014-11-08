#include <exception>
using namespace std;

#ifndef __EtatRobotFigé_h__
#define __EtatRobotFigé_h__

#include "EtatRobotEnRoute.h"
#include "EtatRobot.h"

class EtatRobotEnRoute;
// class EtatRobot;
class EtatRobotFigé;

class EtatRobotFigé: public EtatRobot
{
	private: EtatRobotEnRoute _étatPrécédent;

	public: EtatRobot repartir();

	public: void setEtatPrécédent(EtatRobotEnRoute aÉtatPrécédent);

	public: EtatRobotFigé getInstance();

	private: EtatRobotFigé();
};

#endif
