#include "Box.h"
#include "Prize.h"
//constructors and destructors

Box::Box()
{
  boxNumber_ = 0;
  boxColor_ = "NO COLOR";
  prizeCapacity_ = 5;
  prizeCount_ = 0;
  
  Prize *prizes = new Prize[prizeCapacity_];
  for(int i = 0; i < prizeCapacity_; i++)
  {
    prizes[i] = Prize();
  }
}

Box::Box(unsigned int boxNumber, string boxColor, unsigned int prizeCapacity)
{
  boxNumber_ = boxNumber;
  boxColor_ = boxColor;
  prizeCapacity_ = prizeCapacity;
  Prize *prizes = new Prize[prizeCapacity_];
/*  for(int i = 0; i < prizeCapacity_; i++)
  {
    prizes[i] = Prize();
  }*/
}

Box::~Box()
{
  delete prizes;
}

unsigned int Box::getBoxNumber()
{
  return boxNumber_;
}

void Box::setBoxNumber(unsigned int boxNumber)
{
  boxNumber_ = boxNumber;
}

string Box::getBoxColor()
{
  cout<<boxColor_;
  return boxColor_;
}

void Box::setBoxColor(string boxColor)
{
  boxColor_ = boxColor;
  cout<<boxColor_;
}

unsigned int Box::getPrizeCapacity()
{
  return prizeCapacity_;
}

unsigned int Box::getPrizeCount()
{
  return prizeCount_;
}

bool Box::addPrize(Prize prize)
{
  for(int i = 0; i < prizeCapacity_; i++)
  {
    if(prizes[i] == Prize())
    {
      prizes[i] = prize;
      return true;
    }
    else
    {
    return false;
    }
  }
}

Prize Box::getPrize(unsigned int index)
{
  if(index < 0 || index > prizeCapacity_)
  {
    return scratch_;
  }
  
  if(!(prizes[index] == Prize()))
  {
    return prizes[index];
  }
}

Prize Box::removePrize(unsigned int index)
{
  if(index < 0 || index > prizeCapacity_)
  {
    return scratch_;
  }
  
  else if(!(prizes[index] == Prize()))
  {
    Prize p = prizes[index];
    prizes[index] = Prize();
    return p;
  }
}