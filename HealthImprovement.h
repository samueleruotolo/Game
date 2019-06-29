#ifndef GAME_HEALTHIMPROVEMENT_H
#define GAME_HEALTHIMPROVEMENT_H


#include "PowerUp.h"

class HealthImprovement : public PowerUp {
public:
    HealthImprovement();
    ~HealthImprovement();

    void improveStat(GameCharacter& character) override;
};


#endif //GAME_HEALTHIMPROVEMENT_H
