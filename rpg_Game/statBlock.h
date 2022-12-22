#pragma once

#include<cstdint>
typedef std::uint16_t statType;

// This type was intially uint8_t which intruduces few buggs while 
// printing the values with std::cout.
// this could be due to the formating issue
// therefore, for a quick fix, i used uint16_

class statBlock
{
public:
	//constructor for the struct
	statBlock();

	// Explicitly forcing the contructor to take only the designed type 
	explicit statBlock(statType s, statType i);

	// getters
	statType getStrenght();
	statType getIntellect();

protected:
	void increaseStats(statType s, statType i);

private:
	statType mStrength;
	statType mIntellect;
};
