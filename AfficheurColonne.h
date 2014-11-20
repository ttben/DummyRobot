#ifndef AFFICHEURCOLONNE_H
#define AFFICHEURCOLONNE_H

#include "Afficheur.h"

class AfficheurColonne : public Afficheur
{
    public:
        AfficheurColonne(Robot* _r): Afficheur(_r){};

        void update() {
            cout << "AFFICHEUR COLONNE :" << _sujet->GetPosition() << endl;
        }
};

#endif // AFFICHEURLIGNE_H
