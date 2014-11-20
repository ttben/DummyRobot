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

    cout << "Creation d'un singleton de EtatRobotAVide" << endl;
   // EtatRobot* erav = EtatRobotAVide::getInstance();

    Afficheur aLigne = AfficheurLigne(&r);
    Afficheur aColonne = AfficheurColonne(&r);
    r.attach(&aLigne);
    r.attach(&aColonne);

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
    r.rencontrerPlot(p);
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
