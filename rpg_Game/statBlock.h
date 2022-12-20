#pragma once
#include"statType.h"

class statBlock
{
private:
	statType mStrength;
	statType mIntellect;

public:
	//constructor for the struct
	statBlock();

	// Explicitly forcing the contructor to take only the designed type 
	explicit statBlock(statType s, statType i);

	// getters
	statType getStrenght();
	statType getIntellect();

};
