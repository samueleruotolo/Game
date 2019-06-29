#include <iostream>
#include "HealthImprovement.h"

void HealthImprovement::improveStat(GameCharacter &character) {
    if (character.getHealth()<250)
        character.setHealth(10);
    else
        std::cout << "Maximum health reached" << std::endl;
}
