#include <iostream>

using namespace std;

#include "Robot.h"
#include "SingletonHandler.h"

int main()
{
    Robot r;

    EtatRobot* erav = EtatRobotAVide::getInstance();
    if(SingletonHandler::existe("EtatRobotAVide")) {
        cout << "Singleton correctement cree" << endl;
    }

    EtatRobot* erav2 = EtatRobotAVide::getInstance();
    EtatRobot* erav3 = EtatRobotAVide::getInstance();
    EtatRobot* erav4 = EtatRobotAVide::getInstance();

    cout << &erav << " vs " <<  &erav2 << " vs " << &erav3 << " vs " << &erav4 << endl;

    cout << r << endl;
    return 0;
}
