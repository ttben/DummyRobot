#include <exception>
#include <string>
using namespace std;

#include "CommandeAvancer.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeAvancer CommandeAvancer::monExemplaire("AVANCER");

CommandeAvancer::CommandeAvancer(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

CommandeAvancer::CommandeAvancer(int x, int y) {
    this->_x = x;
    this->_y = y;
}

Commande* CommandeAvancer::virtualConstructor(Parser p) {
    _x = p.getInt();
    _y = p.getInt();

    cout << "ON A DEMANDE DE CONSTRUIRE UN AVANCER (" << _x << "," << _y << ")" << endl;
    return new CommandeAvancer(_x, _y);
}

void CommandeAvancer::executer(Robot* r) {
    _oldX = r->GetPosition().getX();
    _oldY = r->GetPosition().getY();
    cout << "EXECUTION DE AVANCER " << _x << " ; " << _y << endl;
    r->avancer(_x, _y);
    //Commande::commandes_executees.push_back(this);
}

void CommandeAvancer::annuler(Robot* r) {
    cout << "ANNULATION DE AVANCER(" << _x << ", " << _y << ") RETOUR A (" << _oldX << ", " << _oldY << ")" << endl;
    r->avancer(_oldX, _oldY);
}

bool CommandeAvancer::estAnnulable() {
    return true;
}

