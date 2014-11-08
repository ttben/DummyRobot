#include <exception>
using namespace std;

#ifndef __Robot_h__
#define __Robot_h__

// #include "EtatRobot.h"
// #include "Plot.h"
// #include "Objet.h"
// #include "Position.h"

class EtatRobot;
class Plot;
class Objet;
class Position;
class Robot;

class Robot
{
	private: String _direction;
	public: EtatRobot* _état;
	public: Plot* _plot;
	public: Objet* _objet;
	public: Position* _position;

	public: void avancer(string aInt_x, string aInt_y);

	public: void tourner(string aString_d);

	public: void saisir(string aObjet_o);

	public: void poser();

	public: int peser();

	public: void rencontrerPlot(string aPlot_p);

	public: int évaluerPlot();

	public: void figer();

	public: void repartir();

	public: void afficher();
};

#endif
