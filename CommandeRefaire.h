#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeRefaire_h__
#define __CommandeRefaire_h__

#include "Commande.h"

class CommandeRefaire: public Commande
{
    public:
        static CommandeRefaire monExemplaire;

    private :
        Parser *_p;

        CommandeRefaire(Parser *p);


    public:
        CommandeRefaire() : Commande() {};
        CommandeRefaire(string nom);
        Commande* virtualConstructor(Parser* p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
