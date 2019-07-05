#ifndef GAME_MARKSMAN_H
#define GAME_MARKSMAN_H


#include "Hero.h"

class Marksman : public Hero {
public:
    explicit Marksman(int h=100, int ar=10, int at=45, int X=0, int Y=0) : Hero(h, ar, at, X, Y) {}
    ~Marksman() {}

    void basicAttack(GameCharacter &enemy) override;
    void performPrimarySkill() override ;
    void performSecondarySkill() override ;
private:
};


#endif //GAME_MARKSMAN_H
