#include <exception>
#include <string>
using namespace std;

#include "CommandeAvancer.h"
#include "Commande.h"
#include "Parser.h"

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

void CommandeAvancer::executer() {
	throw "Not yet implemented";
}

void CommandeAvancer::annuler() {
	throw "Not yet implemented";
}

bool CommandeAvancer::estAnnulable() {
	throw "Not yet implemented";
}

