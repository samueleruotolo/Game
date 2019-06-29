#ifndef GAME_ATTACKIMPROVEMENT_H
#define GAME_ATTACKIMPROVEMENT_H


#include "PowerUp.h"

class AttackImprovement : public PowerUp {
public:
    AttackImprovement();
    ~AttackImprovement();

    void improveStat(GameCharacter& character) override;
};


#endif //GAME_ATTACKIMPROVEMENT_H
