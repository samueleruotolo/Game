#include "gtest/gtest.h"
#include "../Wizard.h"

// testing the constructor
TEST(Wizard, WizardConstructor) {
    Wizard wizard;
    ASSERT_EQ(110, wizard.getHealth());
    ASSERT_EQ(10, wizard.getArmor());
    ASSERT_EQ(40, wizard.getAttack());
    ASSERT_EQ(0, wizard.getPosX());
    ASSERT_EQ(0, wizard.getPosY());
}

// testing move method
TEST(Wizard, WizardMove) {
    Wizard wizard;
    wizard.move(1,1);
    ASSERT_EQ(1, wizard.getPosX());
    ASSERT_EQ(1, wizard.getPosY());
}