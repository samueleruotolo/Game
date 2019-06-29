#include <iostream>
#include "ArmorImprovement.h"

void ArmorImprovement::improveStat(GameCharacter &character) {
    if (character.getArmor()<20)
        character.setArmor(2);
    else
        std::cout << "Maximum armor reached" << std::endl;
}




