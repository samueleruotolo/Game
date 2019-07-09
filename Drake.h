#ifndef GAME_DRAKE_H
#define GAME_DRAKE_H


#include "RangedBoss.h"

class Drake : public RangedBoss {
public:
    explicit Drake (int h=500, int ar=25, int at=100, int X=0, int Y=0) : RangedBoss(h, ar, at, X, Y) {}
    ~Drake() {}
};


#endif //GAME_DRAKE_H
