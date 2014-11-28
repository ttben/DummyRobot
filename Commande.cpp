#include <exception>
#include <string>
#include <map>
using namespace std;

#include "Commande.h"
#include "Invocateur.h"

map<string, Commande*>& Commande::commandesInscrites()
{
    static map<string, Commande*>* cmdInscrites = new map<string, Commande*>;
    return *cmdInscrites;
}

Commande::Commande() {}
Commande::Commande(string nom, Parser i) {
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

Commande* Commande::virtualConstructor(Parser p) {
	throw "Not yet implemented";
}

