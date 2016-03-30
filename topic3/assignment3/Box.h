#ifndef BOX_H
#define BOX_H

#include <iostream>
#include "Prize.h"
using namespace std;

class Box
{
    private:
    
    //private variable
    unsigned int boxNumber_;
    string boxColor_;
    Prize scratch_;
    Prize* prizes_;
    unsigned int prizeCapacity_;
    unsigned int prizeCount_;
    
    public:
    
    //constructors and destructors
    Box();
    Box(unsigned int boxNumber, string boxColor, unsigned int prizeCapacity);
    ~Box();
    
    //getters
    unsigned int getBoxNumber();
    string getBoxColor();
    unsigned int getPrizeCapacity();
    unsigned int getPrizeCount();
    
    //setters
    void setBoxNumber(unsigned int boxNumber);
    void setBoxColor(string boxColor);
    
    bool addPrize(Prize prize);
    bool getPrize(unsigned int index);
    Prize removePrize(unsigned int index);
};

#endif