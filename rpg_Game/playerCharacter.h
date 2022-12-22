#pragma once
#include"playerCharacterDelegate.h"

#include"Warrior.h"
#include"Wizard.h"
#include"Cleric.h"
#include"Rogue.h"

// This class manage the other classes via class composition 
class playerCharacter
{
private:
	playerCharacterDelegate* playerChrachterClass;

public:
	// no default constructris allowed
	playerCharacter() = delete;
	
	//Every characher is contructed here
	playerCharacter(playerCharacterDelegate* pc);

	//getters
	std::string getClassName();
	levelType getLevel();
	expType getCurrentExperience();
	expType getExperienceToNextLevel();
	wellType getCurrentHp();
	wellType getMaxHp();
	statType getStrenght();
	statType getIntellect();

	//methods
	void gainEXP(expType amount);
	void takeDamage(wellType amount);
	void healHealth(wellType anount);

	~playerCharacter();

};

