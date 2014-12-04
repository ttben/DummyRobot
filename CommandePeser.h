#include <exception>
#include <string>
using namespace std;

#ifndef __CommandePeser_h__
#define __CommandePeser_h__

#include "Commande.h"

class CommandePeser: public Commande
{
    public:
        static CommandePeser monExemplaire;

    public:
        CommandePeser() : Commande() {};
        CommandePeser(string nom);
        Commande* virtualConstructor(Parser* p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
