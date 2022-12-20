#include<iostream>

//include header class
#include"allClasses.h"

// main fuction of the software
int main()
{
	Cleric cleric1;
	for (int i=0; i<2; ++i)
	{
		std::cout << "Cleric level " << cleric1.getLevel() << '\n'
			<< "- Exp: " << cleric1.getCurrentExperience() << "/" << cleric1.getExperienceToNextLevel() << '\n'
			<< "- MaxHP: " << cleric1.getMaxHp() << '\n'
			<< "- Strenght: " << cleric1.getStrenght() << '\n'
			<< "- Intellect: " << cleric1.getIntellect() << '\n';

		if (i < 1)
		{
			cleric1.gainExperience(100u);
			std::cout<<std::endl;
		}
	}

	std::cout << "------------------------------" << std::endl;
	Warrior warrior;
	for (int i = 0; i < 2; ++i)
	{
		std::cout << "Warrior level " << warrior.getLevel() << '\n'
			<< "- Exp: " << warrior.getCurrentExperience() << "/" << warrior.getExperienceToNextLevel() << '\n'
			<< "- MaxHP: " << warrior.getMaxHp() << '\n'
			<< "- Strenght: " << warrior.getStrenght() << '\n'
			<< "- Intellect: " << warrior.getIntellect() << '\n';

		if (i < 1)
		{
			warrior.gainExperience(100u);
			std::cout << std::endl;
		}
	}

	std::cout <<"------------------------------" << std::endl;
	Rogue rogue;
	for (int i = 0; i < 2; ++i)
	{
		std::cout << "Rogue level " << rogue.getLevel() << '\n'
			<< "- Exp: " << rogue.getCurrentExperience() << "/" << rogue.getExperienceToNextLevel() << '\n'
			<< "- MaxHP: " << rogue.getMaxHp() << '\n'
			<< "- Strenght: " << rogue.getStrenght() << '\n'
			<< "- Intellect: " << rogue.getIntellect() << '\n';

		if (i < 1)
		{
			rogue.gainExperience(100u);
			std::cout << std::endl;
		}
	}


	std::cout << "------------------------------" << std::endl;
	Wizard wizard;
	for (int i = 0; i < 2; ++i)
	{
		std::cout << "Wizard level " << wizard.getLevel() << '\n'
			<< "- Exp: " << wizard.getCurrentExperience() << "/" << wizard.getExperienceToNextLevel() << '\n'
			<< "- MaxHP: " << wizard.getMaxHp() << '\n'
			<< "- Strenght: " << wizard.getStrenght() << '\n'
			<< "- Intellect: " << wizard.getIntellect() << '\n';

		if (i < 1)
		{
			wizard.gainExperience(100u);
			std::cout << std::endl;
		}
	}

	/*
	// Quick test of the classes ### test1 ###
	Warrior warrior1;
	Wizard wizard1;
	Cleric cleric1;
	Rogue rogue1;

	std::cout << "Warrior stats: \n"
		<< "- MaxHP: " << warrior1.getMaxHp() << "\n"
		<< "- Strenght: " << warrior1.getStrenght() << "\n"
		<< "- Intellect: " << warrior1.getIntellect() << "\n" << std::endl;

	std::cout << "Wizard1 stats: \n"
		<< "- MaxHP: " << wizard1.getMaxHp() << "\n"
		<< "- Strenght: " << wizard1.getStrenght() << "\n"
		<< "- Intellect: " << wizard1.getIntellect() << "\n" << std::endl;

	std::cout << "Cleric stats: \n"
		<< "- MaxHP: " << cleric1.getMaxHp() << "\n"
		<< "- Strenght: " << cleric1.getStrenght() << "\n"
		<< "- Intellect: " << cleric1.getIntellect() << "\n" << std::endl;

	std::cout << "Rogue stats: \n"
		<< "- MaxHP: " << rogue1.getMaxHp() << "\n"
		<< "- Strenght: " << rogue1.getStrenght() << "\n"
		<< "- Intellect: " << rogue1.getIntellect() << "\n" << std::endl;
		
	*/



	std::cin.get();
	return 0;
} 