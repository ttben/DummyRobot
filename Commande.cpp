#include <exception>
#include <string>
#include <map>
using namespace std;

#include "Commande.h"
#include "Invocateur.h"

Commande::Commande(string nom, Invocateur i) {
}


void Commande::executer() {
	throw "Not yet implemented";
}

void Commande::annuler() {
	throw "Not yet implemented";
}

bool Commande::estAnnulable() {
	throw "Not yet implemented";
}

Commande Commande::virtualConstructor(string invocateur_Invocateur) {
	throw "Not yet implemented";
}

