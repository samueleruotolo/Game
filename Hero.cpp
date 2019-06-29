#include "Hero.h"
#include "Chest.h"

void Hero::interact(Chest &chest) {
    if (!chest.getIsOpen()) {
        chest.setIsOpen(true);
        chest.givePowerUp();
    }
}
