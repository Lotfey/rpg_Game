#include "Cleric.h"

Cleric::Cleric():hp(BASEHP, BASEHP), statBlock(BASESTRENGHT, BASEINTELLECT)
{
}

void Cleric::LevelUp()
{
	setMaxHp(HPGROWTH + getMaxHp());
	increaseStats(STRENGHTGROWTH, INTELLECTGROWTH);
}
