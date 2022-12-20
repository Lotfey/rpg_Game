#include "hp.h"
// implimentation file for hp class
// constructors
//getters
//setters
//deconstructor

// Seild is not included in the logic yet
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

hpType hp::getMaxHp()
{
	return mMaxHp;
}

hpType hp::getCurrentHp()
{
	return mCurrentHp;
}
