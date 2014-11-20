
using namespace std;

#ifndef __Robot_h__
#define __Robot_h__

#include <exception>
#include <string>
#include <vector>
#include "EtatRobotAVide.h"
#include "Plot.h"
#include "Objet.h"
#include "Position.h"
#include <iostream>
#include "SingletonHandler.h"
 #include "Observer.h"
class Robot
{
	private:
	    string _direction;
        Plot* _plot;
        Objet* _objet;
        Position _position;
        EtatRobot* _etat;
       	vector<Observer*> _listObservers;

	public:
	    Robot() {
            _etat = (EtatRobotAVide::getInstance());
            _position = Position(0,0);
            _plot = NULL;
            _objet = NULL;
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
        void notify();
        void attach(Observer* obs);
        void detach(Observer* obs);

        friend ostream& operator << (ostream& os, const Robot& r)
        {
           os << "Position : " << r._position << ", Etat : " << r._etat << ", Objet : " << r._objet << ", Plot : " << r._plot;
           return os;
        }
};

#endif
