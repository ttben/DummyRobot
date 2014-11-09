#include <iostream>

using namespace std;

#include "Robot.h"
#include "SingletonHandler.h"
#include "Plot.h"
int main()
{
    Robot r;

    cout << "Creation d'un singleton de EtatRobotAVide" << endl;
    EtatRobot* erav = EtatRobotAVide::getInstance();

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
    cout << r << endl;
    return 0;
}
