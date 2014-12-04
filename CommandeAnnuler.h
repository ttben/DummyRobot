#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeAnnuler_h__
#define __CommandeAnnuler_h__

#include "Commande.h"

class CommandeAnnuler: public Commande
{
    public:
        static CommandeAnnuler monExemplaire;

    private :
        Parser *_p;

        CommandeAnnuler(Parser *p);


    public:
        CommandeAnnuler() : Commande() {};
        CommandeAnnuler(string nom);
        Commande* virtualConstructor(Parser* p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
