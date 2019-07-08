#include "Wizard.h"
#include "DefaultValues.h"
#include <SFML/System/Clock.hpp>

void Wizard::basicAttack() {

}

void Wizard::performPrimarySkill() {
    Wizard::setAttack(Wizard::getAttack()*2);
    Wizard::basicAttack();
    Wizard::setAttack(Wizard::getAttack()/2);
}

void Wizard::performSecondarySkill() {
    sf::Time maxTime = sf::seconds(5);
    sf::Clock clock;
    Wizard::setArmor(Wizard::getArmor()+statImprovement);
    while (true) {
        if (clock.getElapsedTime() > maxTime) {
            Wizard::setArmor(Wizard::getArmor() - statImprovement);
            return;
        }
    }
}