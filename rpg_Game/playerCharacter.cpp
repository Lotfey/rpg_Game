#include "playerCharacter.h"

playerCharacter::playerCharacter(playerCharacterDelegate* pc) : playerChrachterClass(pc)
{}

std::string playerCharacter::getClassName()
{
	return playerChrachterClass->getClassName();
}

levelType playerCharacter::getLevel()
{
	return playerChrachterClass->getLevel();
}

expType playerCharacter::getCurrentExperience()
{
	return playerChrachterClass->getCurrentExperience();
}

expType playerCharacter::getExperienceToNextLevel()
{
	return playerChrachterClass->getExperienceToNextLevel();
}

wellType playerCharacter::getCurrentHp()
{
	return playerChrachterClass->HPptr->getCurrent();
}

wellType playerCharacter::getMaxHp()
{
	return playerChrachterClass->HPptr->getMax();
}

statType playerCharacter::getStrenght()
{
	return playerChrachterClass->getStrenght();
}

statType playerCharacter::getIntellect()
{
	return playerChrachterClass->getIntellect();
}

void playerCharacter::gainEXP(expType amount)
{
	playerChrachterClass->gainExperience(amount);
}

void playerCharacter::takeDamage(wellType amount)
{
	playerChrachterClass->HPptr->reduceCurrent(amount);
}

void playerCharacter::healHealth(wellType amount)
{
	playerChrachterClass->HPptr->increaseCurrent(amount);
}

playerCharacter::~playerCharacter()
{
	delete playerChrachterClass;
	playerChrachterClass = nullptr;
}
