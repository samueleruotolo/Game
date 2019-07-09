#ifndef GAME_RANGEDHERO_H
#define GAME_RANGEDHERO_H


#include "Hero.h"

class RangedHero : public Hero {
public:
    explicit RangedHero(int h, int ar, int at, int X, int Y) : Hero(h, ar, at, X, Y) {};
    virtual ~RangedHero() {}

    void basicAttack(Game& game, int keyPressed) override;
    void performSecondarySkill() = 0;
};


#endif //GAME_RANGEDHERO_H
