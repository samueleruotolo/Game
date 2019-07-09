#ifndef GAME_RANGEDBOSS_H
#define GAME_RANGEDBOSS_H


#include "Boss.h"

class RangedBoss : public Boss {
public:
    RangedBoss(int h, int ar, int at, int X, int Y) : Boss(h, ar, at, X, Y) {}
    virtual ~RangedBoss() {}

    void basicAttack(Game& game, int keyPressed) override;
};


#endif //GAME_RANGEDBOSS_H
