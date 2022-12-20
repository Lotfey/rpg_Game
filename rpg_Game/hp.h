#pragma once

#include<cstdint>
// specific variable type for the game
typedef std::uint16_t hpType;

class hp 
{
public:
	//constructor
	hp();
	hp(hpType cHP, hpType mHp);

	//getters
	hpType getMaxHp();
	hpType getCurrentHp();
	// setter

	//returnd true if set successfully 
	bool setMaxHp(hpType newMaxHp);

	// reduce current hp from a taken damage
	void takeDamage(hpType damage);

	// heal an amount hp to the current hp
	void heal(hpType amount);

	//deconstructor 
	~hp() = default;

private:
	// sheil will be included later on...
	//hpType mSheilHp;

	hpType mCurrentHp;
	hpType mMaxHp;
};
