#include "Wizard.h"
#include "DefaultValues.h"

void Wizard::performSecondarySkill() {
    Wizard::setAttack(Wizard::getAttack()+statImprovement);
    Wizard::setAttack(Wizard::getAttack()-statImprovement);
}