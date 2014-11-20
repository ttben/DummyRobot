#include "AfficheurLigne.h"

void AfficheurLigne::update() {
    cout << "AFFICHEUR LIGNE :" << endl
        << "- Dernière commande : " << _sujet->getDernierOrdre() << endl
        << "- Robot : " << *(_sujet) << endl;
}
