using namespace std;

#include <exception>
#include <string>
#include <map>

#include "Commande.h"

map<string, Commande*>& Commande::commandesInscrites()
{
    static map<string, Commande*>* cmdInscrites = new map<string, Commande*>;
    return *cmdInscrites;
}
