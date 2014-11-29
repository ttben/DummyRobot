#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeRepartir_h__
#define __CommandeRepartir_h__

#include "Commande.h"

class CommandeRepartir: public Commande
{
    public:
        static CommandeRepartir monExemplaire;


    public:
        CommandeRepartir() : Commande() {};
        CommandeRepartir(string nom);
        Commande* virtualConstructor(Parser p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
