#include "Wizard.h"
#include "DefaultValues.h"
#include "Projectile.h"
#include <SFML/System/Clock.hpp>

void Wizard::performSecondarySkill() {
    sf::Time maxTime = sf::seconds(5);
    sf::Clock clock;
    Wizard::setAttack(Wizard::getAttack()+statImprovement);
    while (true) {
        if (clock.getElapsedTime() > maxTime) {
            Wizard::setArmor(Wizard::getAttack() - statImprovement);
            return;
        }
    }
}