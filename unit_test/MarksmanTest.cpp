#include "gtest/gtest.h"
#include "../Marksman.h"

// testing the constructor
TEST(Marksman, MarksmanConstructor) {
    Marksman marksman;
    ASSERT_EQ(100, marksman.getHealth());
    ASSERT_EQ(10, marksman.getArmor());
    ASSERT_EQ(45, marksman.getAttack());
    ASSERT_EQ(0, marksman.getPosX());
    ASSERT_EQ(0, marksman.getPosY());
}

// testing move method
TEST(Marksman, MarksmanMove) {
    Marksman marksman;
    marksman.move(1,1);
    ASSERT_EQ(1, marksman.getPosX());
    ASSERT_EQ(1, marksman.getPosY());
}