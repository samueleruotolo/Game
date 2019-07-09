#ifndef GAME_KNIGHT_H
#define GAME_KNIGHT_H


#include "Game.h"
#include "MeleeHero.h"

class Knight : public MeleeHero {
public:
    explicit Knight(int h=150, int ar=20, int at=35, int X=0, int Y=0) : MeleeHero(h, ar, at, X, Y) {}
    ~Knight() {}

    void performSecondarySkill() override;
private:
};


#endif //GAME_KNIGHT_H
