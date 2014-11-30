#include <exception>
#include <string>
using namespace std;

#include "CommandeTourner.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeTourner CommandeTourner::monExemplaire("TOURNER");

CommandeTourner::CommandeTourner(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

CommandeTourner::CommandeTourner(string d, bool inscrire) {
    if(inscrire){
        Commande::commandesInscrites()[d] = this;
    }else{
        this->_d = d;
    }

}

Commande* CommandeTourner::virtualConstructor(Parser p) {
    _d = p.getString();

    cout << "ON A DEMANDE DE CONSTRUIRE UN TOURNER (" << _d << ")" << endl;
    return new CommandeTourner(_d);
}

void CommandeTourner::executer(Robot* r) {
    _old_d = r->GetDirection();
    cout << "EXECUTION DE TOURNER " << _d << endl;
    r->tourner(_d);
    //Commande::commandes_executees.push_back(this);
}

void CommandeTourner::annuler(Robot* r) {
    cout << "ANNULATION DE TOURNER(" << _d << ") RETOUR A (" << _old_d << ")" << endl;
    r->tourner(_d);
}

bool CommandeTourner::estAnnulable() {
    return true;
}

