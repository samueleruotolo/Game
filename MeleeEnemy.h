#ifndef GAME_MELEEENEMY_H
#define GAME_MELEEENEMY_H


#include "GameCharacter.h"

class MeleeEnemy : public GameCharacter {
public:
    MeleeEnemy(int h, int ar, int at, int X, int Y) : GameCharacter(h, ar, at, X, Y) {}
    virtual ~MeleeEnemy() {}

    void basicAttack(Game& game, int keyPressed) override;
    void move(Game& game);
};


#endif //GAME_MELEEENEMY_H
