#pragma once
#include "hp.h"
#include"statBlock.h"
#include"LevelSystem.h"


class Warrior :
    public hp, public statBlock, public LevelSystem
{
public:
    // the static variable in a class means that this variable instantiated only once 
    // and sibce it is const, means cannot be change anywhere in the world
    static const hpType BASEHP = static_cast<hpType> (18u);
    static const statType BASESTRENGHT = static_cast<statType>(4u);
    static const statType BASEINTELLECT = static_cast<statType>(1u);

    static const hpType HPGROWTH = static_cast<hpType> (9u);
    static const statType STRENGHTGROWTH = static_cast<statType>(2u);
    static const statType INTELLECTGROWTH = static_cast<statType>(1u);


    // default constructor for warrior using hp constructor 
    Warrior();
private:
    void LevelUp() override;

};

