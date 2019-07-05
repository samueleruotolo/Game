#include "Knight.h"
#include "DefaultValues.h"

void Knight::performSecondarySkill() {
    Knight::setArmor(Knight::getArmor()+statImprovement);
    sf::Clock clock;
    Knight::setArmor(Knight::getArmor()-statImprovement);
}