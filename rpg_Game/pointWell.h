#pragma once

#include<cstdint>
// specific variable type for the game
typedef std::uint16_t wellType;

//wellPoint class manages hp, mana...

class pointWell 
{
public:
	//constructor
	pointWell();
	pointWell(wellType c, wellType m);

	//getters
	wellType getMax();
	wellType getCurrent();
	// setter

	//returnd true if set successfully 
	bool setMax(wellType newMax);

	// reduce current poitWell from from reduction source
	void reduceCurrent(wellType damage);

	// heal an amount hp to the current hp
	void increaseCurrent(wellType amount);

	//deconstructor 
	~pointWell() = default;

private:
	// sheil will be included later on...
	//wellType mSheilHp;
	wellType mCurrentFullness;
	wellType mMaxWell;
};
