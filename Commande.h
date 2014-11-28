#include <exception>
#include <string>
#include <map>
using namespace std;

#ifndef __Commande_h__
#define __Commande_h__

#include "Invocateur.h"

__interface Invocateur;
class Commande;

__abstract class Commande
{
	private: map<string, Commande> _inscrireCommande;
	public: Invocateur* _invocateur;

	protected: Commande(string nom, Invocateur i);

	public: static void nouvelleCommande(string c) {
		throw "Not yet implemented";
	}

	public: virtual void executer() = 0;

	public: virtual void annuler() = 0;

	public: virtual bool estAnnulable() = 0;

	public: virtual Commande virtualConstructor(string invocateur_Invocateur) = 0;
};

#endif
