#include "Knight.h"
#include "DefaultValues.h"
#include "Game.h"

void Knight::performSecondarySkill() {
    Knight::setHealth(Knight::getHealth()+healthRestored);
}