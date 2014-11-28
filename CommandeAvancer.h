#include <exception>
#include <string>
using namespace std;

#ifndef __CommandeAvancer_h__
#define __CommandeAvancer_h__

#include "Commande.h"

class CommandeAvancer: public Commande
{
    public:
        static CommandeAvancer monExemplaire;

    private :
        int _x;
        int _y;

        int _oldX;
        int _oldY;

        CommandeAvancer(int x, int y);


    public:
        CommandeAvancer() : Commande() {};
        CommandeAvancer(string nom);
        Commande* virtualConstructor(Parser p);

        void executer(Robot* r);
        void annuler(Robot* r);
        bool estAnnulable();
};

#endif
