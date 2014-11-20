#include <exception>
using namespace std;

#include "Afficheur.h"
#include "Robot.h"
#include "Observer.h"


Afficheur::Afficheur(Robot* _r) {
    _sujet = r;
    _r->attach(this);
}

void Afficheur::update() {
	cout << "update" << endl;
}

