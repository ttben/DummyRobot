
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
       	string _dernierOrdreRecu;

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
        string GetDirection() {
            return _direction;
        }
        Objet GetObjet() {
            return *_objet;
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
        string getDernierOrdre();

        friend ostream& operator << (ostream& os, const Robot& r)
        {
           os << "Position : " << r._position << ", Etat : " << *(r._etat) << ", Objet : ";

           if(r._objet != NULL){os << *(r._objet);}
           else {os << "aucun";}
           os << ", Plot : ";
           if(r._plot != NULL){os << *(r._plot);}
           else{os << "aucun";}

           return os;
        }
};

#endif
