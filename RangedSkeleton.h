#ifndef GAME_RANGEDSKELETON_H
#define GAME_RANGEDSKELETON_H


#include "Game.h"
#include "RangedEnemy.h"

class RangedSkeleton : public RangedEnemy{
public:
    explicit RangedSkeleton(int h=120, int ar=20, int at=45, int X=0, int Y=0) : RangedEnemy(h, ar, at, X, Y) {};
    virtual ~RangedSkeleton() {}

private:
};


#endif //GAME_RANGEDSKELETON_H
