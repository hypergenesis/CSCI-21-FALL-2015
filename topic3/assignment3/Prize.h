#ifndef ASS_H
#define ASS_H

#include <iostream>
#include <string>
using namespace std;

class Prize
{
    private:
    //values
    string prizeName_;
    unsigned int prizeValue_;
    
    public:
    
    //constructor & destructor
    Prize();
    ~Prize();
    Prize(string prizeName, unsigned int prizeValue);
    
    //overloaded comparator
    friend bool operator ==(const Prize& name1, const Prize& name2);
    
    //getters
    string getPrizeName();
    unsigned int getPrizeValue();
    
    //setters
    void setPrizeName(string prizeName);
    void setPrizeValue(unsigned int prizeValue);
};

#endif