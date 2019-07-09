#ifndef GAME_WIZARD_H
#define GAME_WIZARD_H


#include "RangedHero.h"
#include "Game.h"

class Wizard : public RangedHero {
public:
    explicit Wizard(int h=110, int ar=10, int at=40, int X=0, int Y=0) : RangedHero(h, ar, at, X, Y) {}
    ~Wizard() {}

    void performSecondarySkill() override;
private:
};


#endif //GAME_WIZARD_H
