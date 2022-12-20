#pragma once
#include<cstdint>

// define calss data type 
typedef std::uint64_t expType;
typedef std::uint16_t levelType;

class LevelSystem
    
{
public:
    static const expType LEVEL2AT = static_cast<expType>(100u);
    
    //Constructor 
    LevelSystem();

    //Getter
    levelType getLevel();
    expType getCurrentExperience();
    expType getExperienceToNextLevel();

    //Methods
    void gainExperience(expType gainedEXP);

    // Pure virtual function equal zero means that this function  
    // must be implemented in whomever inherate from this class
    virtual void LevelUp() = 0;

protected:
    bool check_if_leveled();

protected:
    levelType mCurrentLevel;
    levelType mCurrentExperience;
    levelType mExpToNextLevel;
};

