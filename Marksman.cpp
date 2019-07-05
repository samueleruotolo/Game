#include "Marksman.h"
#include "DefaultValues.h"

void Marksman::performSecondarySkill() {
    Marksman::setAttack(Marksman::getAttack()+statImprovement);
    Marksman::setAttack(Marksman::getAttack()-statImprovement);
}