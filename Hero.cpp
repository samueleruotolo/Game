#include "Hero.h"
#include "Chest.h"

void Hero::interact(Chest &chest, GameCharacter& character) {
    if (!chest.getIsOpen()) {
        chest.setIsOpen(true);
        chest.givePowerUp(character);
    }
}

void Hero::performPrimarySkill() {
    void Hero::performPrimarySkill() {
        sf::Time maxTime = sf::seconds(5);
        sf::Clock clock;
        int armor = Hero::getArmor();
        Wizard::setArmor(100);
        while (true) {
            if (clock.getElapsedTime() > maxTime) {
                Hero::setArmor(armor);
                return;
            }
        }
    }
}