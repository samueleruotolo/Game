#include "gtest/gtest.h"
#include "../Drake.h"

// testing the constructor
TEST(Drake, DrakeConstructor) {
    Drake drake;
    ASSERT_EQ(500, drake.getHealth());
    ASSERT_EQ(25, drake.getArmor());
    ASSERT_EQ(100, drake.getAttack());
    ASSERT_EQ(0, drake.getPosX());
    ASSERT_EQ(0, drake.getPosY());
}

// testing move method
TEST(Drake, DrakeMove) {
    Drake drake;
    drake.move(1,1);
    ASSERT_EQ(1, drake.getPosX());
    ASSERT_EQ(1, drake.getPosY());
}