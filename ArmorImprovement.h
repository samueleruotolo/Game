#ifndef GAME_ARMORIMPROVEMENT_H
#define GAME_ARMORIMPROVEMENT_H


#include "PowerUp.h"

class ArmorImprovement : public PowerUp{
public:
    ArmorImprovement() {};
    ~ArmorImprovement() {};

    void improveStat(GameCharacter& character) override;
};


#endif //GAME_ARMORIMPROVEMENT_H
