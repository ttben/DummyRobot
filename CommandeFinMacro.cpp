#include <exception>
#include <string>
using namespace std;

#include "CommandeFinMacro.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeFinMacro CommandeFinMacro::monExemplaire("FINMACRO");

CommandeFinMacro::CommandeFinMacro(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

Commande* CommandeFinMacro::virtualConstructor(Parser* p) {
    cout << "FINMACRO" << endl;
    return new CommandeFinMacro();
}

void CommandeFinMacro::executer(Robot* r) {
    // NOPE !
}

void CommandeFinMacro::annuler(Robot* r) {
    // NOPE !
}

bool CommandeFinMacro::estAnnulable() {
    return false;
}

