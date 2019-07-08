#ifndef GAME_KNIGHT_H
#define GAME_KNIGHT_H


#include "Hero.h"

class Knight : public Hero {
public:
    explicit Knight(int h=150, int ar=20, int at=35, int X=0, int Y=0) : Hero(h, ar, at, X, Y) {}
    ~Knight() {}

    void basicAttack() override;
    void performPrimarySkill() override;
    void performSecondarySkill() override;
private:
};


#endif //GAME_KNIGHT_H
