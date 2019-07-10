#include "Hero.h"
#include "Chest.h"
#include <SFML/System/Clock.hpp>

void Hero::interact(Chest &chest, GameCharacter& character) {
    if (!chest.getIsOpen()) {
        chest.setIsOpen(true);
        chest.givePowerUp(character);
    }
}

void Hero::performPrimarySkill() {
    sf::Time maxTime = sf::seconds(5);
    sf::Clock clock;
    int armor = Hero::getArmor();
    Hero::setArmor(100);
    while (true) {
        if (clock.getElapsedTime() > maxTime) {
            Hero::setArmor(armor);
            return;
        }
    }
}