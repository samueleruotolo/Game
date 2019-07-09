#include "gtest/gtest.h"
#include "../Skeleton.h"

// testing the constructor
TEST(Skeleton, SkeletonConstructor) {
    Skeleton skeleton;
    ASSERT_EQ(150, skeleton.getHealth());
    ASSERT_EQ(25, skeleton.getArmor());
    ASSERT_EQ(40, skeleton.getAttack());
    ASSERT_EQ(0, skeleton.getPosX());
    ASSERT_EQ(0, skeleton.getPosY());
}

// testing move method
TEST(Skeleton, SkeletonMove) {
    Skeleton skeleton;
    skeleton.move(1,1);
    ASSERT_EQ(1, skeleton.getPosX());
    ASSERT_EQ(1, skeleton.getPosY());
}
