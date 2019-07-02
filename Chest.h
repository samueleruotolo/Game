#ifndef GAME_CHEST_H
#define GAME_CHEST_H

#include "memory"
#include "PowerUp.h"

class Chest {
public:
    Chest();
    ~Chest() {}

    bool getIsOpen() const {
        return isOpen;
    }

    void setIsOpen(bool isOpen) {
        this->isOpen = isOpen;
    }

    void givePowerUp(GameCharacter& character);
private:
    bool isOpen {false};
    std::unique_ptr<PowerUp> improvement;
};


#endif //GAME_CHEST_H
