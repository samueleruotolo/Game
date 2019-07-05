#include "Boss.h"
#include "DefaultValues.h"

void Boss::performBossSkill(GameCharacter &character) {
    character.setHealth(character.getHealth()+bossStatImprovement);
    character.setArmor(character.getArmor()+bossStatImprovement);
    character.setAttack(character.getAttack()+bossStatImprovement);
}