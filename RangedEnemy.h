#ifndef GAME_RANGEDENEMY_H
#define GAME_RANGEDENEMY_H


#include "GameCharacter.h"

class RangedEnemy : public GameCharacter {
public:
    RangedEnemy(int h, int ar, int at, int X, int Y) : GameCharacter(h, ar, at, X, Y) {}
    virtual ~RangedEnemy() {}

    void basicAttack(Game& game, int keyPressed) override;
};


#endif //GAME_RANGEDENEMY_H
