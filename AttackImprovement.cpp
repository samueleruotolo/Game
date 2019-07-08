#include <iostream>
#include "AttackImprovement.h"

void AttackImprovement::improveStat(GameCharacter &character) {
    if (character.getAttack()<100)
        character.setAttack(2);
}

