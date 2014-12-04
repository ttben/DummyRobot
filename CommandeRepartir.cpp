#include <exception>
#include <string>
using namespace std;

#include "CommandeRepartir.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeRepartir CommandeRepartir::monExemplaire("REPARTIR");

CommandeRepartir::CommandeRepartir(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

Commande* CommandeRepartir::virtualConstructor(Parser* p) {
    return new CommandeRepartir();
}

void CommandeRepartir::executer(Robot* r) {
    cout << "EXECUTION DE REPARTIR" << endl;
    r->repartir();
    //Commande::commandes_executees.push_back(this);
}

void CommandeRepartir::annuler(Robot* r) {
    cout << "ANNULATION DE REPARTIR()" << endl;
    r->figer();
}

bool CommandeRepartir::estAnnulable() {
    return true;
}

