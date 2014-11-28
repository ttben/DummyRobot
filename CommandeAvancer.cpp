#include <exception>
#include <string>
using namespace std;

#include "CommandeAvancer.h"
#include "Commande.h"
#include "Parser.h"

Commande::commandesInscrites()["AVANCER"] = CommandeAvancer::monExemplaire("AVANCER");

CommandeAvancer::CommandeAvancer(string nom) {
}

Commande* CommandeAvancer::virtualConstructor(Parser p) {
    return new CommandeAvancer();
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

