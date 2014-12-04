#include <exception>
#include <string>
using namespace std;

#include "CommandeRencontrer.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeRencontrer CommandeRencontrer::monExemplaire("RENCONTREROBST");

CommandeRencontrer::CommandeRencontrer(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

CommandeRencontrer::CommandeRencontrer(Plot p) {
    this->_plot = p;
}

Commande* CommandeRencontrer::virtualConstructor(Parser* p) {
    _plot = p->getPlot();

    return new CommandeRencontrer(_plot);
}

void CommandeRencontrer::executer(Robot* r) {
    cout << "EXECUTION DE RENCONTRER(" << _plot << ")" << endl;
    r->rencontrerPlot(_plot);
    //Commande::commandes_executees.push_back(this);
}

void CommandeRencontrer::annuler(Robot* r) {
    cout << "ANNULATION DE RENCONTRER(" << _plot << ")" << endl;
    r->tourner(r->GetDirection());
}

bool CommandeRencontrer::estAnnulable() {
    return true;
}

