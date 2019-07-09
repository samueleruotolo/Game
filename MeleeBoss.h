#ifndef GAME_MELEEBOSS_H
#define GAME_MELEEBOSS_H


#include "Boss.h"

class MeleeBoss : public Boss {
public:
    MeleeBoss(int h, int ar, int at, int X, int Y) : Boss(h, ar, at, X, Y) {}
    virtual ~MeleeBoss() {}

    void basicAttack(Game& game, int kayPressed) override;
};


#endif //GAME_MELEEBOSS_H
