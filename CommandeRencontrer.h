#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeRencontrer_h__
#define __CommandeRencontrer_h__

#include "Commande.h"

class CommandeRencontrer: public Commande
{
    public:
        static CommandeRencontrer monExemplaire;

    private :
        Plot _plot;

        CommandeRencontrer(Plot p);


    public:
        CommandeRencontrer() : Commande() {};
        CommandeRencontrer(string nom);
        Commande* virtualConstructor(Parser* p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
