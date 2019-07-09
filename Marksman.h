#ifndef GAME_MARKSMAN_H
#define GAME_MARKSMAN_H


#include "RangedHero.h"
#include "Game.h"

class Marksman : public RangedHero {
public:
    explicit Marksman(int h=100, int ar=10, int at=45, int X=0, int Y=0) : RangedHero(h, ar, at, X, Y) {}
    ~Marksman() {}

    void performSecondarySkill() override;
private:
};


#endif //GAME_MARKSMAN_H
