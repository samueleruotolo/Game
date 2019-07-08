#include "Marksman.h"
#include "DefaultValues.h"
#include <SFML/System/Clock.hpp>

void Marksman::basicAttack() {

}

void Marksman::performPrimarySkill() {
    Marksman::setAttack(Marksman::getAttack()*2);
    Marksman::basicAttack();
    Marksman::setAttack(Marksman::getAttack()/2);
}

void Marksman::performSecondarySkill() {
    sf::Time maxTime = sf::seconds(5);
    sf::Clock clock;
    Marksman::setArmor(Marksman::getArmor()+statImprovement);
    while (true) {
        if (clock.getElapsedTime() > maxTime) {
            Marksman::setArmor(Marksman::getArmor() - statImprovement);
            return;
        }
    }
}