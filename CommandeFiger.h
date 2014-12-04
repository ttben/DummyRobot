#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeFiger_h__
#define __CommandeFiger_h__

#include "Commande.h"

class CommandeFiger: public Commande
{
    public:
        static CommandeFiger monExemplaire;

    public:
        CommandeFiger() : Commande() {};
        CommandeFiger(string nom);
        Commande* virtualConstructor(Parser* p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
