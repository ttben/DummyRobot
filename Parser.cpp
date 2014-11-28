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
            this->current_line = contenu;
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
    updateString(elems);
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

void Parser::updateString(vector<string> elems) {
    current_line = "";
    for(int i = 1 ; i < elems.size() ; i ++) {
        current_line += elems.at(i);
        current_line += " ";
    }

}

int Parser::getInt() {
    vector<std::string> elems;
    cout << "CURRENT LINE:" << current_line << endl;
    elems = split(current_line, " ");
    int i = atoi(elems.at(0).c_str());
    updateString(elems);
    return i;
}

string Parser::getString() {
    vector<std::string> elems;
    elems = split(current_line, " ");
    updateString(elems);
    return elems.at(0);
}

