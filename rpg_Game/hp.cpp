#include "hp.h"
// implimentation file for hp class

//Default constructor
hp::hp()
{mCurrentHp = 1;
mMaxHp = 1;
}

hp::hp(hpType cHP, hpType mHP) :mCurrentHp(cHP), mMaxHp(mHP)
{
	// Current HP cannot exceed the max hp value 
	if (mCurrentHp > mMaxHp)
	{
		mCurrentHp = mMaxHp;
	}
};

//getters
hpType hp::getMaxHp()
{
	return mMaxHp;
}

hpType hp::getCurrentHp()
{
	return mCurrentHp;
}
//setters

// Sheild is not included in the logic yet.. 
//methods
bool hp::setMaxHp(hpType newMaxHp)
{
	if (newMaxHp < 1)
	{
		return false;
	}
	mMaxHp = newMaxHp;

	if (mCurrentHp > mMaxHp)
	{
		mCurrentHp = mMaxHp;
	}
	return true;
}

void hp::takeDamage(hpType damage)
{
	if (damage > mCurrentHp)
	{
		mCurrentHp = 0;
		return;
	}
	mCurrentHp -= damage;
}

void hp::heal(hpType amount)
{
	if (amount + mCurrentHp > mMaxHp);
	{
		mCurrentHp = mMaxHp;
		return;
	}
	mCurrentHp += amount;
}

