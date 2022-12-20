#pragma once
#include "hp.h"
#include"statBlock.h"
class Rogue :
    public hp, public statBlock
{
public:
    // the static variable in a class means that this variable instantiated only once 
    // and sibce it is const, means cannot be change anywhere in the world
    static const hpType HPGROWTH = static_cast<hpType> (13u);
    static const statType BASEDSTRENGHT = static_cast<statType>(3u);
    static const statType BASEDINTELLECT = static_cast<statType>(2u);

    // default constructor for warrior using hp constructor 
    Rogue();
private:
};

