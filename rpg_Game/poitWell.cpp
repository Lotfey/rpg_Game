#include "pointWell.h"

// implimentation file for wellPoint class

//Default constructor
pointWell::pointWell()
{mCurrentFullness = 1;
mMaxWell = 1;
}

pointWell::pointWell(wellType c, wellType m) :mCurrentFullness(c), mMaxWell(m)
{
	// Current  cannot exceed the max  value 
	if (mCurrentFullness > mMaxWell)
	{
		mCurrentFullness = mMaxWell;
	}
};

//getters
wellType pointWell::getMax()
{
	return mMaxWell;
}

wellType pointWell::getCurrent()
{
	return mCurrentFullness;
}
//setters

// Sheild is not included in the logic yet.. 

//methods
bool pointWell::setMax(wellType newMax)
{
	if (newMax < 1)
	{
		return false;
	}
	mMaxWell = newMax;

	if (mCurrentFullness > mMaxWell)
	{
		mCurrentFullness = mMaxWell;
	}
	return true;
}

void pointWell::reduceCurrent(wellType damage)
{
	// if damage bigger than current then set current to 0 and leave takeDamage
	if (damage > mCurrentFullness)
	{
		mCurrentFullness = 0;
		return;
	}
	mCurrentFullness -= damage;
}

void pointWell::increaseCurrent(wellType amount)
{
	// force current stats to max if amount+ current is bigger than max then leave increase
	if (amount + mCurrentFullness > mMaxWell);
	{
		mCurrentFullness = mMaxWell;
		return;
	}
	mCurrentFullness += amount;
}

