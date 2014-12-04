#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeSaisir_h__
#define __CommandeSaisir_h__

#include "Commande.h"
#include "Objet.h"

class CommandeSaisir: public Commande
{
    public:
        static CommandeSaisir monExemplaire;

    private :
        Objet _objet;

        CommandeSaisir(Objet o);


    public:
        CommandeSaisir() : Commande() {};
        CommandeSaisir(string nom);
        Commande* virtualConstructor(Parser* p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
