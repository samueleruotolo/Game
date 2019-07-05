#ifndef GAME_DRAKE_H
#define GAME_DRAKE_H


#include "Boss.h"

class Drake : public Boss {
public:
    explicit Drake (int h=500, int ar=25, int at=100, int X=0, int Y=0) : Boss(h, ar, at, X, Y) {}
    ~Drake() {}

    void basicAttack(GameCharacter &enemy) override;
};


#endif //GAME_DRAKE_H
