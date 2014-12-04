#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeFinMacro_h__
#define __CommandeFinMacro_h__

#include "Commande.h"

class CommandeFinMacro: public Commande
{
    public:
        static CommandeFinMacro monExemplaire;

    public:
        CommandeFinMacro() : Commande() {};
        CommandeFinMacro(string nom);
        Commande* virtualConstructor(Parser* p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
