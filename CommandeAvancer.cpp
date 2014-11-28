#include <exception>
#include <string>
using namespace std;

#include "CommandeAvancer.h"
#include "Commande.h"

CommandeAvancer::CommandeAvancer(string nom) {
}

Commande CommandeAvancer::virtualConstructor(string invocateur_Invocateur) {
	throw "Not yet implemented";
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

