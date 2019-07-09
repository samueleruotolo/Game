#include "RangedHero.h"
#include "Projectile.h"
#include "DefaultValues.h"

void RangedHero::basicAttack(Game &game, int keyPressed) {
    Projectile projectile = Projectile(RangedHero::getPosX(), RangedHero::getPosY());

    if (keyPressed == right) {
        GameCharacter* p = projectile.fightRight(game);
        if (p != nullptr) {
            p->setHealth(p->getHealth() - RangedHero::getAttack() * (1 - (p->getArmor() / 100)));
            if (p->getHealth() <= 0)
                game.deleteEnemies(p);
        }
        delete(p);
    } else if (keyPressed == left) {
        GameCharacter* p = projectile.fightLeft(game);
        if (p != nullptr) {
            p->setHealth(p->getHealth() - RangedHero::getAttack() * (1 - (p->getArmor() / 100)));
            if (p->getHealth() <= 0)
                game.deleteEnemies(p);
        }
        delete(p);
    } else if (keyPressed == up) {
        GameCharacter* p = projectile.fightUp(game);
        if (p != nullptr) {
            p->setHealth(p->getHealth() - RangedHero::getAttack() * (1 - (p->getArmor() / 100)));
            if (p->getHealth() <= 0)
                game.deleteEnemies(p);
        }
        delete(p);
    } else if (keyPressed == down) {
        GameCharacter* p = projectile.fightDown(game);
        if (p != nullptr) {
            p->setHealth(p->getHealth() - RangedHero::getAttack() * (1 - (p->getArmor() / 100)));
            if (p->getHealth() <= 0)
                game.deleteEnemies(p);
        }
        delete(p);
    }
}