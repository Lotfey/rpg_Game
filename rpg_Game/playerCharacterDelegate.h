#pragma once
#include "statBlock.h"
#include "pointWell.h"



#include<memory> // for smart pointers std::make_unique
#include<string>
#include<cstdint> // uintxx_t

// define class data type 
typedef std::uint64_t expType;
typedef std::uint16_t levelType;

class playerCharacterDelegate :
    public statBlock
{
public:

    static const expType LEVEL2AT = static_cast<expType>(100u);
    std::unique_ptr<pointWell> HPptr;

    //constructors 
    playerCharacterDelegate();

    //Getter
    levelType getLevel();
    expType getCurrentExperience();
    expType getExperienceToNextLevel();

    //Methods
    void gainExperience(expType gainedEXP);

    // Pure virtual function must be implemented in the inherated class
    // Or...Pure virtual function equal zero means that this function  
    // must be implemented in whomever inherate from this class
    
    virtual void  levelUp() = 0;
    virtual std::string getClassName() = 0;

protected:
    bool check_if_leveled();

protected:
    levelType mCurrentLevel;
    expType mCurrentExperience;
    expType mExpToNextLevel;
};

