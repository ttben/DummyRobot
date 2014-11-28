#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeAvancer_h__
#define __CommandeAvancer_h__

#include "Commande.h"

// class Commande;
class CommandeAvancer;

class CommandeAvancer: public Commande
{

	public: CommandeAvancer(string nom);

	public: Commande virtualConstructor(string invocateur_Invocateur);

	public: virtual void executer();

	public: virtual void annuler();

	public: virtual bool estAnnulable();
};

#endif
