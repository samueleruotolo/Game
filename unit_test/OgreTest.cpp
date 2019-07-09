#include "gtest/gtest.h"
#include "../Ogre.h"

// testing the constructor
TEST(Ogre, OgreConstructor) {
    Ogre ogre;
    ASSERT_EQ(750, ogre.getHealth());
    ASSERT_EQ(25, ogre.getArmor());
    ASSERT_EQ(75, ogre.getAttack());
    ASSERT_EQ(0, ogre.getPosX());
    ASSERT_EQ(0, ogre.getPosY());
}

// testing move method
TEST(Ogre, OgreMove) {
    Ogre ogre;
    ogre.move(1,1);
    ASSERT_EQ(1, ogre.getPosX());
    ASSERT_EQ(1, ogre.getPosY());
}
