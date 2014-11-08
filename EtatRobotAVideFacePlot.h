#include <exception>
using namespace std;

#ifndef __EtatRobotAVideFacePlot_h__
#define __EtatRobotAVideFacePlot_h__

#include "EtatRobot.h"
#include "EtatRobotEnRoute.h"

// class EtatRobot;
// class EtatRobotEnRoute;
class EtatRobotAVideFacePlot;

class EtatRobotAVideFacePlot: public EtatRobotEnRoute
{

	public: EtatRobot tourner();

	public: EtatRobot saisir();

	public: EtatRobot evaluerPlot();

	public: EtatRobotAVideFacePlot getInstance();

	private: EtatRobotAVideFacePlot();
};

#endif
