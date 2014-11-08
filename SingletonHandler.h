#include <exception>
using namespace std;

#ifndef __SingletonHandler_h__
#define __SingletonHandler_h__

#include "EtatRobot.h"

class EtatRobot;
class SingletonHandler;

class SingletonHandler
{
	private: static Map<String, EtatRobot> _singletons;

	public: static void ajouterSingleton(string aString_nom, string aEtatRobot_instance) {
		throw "Not yet implemented";
	}

	public: static bool existe(string aString_nom) {
		throw "Not yet implemented";
	}

	public: static EtatRobot récupérerInstance(string aString_nom) {
		throw "Not yet implemented";
	}
};

#endif
