#include <exception>
#include <string>
using namespace std;

#include "CommandeEvaluer.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeEvaluer CommandeEvaluer::monExemplaire("EVALUEROBST");

CommandeEvaluer::CommandeEvaluer(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

Commande* CommandeEvaluer::virtualConstructor(Parser p) {
    cout << "ON A DEMANDE DE CONSTRUIRE UN EVALUER ()" << endl;
    return new CommandeEvaluer();
}

void CommandeEvaluer::executer(Robot* r) {
    cout << "EXECUTION DE EVALUER" << endl;
    r->evaluerPlot();
    //Commande::commandes_executees.push_back(this);
}

void CommandeEvaluer::annuler(Robot* r) {
    // Non implémentée
}

bool CommandeEvaluer::estAnnulable() {
    return false;
}

