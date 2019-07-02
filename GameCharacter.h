#ifndef GAME_GAMECHARACTER_H
#define GAME_GAMECHARACTER_H


class GameCharacter {
public:
    GameCharacter(int h, int ar, int at, int X, int Y) : health(h), armor(ar), attack(at), posX(X), posY(Y) {}
    virtual ~GameCharacter() {}

    int getHealth() const {
        return health;
    }

    void setHealth(int health) {
        this->health += health;
    }

    int getArmor() const {
        return armor;
    }

    void setArmor(int armor) {
        this->armor += armor;
    }

    int getAttack() const {
        return attack;
    }

    void setAttack(int attack) {
        this->attack += attack;
    }

    int getPosX() const {
        return posX;
    }

    void setPosX(int posX) {
        this->posX = posX;
    }

    int getPosY() const {
        return posY;
    }

    void setPosY(int posY) {
        this->posY = posY;
    }

    void move(int x, int y) {
        posX += x;
        posY += y;
    }

    virtual int basicAttack(GameCharacter& enemy) = 0;

private:
    int health;
    int armor;
    int attack;
    int posX;
    int posY;
};


#endif //GAME_GAMECHARACTER_H
