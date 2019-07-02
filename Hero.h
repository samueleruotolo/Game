#ifndef GAME_HERO_H
#define GAME_HERO_H


#include "GameCharacter.h"
#include "Chest.h"

class Hero : public GameCharacter {
public:
    Hero (int h, int ar, int at, int X, int Y) : GameCharacter(h, ar, at, X, Y) {}
    virtual ~Hero();

    virtual int basicAttack(GameCharacter &enemy) = 0;
    virtual int performPrimarySkill() = 0;
    virtual int performSecondarySkill() = 0;

    void interact(Chest& chest, GameCharacter& character);
};


#endif //GAME_HERO_H
