#ifndef GAME_MELEEHERO_H
#define GAME_MELEEHERO_H


#include "Hero.h"

class MeleeHero : public Hero {
public:
    explicit MeleeHero(int h, int ar, int at, int X, int Y) : Hero(h, ar, at, X, Y) {};
    virtual ~MeleeHero() {}

    void basicAttack(Game& game, int keyPressed) override;
    virtual void performSecondarySkill() = 0;
};


#endif //GAME_MELEEHERO_H
