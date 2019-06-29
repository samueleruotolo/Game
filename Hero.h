#ifndef GAME_HERO_H
#define GAME_HERO_H


#include "GameCharacter.h"
#include "Chest.h"

class Hero : public GameCharacter {
public:
    virtual int basicAttack(GameCharacter &enemy) = 0;
    virtual int performPrimarySkill() = 0;
    virtual int performSecondarySkill() = 0;

    void interact(Chest& chest);
};


#endif //GAME_HERO_H
