#include <exception>
#include <string>
//#include "EtatRobot.h"
#include "EtatRobotAVide.h"
#include "Plot.h"
#include "Objet.h"
#include "Position.h"

using namespace std;

#ifndef __Robot_h__
#define __Robot_h__

class Robot
{
	private:
	    string _direction;
        Plot _plot;
        Objet _objet;
        Position _position;
        //EtatRobot& _etat;
	public:
	    Robot() {
            //_etat = EtatRobotAVide::getInstance();
            _position = Position(1,1);
        }

        Position& GetPosition() {
            return _position;
        }

        void avancer(int x, int y);
        void tourner(string d);
        void saisir(Objet o);
        void poser();
        int peser();
        void rencontrerPlot(Plot p);
        int evaluerPlot();
        void figer();
        void repartir();
        void afficher();

        friend ostream& operator << (ostream& os, const Robot& r)
        {
           os << r._position;
           return os;
        }
};

#endif
