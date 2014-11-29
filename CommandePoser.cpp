#include <exception>
#include <string>
using namespace std;

#include "CommandePoser.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandePoser CommandePoser::monExemplaire("POSER");

CommandePoser::CommandePoser(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

Commande* CommandePoser::virtualConstructor(Parser p) {
    cout << "ON A DEMANDE DE CONSTRUIRE UN POSER ()" << endl;
    return new CommandePoser();
}

void CommandePoser::executer(Robot* r) {
    _old_objet = r->GetObjet();
    cout << "EXECUTION DE POSER" << endl;
    r->poser();
    //Commande::commandes_executees.push_back(this);
}

void CommandePoser::annuler(Robot* r) {
    cout << "ANNULATION DE POSER() RETOUR A (" << _old_objet << ")" << endl;
    r->saisir(_old_objet);
}

bool CommandePoser::estAnnulable() {
    return true;
}

