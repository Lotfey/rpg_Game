#include "Warrior.h"

Warrior::Warrior() :playerCharacterDelegate()
{
	HPptr->setMax(BASEHP);
	HPptr->increaseCurrent(BASEHP);
	increaseStats(BASESTRENGHT, BASEINTELLECT);
}

std::string Warrior::getClassName()
{
	return std::string("Warrior ");
}

void Warrior::levelUp()
{
	HPptr->setMax((wellType)((BASEHP / 2.0) + HPptr->getMax()));
	HPptr->increaseCurrent((wellType)(BASEHP / 2.0));
	increaseStats((statType)((BASESTRENGHT + 1u) / 2.f), ((statType)(BASEINTELLECT + 1u) / 2.f));
}

