#ifndef GAME_GAME_H
#define GAME_GAME_H


#include <memory>
#include <vector>

class GameCharacter;

class Game {
public:
    Game() {}
    ~Game() {}

    void insertHero ();
    void insertEnemies ();
    void deleteEnemies (GameCharacter* enemy);

    const std::unique_ptr<GameCharacter> &getHero() const {
        return hero;
    }

    const std::vector<std::unique_ptr<GameCharacter>> &getEnemies() const {
        return enemies;
    }

private:
    std::unique_ptr<GameCharacter> hero;
    std::vector<std::unique_ptr<GameCharacter>> enemies;
};


#endif //GAME_GAME_H
