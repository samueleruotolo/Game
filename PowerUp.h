#ifndef GAME_POWERUP_H
#define GAME_POWERUP_H


#include "GameCharacter.h"

class PowerUp {
public:
    PowerUp();
    virtual ~PowerUp();
    virtual void improveStat(GameCharacter& character) = 0;
};


#endif //GAME_POWERUP_H
