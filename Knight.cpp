#include "Knight.h"
#include "DefaultValues.h"
#include "Projectile.h"
#include "Game.h"
#include <SFML/System/Clock.hpp>
#include <iostream>

void Knight::basicAttack() {
}

void Knight::performPrimarySkill() {
    Knight::setAttack(Knight::getAttack()*2);
    Knight::basicAttack();
    Knight::setAttack(Knight::getAttack()/2);
}

void Knight::performSecondarySkill() {
    sf::Time maxTime = sf::seconds(5);
    sf::Clock clock;
    Knight::setArmor(Knight::getArmor()+statImprovement);
    while (true) {
        if (clock.getElapsedTime() > maxTime) {
            Knight::setArmor(Knight::getArmor() - statImprovement);
            return;
        }
    }
}