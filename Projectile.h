#ifndef GAME_PROJECTILE_H
#define GAME_PROJECTILE_H


#include "Game.h"
#include "GameCharacter.h"
#include "Knight.h"

class Projectile {
public:
    Projectile(int X, int Y) : posX(X), posY(Y) {}
    ~Projectile() {}

    GameCharacter* fightLeft(Game& game);
    GameCharacter* fightRight(Game& game);
    GameCharacter* fightUp(Game& game);
    GameCharacter* fightDown(Game& game);
private:
    int posX;
    int posY;
};


#endif //GAME_PROJECTILE_H
