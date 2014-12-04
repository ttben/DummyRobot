#include <exception>
#include <string>
using namespace std;

#include "CommandeAnnuler.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeAnnuler CommandeAnnuler::monExemplaire("ANNULER");

CommandeAnnuler::CommandeAnnuler(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

CommandeAnnuler::CommandeAnnuler(Parser *p) {
     _p = p;
}

Commande* CommandeAnnuler::virtualConstructor(Parser* p) {
    return new CommandeAnnuler(p);
}

void CommandeAnnuler::executer(Robot* r) {
    _p->annuler_action(r);
    //Commande::commandes_executees.push_back(this);
}

void CommandeAnnuler::annuler(Robot* r) {
    // NOPE
}

bool CommandeAnnuler::estAnnulable() {
    return false;
}

