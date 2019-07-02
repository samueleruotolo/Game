#include "Hero.h"
#include "Chest.h"

void Hero::interact(Chest &chest, GameCharacter& character) {
    if (!chest.getIsOpen()) {
        chest.setIsOpen(true);
        chest.givePowerUp(character);
    }
}