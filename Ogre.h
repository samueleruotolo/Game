#ifndef GAME_OGRE_H
#define GAME_OGRE_H


#include "Boss.h"

class Ogre : public Boss {
public:
    explicit Ogre (int h=750, int ar=25, int at=75, int X=0, int Y=0) : Boss(h, ar, at, X, Y) {}
    ~Ogre() {}

    void basicAttack() override;
};


#endif //GAME_OGRE_H
