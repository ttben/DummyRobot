#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeAvancer_h__
#define __CommandeAvancer_h__

#include "Commande.h"

class CommandeAvancer: public Commande
{
    public:
        static CommandeAvancer* monExemplaire;

        public: CommandeAvancer() : Commande() {};
	public: CommandeAvancer(string nom);

	public: Commande* virtualConstructor(Parser p);

	public: virtual void executer();

	public: virtual void annuler();

	public: virtual bool estAnnulable();
};

#endif
