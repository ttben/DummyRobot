#include <exception>
#include <string>
using namespace std;

#include "CommandePeser.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandePeser CommandePeser::monExemplaire("PESEROBJET");

CommandePeser::CommandePeser(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

Commande* CommandePeser::virtualConstructor(Parser p) {
    cout << "ON A DEMANDE DE CONSTRUIRE UN PESER ()" << endl;
    return new CommandePeser();
}

void CommandePeser::executer(Robot* r) {
    cout << "EXECUTION DE PESER" << endl;
    r->peser();
    //Commande::commandes_executees.push_back(this);
}

void CommandePeser::annuler(Robot* r) {
    // Non implémentée
}

bool CommandePeser::estAnnulable() {
    return false;
}

