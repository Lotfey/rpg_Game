#pragma once
#include "hp.h"
#include"statBlock.h"
#include"LevelSystem.h"
class Cleric :
    public hp, public statBlock, public LevelSystem
{
public:
    // the static variable in a class means that this variable instantiated only once 
    // and sibce it is const, means cannot be change anywhere in the world
    static const hpType BASEHP = static_cast<hpType> (14u);
    static const statType BASESTRENGHT = static_cast<statType>(2u);
    static const statType BASEINTELLECT = static_cast<statType>(3u);

    static const hpType HPGROWTH = static_cast<hpType> (7u);
    static const statType STRENGHTGROWTH = static_cast<statType>(1u);
    static const statType INTELLECTGROWTH = static_cast<statType>(2u);

    // default constructor for warrior using hp constructor 
    Cleric();
private:
    void LevelUp() override;    
};

