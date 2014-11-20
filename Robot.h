
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
        Plot _plot;
        Objet _objet;
        Position _position;
        EtatRobot* _etat;
       	vector<Observer*> _listObservers;

	public:
	    Robot() {
            _etat = (EtatRobotAVide::getInstance());
            cout << "@Robot#etat : " << _etat <<"@SingleHandler#etat : " << SingletonHandler::recupererInstance("EtatRobotAVide") << endl;
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
        void notify();
        void attach(Observer* obs);
        void detach(Observer* obs);

        class UnAuthorizedAction{};

        friend ostream& operator << (ostream& os, const Robot& r)
        {
           os << r._position << "Etat : " << r._etat;
           return os;
        }
};

#endif
