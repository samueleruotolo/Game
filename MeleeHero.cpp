#include "MeleeHero.h"
#include "DefaultValues.h"
#include "Game.h"

void MeleeHero::basicAttack(Game &game, int keyPressed) {
    if (keyPressed == right) {
        for (auto element = (game.getEnemies()).begin(); element != (game.getEnemies()).end(); element++) {
            if ((MeleeHero::getPosX() - (element->get()->getPosX())) && (MeleeHero::getPosY() - (element->get()->getPosY())))
                element->get()->setHealth(element->get()->getHealth() - MeleeHero::getAttack() * (1 - element->get()->getArmor()));
        }
    }
}