#include <ctime>
#include "Chest.h"
#include "ArmorImprovement.h"
#include "AttackImprovement.h"
#include "HealthImprovement.h"
#include "GameCharacter.h"

Chest::Chest() {
    std::srand(time(nullptr));
    int choice = rand()%3+1;

    switch (choice) {
        case 1 :
            improvement = std::move(std::unique_ptr<PowerUp>(new ArmorImprovement));
            break;
        case 2 :
            improvement = std::move(std::unique_ptr<PowerUp>(new AttackImprovement));
            break;
        case 3 :
            improvement = std::move(std::unique_ptr<PowerUp>(new HealthImprovement));
            break;
    }
}

void Chest::givePowerUp(GameCharacter& character) {
    if (auto p = dynamic_cast<ArmorImprovement*>(improvement.get()))
        p->improveStat(character);
    if (auto p = dynamic_cast<AttackImprovement*>(improvement.get()))
        p->improveStat(character);
    if (auto p = dynamic_cast<HealthImprovement*>(improvement.get()))
        p->improveStat(character);
}