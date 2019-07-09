#include "Marksman.h"
#include "DefaultValues.h"
#include <SFML/System/Clock.hpp>

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