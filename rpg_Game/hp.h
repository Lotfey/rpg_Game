#pragma once
#include"hitpointTypes.h" // uint16_t
class hp 
{
public:
	//returnd true if set successfully 
	bool setMaxHp(hpType newMaxHp);
	void takeDamage(hpType damage);
	void heal(hpType amount);

	//getters
	hpType getMaxHp();
	hpType getCurrentHp();
	// setter

private:
	// sheil will be included later on...
	//hpType mSheilHp;

	hpType mCurrentHp;
	hpType mMaxHp;
};
