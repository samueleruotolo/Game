#include <ctime>
#include "Game.h"
#include "Knight.h"
#include "Marksman.h"
#include "Wizard.h"
#include "Skeleton.h"
#include "RangedSkeleton.h"
#include <SFML/Window/Keyboard.hpp>

void Game::insertHero() { //TODO cambiare la scelta
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
        hero = std::move(std::unique_ptr<GameCharacter>(new Knight));
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
        hero = std::move(std::unique_ptr<GameCharacter>(new Marksman));
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
        hero = std::move(std::unique_ptr<GameCharacter>(new Wizard));
}

void Game::insertEnemies() {
    std::srand(time(nullptr));
    int choice = rand()%2+1;

    switch (choice) {
        case 1 :
            enemies.push_back(std::unique_ptr<GameCharacter>(new Skeleton));
            break;
        case 2 :
            enemies.push_back(std::unique_ptr<GameCharacter>(new RangedSkeleton));
    }
}

void Game::deleteEnemies(GameCharacter* enemy) {
    for (auto element = enemies.begin(); element != enemies.end(); element++) {
        if (element->get() == enemy)
            element = enemies.erase(element);
    }
}