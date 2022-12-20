#include "Rogue.h"

Rogue::Rogue() :hp(BASEHP, BASEHP), statBlock(BASESTRENGHT, BASEINTELLECT)
{
}

void Rogue::LevelUp()
{
	setMaxHp(HPGROWTH + getMaxHp());
	increaseStats(STRENGHTGROWTH, INTELLECTGROWTH);
}
