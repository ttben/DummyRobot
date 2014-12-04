#include <exception>
#include <string>
using namespace std;

#include "CommandeDefMacro.h"
#include "CommandeFinMacro.h"
#include "Commande.h"
#include "Parser.h"
#include "Robot.h"

CommandeDefMacro CommandeDefMacro::monExemplaire("DEFMACRO");

CommandeDefMacro::CommandeDefMacro(string nom) {
    Commande::commandesInscrites()[nom] = this;
}

CommandeDefMacro::CommandeDefMacro(string nom, vector<Commande*> commandes) {

}

Commande* CommandeDefMacro::virtualConstructor(Parser* p) {
    vector<Commande*> commandes;
    string nom = p->getString();
    Commande* c = p->getCommande();
    CommandeFinMacro* finMacro = 0;
    while(finMacro==0){
        commandes.push_back(c);
        c = p->getCommande();
        finMacro = dynamic_cast<CommandeFinMacro*>(c);
    }

    Commande::macroCommandes.insert ( std::pair<string,vector<Commande*> >(nom,commandes) );

    cout << "DEFMACRO " << nom << endl;
    return new CommandeDefMacro(nom, commandes);
}

void CommandeDefMacro::executer(Robot* r) {
    // NOPE !
}

void CommandeDefMacro::annuler(Robot* r) {
    // NOPE !
}

bool CommandeDefMacro::estAnnulable() {
    return false;
}

