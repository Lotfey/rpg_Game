#include "Wizard.h"

Wizard::Wizard() :hp(BASEHP, BASEHP), statBlock(BASESTRENGHT, BASEINTELLECT)
{
}

void Wizard::LevelUp()
{
	setMaxHp(HPGROWTH + getMaxHp());
	increaseStats(STRENGHTGROWTH, INTELLECTGROWTH);
}
