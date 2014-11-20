#ifndef AFFICHEURLIGNE_H
#define AFFICHEURLIGNE_H

#include "Afficheur.h"

class AfficheurLigne : public Afficheur
{
    public:
        AfficheurLigne(Robot* _r):Afficheur(_r){};

        void update();
};

#endif // AFFICHEURLIGNE_H
