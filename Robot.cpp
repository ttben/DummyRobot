#include <exception>
#include "Robot.h"

using namespace std;


void Robot::avancer(int x, int y) {
    _etat = _etat->avancer();
    _position.setX(x);
    _position.setY(y);
}

void Robot::tourner(string d) {
    _etat = _etat->tourner();
    _direction = d;
    _plot = NULL;
}

void Robot::saisir(Objet o) {
    _etat = _etat->saisir();
    _objet = &o;
}

void Robot::poser() {
    _etat = _etat->poser();
    _objet = NULL;
}

int Robot::peser() {
    _etat = _etat->peser();
    return _objet->getPoids();
}

void Robot::rencontrerPlot(Plot p) {
    _etat = _etat->rencontrerPlot();
    _plot = &p;
    notify();
}

int Robot::evaluerPlot() {
    _etat = _etat->evaluerPlot();
    return _plot->getHauteur();
}

void Robot::figer() {
    _etat = _etat->figer();
}

void Robot::repartir() {
    _etat = _etat->repartir();
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

