
using namespace std;

#ifndef __Commande_h__
#define __Commande_h__

#include <iostream>
#include <exception>
#include <string>
#include <map>

#include "Robot.h"
#include "Parser.h"

using namespace std;

class Parser;
class Commande
{
	public: static map<string, Commande*> &commandesInscrites();
	static map<string, vector<Commande*> > macroCommandes;

	public:
        Parser* _invocateur;

	protected:
        Commande(){};
        Commande(string nom, Parser* i){};

	public: static Commande* nouvelleCommande(string c, Parser* p) {
        return commandesInscrites()[c]->virtualConstructor(p);
	}

	public:
        virtual void executer(Robot* r) = 0;
        virtual void annuler(Robot* r) = 0;
        virtual bool estAnnulable() = 0;
        virtual Commande* virtualConstructor(Parser* p) = 0;
};

#endif
