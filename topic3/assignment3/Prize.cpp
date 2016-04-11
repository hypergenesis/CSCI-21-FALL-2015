#include "Prize.h"

Prize::Prize()
{
    prizeName_ = "Nothing";
    prizeValue_ = 0;
}

Prize::~Prize()
{
    
}

Prize::Prize(string prizeName, unsigned int prizeValue)
{
  prizeName_ = prizeName;
  prizeValue_ = prizeValue;
}

string Prize::getPrizeName()
{
    return prizeName_;
}

unsigned int Prize::getPrizeValue()
{
    return prizeValue_;
}

void Prize::setPrizeName(string prizeName)
{
    prizeName_ = prizeName;
}

void Prize::setPrizeValue(unsigned int prizeValue)
{
    prizeValue_ = prizeValue;
}

bool operator == (const Prize& prize1, const Prize& prize2)
{
    if (prize1.prizeName_ == prize2.prizeName_ && prize1.prizeValue_ == prize2.prizeValue_)
    {
        return true;
    }
    
    else 
    {
        return false;
    }
}