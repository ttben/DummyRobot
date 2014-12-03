
using namespace std;

#include "Robot.h"
#include "Afficheur.h"
#include "AfficheurColonne.h"
#include "Parser.h"
#include <iostream>

int main()
{

    /*Robot r;

    Afficheur aC = AfficheurColonne(&r);

    r.attach(&aC);

    Plot p(8);
    Objet o(5);
    cout << r << endl;

    r.rencontrerPlot(p);
    r.tourner("E");
    r.avancer(4, 5);
    r.rencontrerPlot(p);
    r.saisir(o);
    r.tourner("O");
    r.avancer(2, 3);
    r.rencontrerPlot(p);
    r.poser();
    r.figer();
    r.repartir();
    try {
        cout << "-- Tentative d'effectuer une action non autorisee ..." << endl;
        r.repartir();
    }
    catch (EtatRobot::UnAuthorizedAction e) {
        cout << "\tErreur d'execution attendue, relevee ==> OK" << endl;
    }*/


    Robot r;
    Afficheur a = AfficheurColonne(&r);
    r.attach(&a);

    Parser p;
    p.select_file("commandes_sources.txt");
    p.execute_next_action(&r);
    p.execute_next_action(&r);
    p.execute_next_action(&r);
    p.execute_next_action(&r);
    p.execute_next_action(&r);
    p.execute_next_action(&r);
    p.execute_next_action(&r);
    p.annuler_action(&r);
    p.annuler_action(&r);
    p.annuler_action(&r);
    p.annuler_action(&r);
    p.annuler_action(&r);
    p.annuler_action(&r);
    p.annuler_action(&r);

    // ET TA MERE CA MARCHE PAS CE BORDEL A CAUSE DE ETATENROUTE #@%%#@$!
    p.execute_next_action(&r);
    p.execute_next_action(&r);
    p.annuler_action(&r);
    p.annuler_action(&r);
    p.execute_next_action(&r);
    p.annuler_action(&r);

    return 0;
}
