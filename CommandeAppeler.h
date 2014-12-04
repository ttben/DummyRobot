#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeAppeler_h__
#define __CommandeAppeler_h__

#include "Commande.h"

class CommandeAppeler: public Commande
{
    public:
        static CommandeAppeler monExemplaire;

    private :
        string _nom;
        CommandeAppeler(string nom, bool inscrire);


    public:
        CommandeAppeler() : Commande() {};
        CommandeAppeler(string nom);
        Commande* virtualConstructor(Parser* p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
