#include "item.h"

Item::Item(string name, unsigned int value)//contructor for base class
{
  name_ = name;
  value_ = value;
}
  
Item::~Item ()//does nothing
{
  
}
  
void Item::set_name(string name)//set value
{
  name_ = name;
}
  
void Item::set_value(unsigned int value)//set value
{
  value_ = value;
}
  
string Item::name()//set value
{
  return name_;
}

unsigned int Item::value()//reutrn value
{
  return value_;
}
  
string Item::ToString()//reuturns as a string using string stream
{
  stringstream ss;
  ss.str();
  string output;
    
  ss << name_ << ", $" << value_;
  output = ss.str();
  return output;
}