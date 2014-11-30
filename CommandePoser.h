#include <exception>
#include <string>
using namespace std;

#ifndef __CommandePoser_h__
#define __CommandePoser_h__

#include "Commande.h"

class CommandePoser: public Commande
{
    public:
        static CommandePoser monExemplaire;

    private :
        Objet _old_objet;


    public:
        CommandePoser() : Commande() {};
        CommandePoser(string nom);
        Commande* virtualConstructor(Parser p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
