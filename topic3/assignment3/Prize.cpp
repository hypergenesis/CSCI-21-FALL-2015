#include "Prize.h"

Prize::Prize()
{
    prizeName_ = "Nothing";
    prizeValue_ = "0";
}

Prize::~Prize()
{
    
}

Prize::Prize(string prizeName, unsigned int prizeValue)
{
  prizeName_ = prizeName;
  prizeValue_ = prizeValue;
}

Prize::friend bool operator == (const Prize& prize1, const Prize& prize2)
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

Prize::string getPrizeName()
{
    return prizeName_;
}

Prize::unsigned int getPrizeValue()
{
    return prizeValue_;
}

Prize::void setPrizeName(string prizeName)
{
    prizeName_ = prizeName;
}

Prize::void setPrizeValue(unsigned int prizeValue)
{
    prizeValue_ = prizeValue;
}