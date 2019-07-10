#include <cmath>
#include "MeleeEnemy.h"
#include "Game.h"
#include "DefaultValues.h"

void MeleeEnemy::basicAttack(Game &game, int keyPressed) {

}

void MeleeEnemy::move(Game &game) {
    int dirX = game.getHero()->getPosX() - MeleeEnemy::getPosX();
    int dirY = game.getHero()->getPosY() - MeleeEnemy::getPosY();

    int hypotenuse = sqrt(dirX*dirX + dirY*dirY);
    dirX /= hypotenuse;
    dirY /= hypotenuse;

    MeleeEnemy::setPosX(dirX * enemyMeleeSpeed);
    MeleeEnemy::setPosY(dirY * enemyMeleeSpeed);
}