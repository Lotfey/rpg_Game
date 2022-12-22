#include "Rogue.h"

Rogue::Rogue() :playerCharacterDelegate()
{
	HPptr->setMax(BASEHP);
	HPptr->increaseCurrent(BASEHP);
	increaseStats(BASESTRENGHT, BASEINTELLECT);
}

std::string Rogue::getClassName()
{
	return std::string("Rogue ");
}

void Rogue::levelUp()
{
	HPptr->setMax((wellType)((BASEHP / 2.0) + HPptr->getMax()));
	HPptr->increaseCurrent((wellType)(BASEHP / 2.0));
	increaseStats((statType)((BASESTRENGHT + 1u) / 2.f), ((statType)(BASEINTELLECT + 1u) / 2.f));
}
