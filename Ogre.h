#ifndef GAME_OGRE_H
#define GAME_OGRE_H


#include "MeleeBoss.h"

class Ogre : public MeleeBoss {
public:
    explicit Ogre (int h=750, int ar=25, int at=75, int X=0, int Y=0) : MeleeBoss(h, ar, at, X, Y) {}
    ~Ogre() {}
};


#endif //GAME_OGRE_H
