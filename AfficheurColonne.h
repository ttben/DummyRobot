#ifndef AFFICHEURCOLONNE_H
#define AFFICHEURCOLONNE_H

#include "Afficheur.h"

class AfficheurColonne : public Afficheur
{
    public:
        AfficheurColonne(Robot* _r): Afficheur(_r){};

        void update();
};

#endif // AFFICHEURLIGNE_H
