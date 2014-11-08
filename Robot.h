#include <exception>
#include <string>
#include "EtatRobot.h"
#include "Plot.h"
#include "Objet.h"
#include "Position.h"

using namespace std;

#ifndef __Robot_h__
#define __Robot_h__



class EtatRobot;
class Plot;
class Objet;
class Position;
class Robot;

class Robot
{
	private:
	    string _direction;
	public:
	    EtatRobot* _etat;
        Plot* _plot;
        Objet* _objet;
        Position* _position;
        void avancer(string x, string y);
        void tourner(string d);
        void saisir(string o);
        void poser();
        int peser();
        void rencontrerPlot(string p);
        int evaluerPlot();
        void figer();
        void repartir();
        void afficher();
};

#endif
