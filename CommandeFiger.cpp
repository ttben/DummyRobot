#include <exception>
#include <string>
using namespace std;

#include "CommandeFiger.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeFiger CommandeFiger::monExemplaire("FIGER");

CommandeFiger::CommandeFiger(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

Commande* CommandeFiger::virtualConstructor(Parser* p) {
    return new CommandeFiger();
}

void CommandeFiger::executer(Robot* r) {
    cout << "EXECUTION DE FIGER" << endl;
    r->figer();
    //Commande::commandes_executees.push_back(this);
}

void CommandeFiger::annuler(Robot* r) {
    cout << "ANNULATION DE FIGER" << endl;
    r->repartir();
}

bool CommandeFiger::estAnnulable() {
    return true;
}

