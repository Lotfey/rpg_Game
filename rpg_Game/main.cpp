#include<iostream>

//include header class
#include"allClasses.h"

// main fuction of the software
int main()
{
	// Quick test of the classes
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
		




	std::cin.get();
	return 0;
} 