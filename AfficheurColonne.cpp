#include "AfficheurColonne.h"

void AfficheurColonne::update() {
    cout << "AFFICHEUR COLONNE :" << endl
        << "- Dernière commande : " << _sujet->getDernierOrdre() << endl
        << "- Robot : " << *(_sujet) << endl;
}
