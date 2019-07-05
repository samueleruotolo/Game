#ifndef GAME_WIZARD_H
#define GAME_WIZARD_H


#include "Hero.h"

class Wizard : public Hero {
public:
    explicit Wizard(int h=110, int ar=10, int at=40, int X=0, int Y=0) : Hero(h, ar, at, X, Y) {}
    ~Wizard() {}

    void basicAttack(GameCharacter &enemy) override;
    void performPrimarySkill() override ;
    void performSecondarySkill() override ;
private:
};


#endif //GAME_WIZARD_H
