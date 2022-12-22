#pragma once
#include"playerCharacterDelegate.h"

#include"Warrior.h"
#include"Wizard.h"
#include"Cleric.h"
#include"Rogue.h"

// This class manage  other classes via class composition  while 
// playerCharacterDelegate inherate from statBlock
class playerCharacter
{
private:
	// here i use the composition over inheretance 
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

	//deconstructor
	~playerCharacter();
};

