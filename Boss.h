#ifndef GAME_BOSS_H
#define GAME_BOSS_H


#include "GameCharacter.h"

class Boss : public GameCharacter {
public:
    Boss (int h, int ar, int at, int X, int Y) : GameCharacter(h, ar, at, X, Y) {}
    virtual ~Boss() {}

    virtual void basicAttack(GameCharacter &enemy) = 0;
    void performBossSkill(GameCharacter& character);
private:
};


#endif //GAME_BOSS_H
