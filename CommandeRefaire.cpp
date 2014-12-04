#include <exception>
#include <string>
using namespace std;

#include "CommandeRefaire.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeRefaire CommandeRefaire::monExemplaire("REFAIRE");

CommandeRefaire::CommandeRefaire(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

CommandeRefaire::CommandeRefaire(Parser* p) {
    _p = p;
}

Commande* CommandeRefaire::virtualConstructor(Parser* p) {
    return new CommandeRefaire(p);
}

void CommandeRefaire::executer(Robot* r) {
    _p->refaire_action(r);
}

void CommandeRefaire::annuler(Robot* r) {
    // NOPE
}

bool CommandeRefaire::estAnnulable() {
    return false;
}

