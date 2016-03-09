#include <food_item.h>

FoodItem::FoodItem(string name, unsigned int value, unsigned int calories, string unit_of_measure, double units)//constructor
{
  Item::set_name(name);
  Item::set_value(value);
  calories_ = calories;
  unit_of_measure_ = unit_of_measure;
  units_ = units;
}

FoodItem::~FoodItem()//nothing
{
  
}

void FoodItem::set_calories(unsigned int calories)//set value
{
  calories_ = calories;
}

void FoodItem::set_unit_of_measure(string unit_of_measure)//set value
{
  unit_of_measure_ = unit_of_measure;
}

void FoodItem::set_units(double units)//set value
{
  units_ = units;
}

unsigned int FoodItem::calories()//return value
{
  return calories_;
}

string FoodItem::unit_of_measure()//return value
{
  return unit_of_measure_;
}

double FoodItem::units()//return value
{
  return units_;
}

string FoodItem::ToString()//converts all to string stream then string then return.
{
  string output;
  stringstream ss;
  ss.str();
  
  ss.setf(std::ios::showpoint | std::ios::fixed);
  ss.precision(2);
  
  ss << Item::ToString() << ", " << units_ << " " << unit_of_measure_ << ", " << calories_ << " calories";
  output = ss.str();
  return output;
}