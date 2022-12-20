#include "Warrior.h"

Warrior::Warrior() :hp(BASEHP, BASEHP), statBlock(BASESTRENGHT, BASEINTELLECT)
{
}
void Warrior::LevelUp()
{
	setMaxHp(HPGROWTH + getMaxHp());
	increaseStats(STRENGHTGROWTH, INTELLECTGROWTH);
}

