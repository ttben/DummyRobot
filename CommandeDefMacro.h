#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeAvancer_h__
#define __CommandeAvancer_h__

#include "Commande.h"

class CommandeDefMacro: public Commande
{
    public:
        static CommandeDefMacro monExemplaire;

    private :

        CommandeDefMacro(string nom, vector<Commande*> commandes);


    public:
        CommandeDefMacro() : Commande() {};
        CommandeDefMacro(string nom);
        Commande* virtualConstructor(Parser* p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
