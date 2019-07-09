#ifndef GAME_SKELETON_H
#define GAME_SKELETON_H

#include "MeleeEnemy.h"

class Skeleton : public MeleeEnemy {
public:
    explicit Skeleton(int h=150, int ar=25, int at=40, int X=0, int Y=0) : MeleeEnemy(h, ar, at, X, Y) {};
    ~Skeleton() {}

    void basicAttack(Game &game, int keyPressed) override;
private:
};


#endif //GAME_SKELETON_H
