#include <exception>
#include "Robot.h"

using namespace std;


void Robot::avancer(int x, int y) {
	throw "Not yet implemented";
}

void Robot::tourner(string d) {
	throw "Not yet implemented";
}

void Robot::saisir(Objet o) {
	throw "Not yet implemented";
}

void Robot::poser() {
	throw "Not yet implemented";
}

int Robot::peser() {
	throw "Not yet implemented";
}

void Robot::rencontrerPlot(Plot p) {
    cout << "ROBOT#RENCONTRERPLOT\t" << _etat << endl;
    //TODO FIXME ::
    cout << _etat << endl;
    (_etat)->rencontrerPlot();
    notify();
//    delete _etat;
//    _etat = etmp;
    _plot = p;
}

int Robot::evaluerPlot() {
	throw "Not yet implemented";
}

void Robot::figer() {
	throw "Not yet implemented";
}

void Robot::repartir() {
	_etat = _etat->repartir()   ;
}

void Robot::afficher() {
	throw "Not yet implemented";
}

void Robot::notify()
{
    for (int i = 0; i < _listObservers.size(); i++)
        _listObservers[i]->update();

}

void Robot::attach(Observer* obs)
{
    _listObservers.push_back(obs);
}

void Robot::detach(Observer* obs)
{
    //_listObservers.erase(remove(_listObservers.begin(), _listObservers.end(), obs), _listObservers.end());
}

