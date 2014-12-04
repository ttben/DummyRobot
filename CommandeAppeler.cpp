#include <exception>
#include <string>
using namespace std;

#include "CommandeAppeler.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeAppeler CommandeAppeler::monExemplaire("APPELER");

CommandeAppeler::CommandeAppeler(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

CommandeAppeler::CommandeAppeler(string nom, bool inscrire) {
    if(inscrire){
        Commande::commandesInscrites()[nom] = this;
    }else{
        this->_nom = nom;
    }
}

Commande* CommandeAppeler::virtualConstructor(Parser* p) {
    _nom = p->getString();
    return new CommandeAppeler(_nom, false);
}

void CommandeAppeler::executer(Robot* r) {
    cout << "EXECUTION DE APPELER(" << _nom << ")" << endl;
    vector<Commande*> commandes = Commande::macroCommandes[_nom];
    for(int i=0; i<commandes.size(); i++){
        commandes[i]->executer(r);
    }
}

void CommandeAppeler::annuler(Robot* r) {
    cout << "ANNULATION DE APPELER(" << _nom << ")" << endl;
    vector<Commande*> commandes = Commande::macroCommandes[_nom];
    for(int i=commandes.size()-1; i>=0; i--){
        commandes[i]->annuler(r);
    }
}

bool CommandeAppeler::estAnnulable() {
    return true;
}

