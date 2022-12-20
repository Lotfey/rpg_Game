#pragma once
#include<cstdint>
typedef std::uint16_t statType; 

// This type was intially uint8_t which intruduces few buggs while 
// printing the values with std::cout.
// this could be due to the formating issue
// therefore, for a quick fix, i used uint16_