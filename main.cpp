#include <iostream>

using namespace std;

#include "Robot.h"
#include "SingletonHandler.h"
#include "Plot.h"
#include "Afficheur.h"
#include "AfficheurLigne.h"
int main()
{
    Robot r;

    cout << "Creation d'un singleton de EtatRobotAVide" << endl;
   // EtatRobot* erav = EtatRobotAVide::getInstance();

    Afficheur a = AfficheurLigne(&r);


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
        cout << "Tentative d'effectuer une action non autorisee ..." << endl;
        r.repartir();
    }
    catch (EtatRobot::UnAuthorizedAction e) {
        cout << "Erreur d'execution attendue, relevee" << endl;
    }
    cout << r << endl;
    return 0;
}
