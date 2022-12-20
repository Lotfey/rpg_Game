#include "LevelSystem.h"

LevelSystem::LevelSystem()
{
	mCurrentLevel = static_cast<levelType>(1u);
	mCurrentExperience= static_cast<expType>(0u);
	mExpToNextLevel = LEVEL2AT;
}

levelType LevelSystem::getLevel()
{
	return mCurrentLevel;
}

expType LevelSystem::getCurrentExperience()
{
	return mCurrentExperience;
}

expType LevelSystem::getExperienceToNextLevel()
{
	return mExpToNextLevel;
}


void LevelSystem::gainExperience(expType gainedEXP)
{
	mCurrentExperience += gainedEXP;

	// Keep leveling up as lomg as you gain experience
	while (check_if_leveled()) {}
}

bool LevelSystem::check_if_leveled()
{
	static const levelType LEVELSCALAR = static_cast<levelType>(2u);
	if (mCurrentExperience >= mExpToNextLevel)
	{
		mCurrentLevel++;
		LevelUp();
		mExpToNextLevel*=LEVELSCALAR;
		return true;
	}	
	return false;
	// level 1 = 0 EXP needed 
	// level 2 =LEVEL2AT EXP needed
	// level 3 = prev_required * LEVELSCALAR EXP needed
	// level 4 = prev_required * LEVELSCALAR EXP needed
	// ...  
}

