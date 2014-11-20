#include <exception>
using namespace std;

#ifndef __Afficheur_h__
#define __Afficheur_h__

#include "Robot.h"
#include "Observer.h"

//class Robot;
// class Observer;
//class Afficheur;

class Afficheur: public Observer
{
public:
    Robot* _sujet;

    Afficheur() {};

    Afficheur(Robot* _r);

    void update();
};

#endif
