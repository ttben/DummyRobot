#include <exception>
#include <string>
#include <map>
using namespace std;

#ifndef __Commande_h__
#define __Commande_h__

#include "Parser.h"
#include <iostream>

using namespace std;


class Commande
{
	static map<string, Commande*> &commandesInscrites();

	public: Invocateur* _invocateur;

	protected:
        Commande();
        Commande(string nom, Parser i);

	public: static Commande* nouvelleCommande(string c, Parser p) {
        cout << "NOUVELLE COMMANDE DEMANDEE " << c << endl;
        return commandesInscrites()[c]->virtualConstructor(p);
	}

	public: virtual void executer() = 0;

	public: virtual void annuler() = 0;

	public: virtual bool estAnnulable() = 0;

	public: virtual Commande* virtualConstructor(Parser p) = 0;
};

#endif
