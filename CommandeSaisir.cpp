#include <exception>
#include <string>
using namespace std;

#include "CommandeSaisir.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeSaisir CommandeSaisir::monExemplaire("SAISIR");

CommandeSaisir::CommandeSaisir(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

CommandeSaisir::CommandeSaisir(Objet o) {
    this->_objet = o;
}

Commande* CommandeSaisir::virtualConstructor(Parser p) {
    _objet = p.getObjet();

    cout << "ON A DEMANDE DE CONSTRUIRE UN SAISIR (" << _objet << ")" << endl;
    return new CommandeSaisir(_objet);
}

void CommandeSaisir::executer(Robot* r) {
    cout << "EXECUTION DE SAISIR " << _objet << endl;
    r->saisir(_objet);
    //Commande::commandes_executees.push_back(this);
}

void CommandeSaisir::annuler(Robot* r) {
    cout << "ANNULATION DE SAISIR(" << _objet << ")" << endl;
    r->poser();
}

bool CommandeSaisir::estAnnulable() {
    return true;
}

