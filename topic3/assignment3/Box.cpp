#include "Box.h"
#include "Prize.h"
//constructors and destructors
Box::Box()
{
    boxNumber_ = 0;
    boxColor_ = "NO COLOR";
    prizeCapacity_ = 5;
    prizeCount_ = 0;
    prizes_ = new Prize[prizeCapacity_];
}

Box::Box(unsigned int boxNumber, string boxColor, unsigned int prizeCapacity)
{
    boxNumber_ = boxNumber;
    boxColor_ = boxColor;
    prizeCapacity_ = prizeCapacity;
    prizeCount_ = 0;
    prizes_ = new Prize[prizeCapacity_];
}

Box::~Box()
{
    delete prizes_;
}

//getters
unsigned int Box::getBoxNumber()
{
    return boxNumber_;
}

string Box::getBoxColor()
{
    return boxColor_;
}

unsigned int Box::getPrizeCapacity()
{
    return prizeCapacity_;
}
unsigned int Box::getPrizeCount()
{
    return prizeCount_;
}

//setters
void Box::setBoxNumber(unsigned int boxNumber)
{
    boxNumber_ = boxNumber;
}

void Box::setBoxColor(string boxColor)
{
    boxColor_ = boxColor;
}

//others
bool Box::addPrize(Prize prize)
{
    if (prizeCount_ < prizeCapacity_)
    {
        prizes_[prizeCount_++] = prize;
        return true;
    }
    else
    {
        return false;
    }
}

Prize Box::getPrize(unsigned int index)
{
    if (index < 0 || index > prizeCapacity_)
    {
        return scratch_;
    }
    else if (!(prizes_[index] == Prize()))
    {
        return prizes_[index];
    }
}

Prize Box::removePrize(unsigned int index)
{
    if (index < 0 || index > prizeCapacity_)
    {
        return scratch_;
    }
    else if (!(prizes_[index] == Prize()))
    {
        Prize re_Prize = prizes_[index];
        prizes_[index] = Prize();
        return re_Prize;
    }
}