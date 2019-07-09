#include "gtest/gtest.h"
#include "../Knight.h"

// testing the constructor
TEST(Knight, KnightConstructor) {
    Knight knight;
    ASSERT_EQ(150, knight.getHealth());
    ASSERT_EQ(20, knight.getArmor());
    ASSERT_EQ(35, knight.getAttack());
    ASSERT_EQ(0, knight.getPosX());
    ASSERT_EQ(0, knight.getPosY());
}

// testing move method
TEST(Knight, KnightMove) {
    Knight knight;
    knight.move(1,1);
    ASSERT_EQ(1, knight.getPosX());
    ASSERT_EQ(1, knight.getPosY());
}
