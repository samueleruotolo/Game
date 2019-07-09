#include "Projectile.h"
#include "DefaultValues.h"
#include "Skeleton.h"

GameCharacter* Projectile::fightLeft(Game &game) {
    int maxRange = range;
    GameCharacter* foundPtr = nullptr;
    while (maxRange > 0) {
        for (auto element = (game.getEnemies()).begin(); element != (game.getEnemies()).end(); element++) {
            if ((Projectile::posX == element->get()->getPosX()) && (Projectile::posY == element->get()->getPosY()))
                foundPtr = element->get();
        }
        Projectile::posX--;
        maxRange--;
    }
    return foundPtr;
}

GameCharacter* Projectile::fightRight(Game &game) {
    int maxRange = range;
    GameCharacter* foundPtr = nullptr;
    while (maxRange > 0) {
        for (auto element = (game.getEnemies()).begin(); element != (game.getEnemies()).end(); element++) {
            if ((Projectile::posX == element->get()->getPosX()) && (Projectile::posY == element->get()->getPosY()))
                foundPtr = element->get();
        }
        Projectile::posX++;
        maxRange--;
    }
    return foundPtr;
}

GameCharacter* Projectile::fightUp(Game &game) {
    int maxRange = range;
    GameCharacter* foundPtr = nullptr;
    while (maxRange > 0) {
        for (auto element = (game.getEnemies()).begin(); element != (game.getEnemies()).end(); element++) {
            if ((Projectile::posX == element->get()->getPosX()) && (Projectile::posY == element->get()->getPosY()))
                foundPtr = element->get();
        }
        Projectile::posY--;
        maxRange--;
    }
    return foundPtr;
}

GameCharacter* Projectile::fightDown(Game &game) {
    int maxRange = range;
    GameCharacter* foundPtr = nullptr;
    while (maxRange > 0) {
        for (auto element = (game.getEnemies()).begin(); element != (game.getEnemies()).end(); element++) {
            if ((Projectile::posX == element->get()->getPosX()) && (Projectile::posY == element->get()->getPosY()))
                foundPtr = element->get();
        }
        Projectile::posY++;
        maxRange--;
    }
    return foundPtr;
}
