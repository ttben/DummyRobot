#include <exception>
using namespace std;

#ifndef __EtatRobotFig�_h__
#define __EtatRobotFig�_h__

#include "EtatRobotEnRoute.h"
#include "EtatRobot.h"

class EtatRobotEnRoute;
// class EtatRobot;
class EtatRobotFig�;

class EtatRobotFig�: public EtatRobot
{
	private: EtatRobotEnRoute _�tatPr�c�dent;

	public: EtatRobot repartir();

	public: void setEtatPr�c�dent(EtatRobotEnRoute a�tatPr�c�dent);

	public: EtatRobotFig� getInstance();

	private: EtatRobotFig�();
};

#endif
