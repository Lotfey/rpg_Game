#include "statBlock.h"

statBlock::statBlock()
{
	// make sure that default constructor intialised its member variables with the designed type uint8_t
	mStrength = static_cast<statType> (1u);
	mIntellect = static_cast<statType> (1u);
}

statBlock::statBlock(statType s, statType i) : mStrength(s), mIntellect(i) {}
statType statBlock::getStrenght()
{
	return mStrength;
}
statType statBlock::getIntellect()
{
	return mIntellect;
}
;