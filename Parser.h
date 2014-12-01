using namespace std;

#ifndef __Parser_h__
#define __Parser_h__

#include <exception>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

#include <vector>
#include <stdio.h>
#include <string.h>
#include <exception>
#include <string>

#include "Invocateur.h"
#include "Robot.h"
#include "Plot.h"

class Commande;
class Parser: public Invocateur
{

public:
    void select_file(string file);
    void execute_next_action(Robot* r);
    void annuler_action(Robot* r);
	Objet getObjet();
    int getInt();
    string getString();
    Plot getPlot();

private:
    ifstream* fichier;
    vector<Commande*> commandes_executees;

    string getNomCommande(string ligne);
    void updateString(vector<string> elems);
    vector<string> split(string str,string sep);


};

#endif
