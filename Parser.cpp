using namespace std;

#include <iostream>
#include <fstream>

#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <exception>
#include <string>

#include "Parser.h"
#include "Robot.h"
#include "Commande.h"
#include "Plot.h"

void Parser::annuler_action(Robot* r) {
    if(commandePtr == 0) return;
    commandePtr--;
    commandes_executees[commandePtr]->annuler(r);
}

void Parser::refaire_action(Robot* r) {
    if(commandePtr >= commandes_executees.size())return;
    commandes_executees[commandePtr]->executer(r);
    commandePtr++;
}


void Parser::select_file(string file) {
    fichier = new ifstream("cmd.txt", ios::in);

    //ifstream in(file);
    if(&fichier) {
        cout << "Fichier ouvert correctement " << endl;
    }
    else {
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    }
}

void Parser::execute_next_action(Robot* r) {
    Commande* c = getCommande();
    if(c->estAnnulable()){
        while(commandes_executees.size()!=commandePtr){
            commandes_executees.pop_back();
        }
        commandes_executees.push_back(c);
        commandePtr++;
    }
    c->executer(r);
}

string Parser::getNomCommande(string ligne) {
    vector<std::string> elems;
    elems = split(ligne, " ");
    updateString(elems);
    return elems.at(0);
}

vector<string> Parser::split(string str,string sep){
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
    vector<string> elems;
    elems = split(current_line, " ");
    int i = atoi(elems.at(0).c_str());
    updateString(elems);
    return i;
}

string Parser::getString() {
    vector<string> elems;
    elems = split(current_line, " ");
    updateString(elems);
    return elems.at(0);
}

Plot Parser::getPlot(){
    return Plot(getInt());
}

Objet Parser::getObjet(){
    return Objet(getInt());
}

Commande* Parser::getCommande(){
    string contenu;
    getline(*fichier, contenu);
    this->current_line = contenu;
    string nomCommande = getNomCommande(contenu);
    return Commande::nouvelleCommande(nomCommande, this);
}
