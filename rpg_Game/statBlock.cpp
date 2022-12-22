#include "statBlock.h"

statBlock::statBlock()
{
	// make sure that default constructor intialised its member variables with the designed type uint8_t
	// thus the static cast of statType
	mStrength = static_cast<statType> (1u);
	mIntellect = static_cast<statType> (1u);
}

statBlock::statBlock(statType s, statType i) : mStrength(s), mIntellect(i)
{}

statType statBlock::getStrenght()
{
	return mStrength;
}
statType statBlock::getIntellect()
{
	return mIntellect;
}
void statBlock::increaseStats(statType s, statType i)
{
	mStrength += s;
	mIntellect += i;
}
