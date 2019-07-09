#include "gtest/gtest.h"
#include "../RangedSkeleton.h"

// testing the constructor
TEST(RangedSkeleton, RangedSkeletonConstructor) {
    RangedSkeleton skeleton;
    ASSERT_EQ(120, skeleton.getHealth());
    ASSERT_EQ(20, skeleton.getArmor());
    ASSERT_EQ(45, skeleton.getAttack());
    ASSERT_EQ(0, skeleton.getPosX());
    ASSERT_EQ(0, skeleton.getPosY());
}

// testing move method
TEST(RangedSkeleton, RangedSkeletonMove) {
    RangedSkeleton skeleton;
    skeleton.move(1,1);
    ASSERT_EQ(1, skeleton.getPosX());
    ASSERT_EQ(1, skeleton.getPosY());
}
