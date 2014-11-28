#include <exception>
#include <string>
using namespace std;

#include "Parser.h"
#include "Invocateur.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include "Commande.h"
void Parser::load(string file) {
    ifstream fichier(file, ios::in);

    if(fichier)
    {
        string contenu;
        while(getline(fichier, contenu)) {
            string nomCommande = getNomCommande(contenu);
            cout << "COMMANDE TROUVEE :: " << nomCommande << endl;
            Commande* c = Commande::nouvelleCommande(nomCommande, *this);
        }
        fichier.close();
    }
    else
        cerr << "Impossible d'ouvrir le fichier !" << endl;
}

string Parser::getNomCommande(string ligne) {

    vector<std::string> elems;
    elems = split(ligne, " ");
    return elems.at(0);
}

std::vector<std::string> Parser::split(std::string str,std::string sep){
    char* cstr=const_cast<char*>(str.c_str());
    char* current;
    std::vector<std::string> arr;
    current=strtok(cstr,sep.c_str());
    while(current!=NULL){
        arr.push_back(current);
        current=strtok(NULL,sep.c_str());
    }
    return arr;
}

void Parser::getInt() {
	throw "Not yet implemented";
}

void Parser::getString() {
	throw "Not yet implemented";
}

