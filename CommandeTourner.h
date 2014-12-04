#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeTourner_h__
#define __CommandeTourner_h__

#include "Commande.h"

class CommandeTourner: public Commande
{
    public:
        static CommandeTourner monExemplaire;

    private :
        string _d;

        string _old_d;

        CommandeTourner(string d, bool inscrire);


    public:
        CommandeTourner() : Commande() {};
        CommandeTourner(string nom);
        Commande* virtualConstructor(Parser* p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
