#include <exception>
using namespace std;

#ifndef __EtatRobotFige_h__
#define __EtatRobotFige_h__

#include "EtatRobotEnRoute.h"
#include "EtatRobot.h"

class EtatRobotEnRoute;
// class EtatRobot;
class EtatRobotFige;

class EtatRobotFige: public EtatRobot
{
	private: EtatRobotEnRoute _etatPrecedent;

	public: EtatRobot* repartir();

	public: void setEtatPrecedent(EtatRobotEnRoute aEtatPrecedent);

	public: static EtatRobot* getInstance();

	private: EtatRobotFige();
};

#endif
