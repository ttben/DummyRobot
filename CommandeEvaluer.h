#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeEvaluer_h__
#define __CommandeEvaluer_h__

#include "Commande.h"

class CommandeEvaluer: public Commande
{
    public:
        static CommandeEvaluer monExemplaire;

    public:
        CommandeEvaluer() : Commande() {};
        CommandeEvaluer(string nom);
        Commande* virtualConstructor(Parser* p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
