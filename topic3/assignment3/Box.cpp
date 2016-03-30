#include "Box.h"
#include "Prize.h"
//constructors and destructors
Box::Box()
{
    boxNumber_ = 0;
    boxColor_ = "NO COLOR";
    prizeCapacity_ = 5;
    prizeCount_ = 0;
    Prize* prize = new Prize[prizeCapacity_];
    for (int i = 0; i < prizeCapacity_; i++)
    {
        prizes[i] = Prize();
    }
}

Box::Box(unsigned int boxNumber, string boxColor, unsigned int prizeCapacity)
{
    boxNumber_ = boxNumber;
    boxColor_ = boxColor;
    prizeCapacity_ = prizeCapacity;
}

Box::~Box()
{
    delete prizes;
}

//getters
unsigned int Box::getBoxNumber()
{
    return BoxNumber_;
}

string Box::getBoxColor()
{
    return BoxColor_;
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
bool Box::addPrize(Prize* prize)
{
    for (int i = 0; i < prizeCapacity_; i++)
    {
        if(prizes[i] == Prize())
        {
            prizes[i] = prize;
            return true;
        }
        else
        {
            return false
        }
    }
}

bool Box::getPrize(unsigned int index)
{
    if (index < 0 || index > prizeCapacity_)
    {
        return scratch_;
    }
    else if (!(prizes[index] == Prize()))
    {
        return prizes[index];
    }
}

Prize Box::removePrize(unsigned int index)
{
    if (index < 0 || index > prizeCapacity_)
    {
        return scratch_;
    }
    else if (!(prize[index] == Prize()))
    {
        Prize re_Prize = prizes[index];
        prizes[index] = Prize();
        return re_Prize;
    }
}