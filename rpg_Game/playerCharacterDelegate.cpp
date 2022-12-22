#include "playerCharacterDelegate.h"


// the constructor 

playerCharacterDelegate::playerCharacterDelegate():statBlock(0u,0u)

{
	mCurrentLevel = 1u;
	mCurrentExperience = 0;
	mExpToNextLevel = LEVEL2AT;
	HPptr = std::make_unique<pointWell>();
}

levelType playerCharacterDelegate::getLevel()
{
	return mCurrentLevel;
}

expType playerCharacterDelegate::getCurrentExperience()
{
	return mCurrentExperience;
}

expType playerCharacterDelegate::getExperienceToNextLevel()
{
	return mExpToNextLevel;
}


void playerCharacterDelegate::gainExperience(expType gainedEXP)
{
	mCurrentExperience += gainedEXP;

	// Keep leveling up as long as you gain experience
	while (check_if_leveled()) {}
}



bool playerCharacterDelegate::check_if_leveled()
{
	static const levelType LEVELSCALAR = static_cast<levelType>(2u);
	if (mCurrentExperience >= mExpToNextLevel)
	{
		mCurrentLevel++;
		levelUp();
		mExpToNextLevel *= LEVELSCALAR;
		return true;
	}
	return false;
	
	// level 1 = 0 EXP needed 
	// level 2 =LEVEL2AT EXP needed
	// level 3 = prev_required * LEVELSCALAR EXP needed
	// level 4 = prev_required * LEVELSCALAR EXP needed
	// ...  
	
}
