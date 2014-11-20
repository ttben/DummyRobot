#include <exception>
#include "Robot.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


void Robot::avancer(int x, int y) {
    std::stringstream sstm;
    sstm << "avancer(" << x << ", " << y << ")";
    _dernierOrdreRecu = sstm.str();
    _etat = _etat->avancer();
    _position.setX(x);
    _position.setY(y);
    afficher();
}

void Robot::tourner(string d) {
    std::stringstream sstm;
    sstm << "tourner(" << d << ")";
    _dernierOrdreRecu = sstm.str();
    _etat = _etat->tourner();
    _direction = d;
    _plot = NULL;
    afficher();
}

void Robot::saisir(Objet o) {
    std::stringstream sstm;
    sstm << "saisir(" << o << ")";
    _dernierOrdreRecu = sstm.str();
    _etat = _etat->saisir();
    _objet = &o;
    afficher();
}

void Robot::poser() {
    _dernierOrdreRecu = "poser()";
    _etat = _etat->poser();
    _objet = NULL;
    afficher();
}

int Robot::peser() {
    _dernierOrdreRecu = "peser()";
    _etat = _etat->peser();
    afficher();
    return _objet->getPoids();
}

void Robot::rencontrerPlot(Plot p) {
    std::stringstream sstm;
    sstm << "rencontrerPlot(" << p << ")";
    _dernierOrdreRecu = sstm.str();
    _etat = _etat->rencontrerPlot();
    _plot = &p;
    afficher();
}

int Robot::evaluerPlot() {
    _dernierOrdreRecu = "evaluerPlot()";
    _etat = _etat->evaluerPlot();
    afficher();
    return _plot->getHauteur();
}

void Robot::figer() {
    _dernierOrdreRecu = "figer()";
    _etat = _etat->figer();
    afficher();
}

void Robot::repartir() {
    _dernierOrdreRecu = "repartir()";
    _etat = _etat->repartir();
    afficher();
}

void Robot::afficher() {
    notify();
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

string Robot::getDernierOrdre(){
    return _dernierOrdreRecu;
}

