using namespace std;

#ifndef __Afficheur_h__
#define __Afficheur_h__

#include <exception>
#include "Robot.h"
#include "Observer.h"

class Afficheur: public Observer
{
public:
    Robot* _sujet;
    Afficheur(Robot* _r) {
        _sujet = _r;
        _r->attach(this);
    }
    void update() {};
};

#endif
