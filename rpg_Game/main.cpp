#include<iostream>
#include"playerCharacter.h"


// Test the software functionalities
int main()
{
	playerCharacter p1(new Wizard());
	
	for (int i=0; i<2; ++i)
	{
		std::cout
			<<p1.getClassName()
			<< "- Level "<< p1.getLevel()<<"\n"
			<< "- Exp: " << p1.getCurrentExperience() << "/" << p1.getExperienceToNextLevel() << '\n'
			<< "- HP: "  << p1.getCurrentHp() << "/"<< p1.getMaxHp()<< '\n'
			<< "- Strenght: " << p1.getStrenght() << '\n'
			<< "- Intellect: " << p1.getIntellect() << '\n';

		if (i < 1)
		{
			p1.gainEXP(100u);
			std::cout<<std::endl;
		}
	}


	std::cin.get();
	return 0;
} 