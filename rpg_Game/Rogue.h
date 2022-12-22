#pragma once

#include"playerCharacterDelegate.h"

class Rogue :
    public playerCharacterDelegate
{
public:
    // the static variable in a class means that this variable instantiated only once 
    // and sibce it is const, means cannot be change anywhere in the world
    static const wellType BASEHP = static_cast<wellType> (12u);
    static const statType BASESTRENGHT = static_cast<statType>(3u);
    static const statType BASEINTELLECT = static_cast<statType>(2u);

    // default constructor for warrior using hp constructor 
    Rogue();

    // method to get class name 
    std::string getClassName() override;

private:
    void levelUp() override;
};

