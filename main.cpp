#include <iostream>

using namespace std;

#include "Robot.h"
#include "SingletonHandler.h"
#include "Plot.h"
#include "Afficheur.h"
#include "AfficheurLigne.h"
#include "AfficheurColonne.h"

int main()
{
    Robot r;

    Afficheur aL = AfficheurLigne(&r);
    Afficheur aC = AfficheurColonne(&r);


    r.attach(&aL);
    r.attach(&aC);

/*
    //  Test SingletonHandler
    cout << "Creation de 3 autres EtatRobotAVide (normalement => meme @)" << endl;
    EtatRobot* erav2 = (EtatRobotAVide::getInstance());
    EtatRobot* erav3 = EtatRobotAVide::getInstance();
    EtatRobot* erav4 = EtatRobotAVide::getInstance();

    cout << "Toutes les valeurs ci-dessous doivent etre identiques" << endl;
    cout << erav << " | " <<  erav2 << " | " << erav3 << " | " << erav4 << endl;
*/
    cout << r << endl;
    Plot p;
    Objet o;
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
    }
    cout << r << endl;
    return 0;
}
