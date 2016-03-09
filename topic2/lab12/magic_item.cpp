#include <magic_item.h>

MagicItem::MagicItem(string name, unsigned int value, string description, unsigned int mana_required)//constructor
{
  Item::set_name(name);
  Item::set_value(value);
  description_ = description;
  mana_required_ = mana_required;
}

MagicItem::~MagicItem()//does nothing
{
    
}

void MagicItem::set_description(string description)//sets value
{
  description_ = description;
}

void MagicItem::set_mana_required(unsigned int mana_required)//sets value
{
  mana_required_ = mana_required;
}

string MagicItem::description()//returns value
{
  return description_;
}

unsigned int MagicItem::mana_required()//returns value
{
  return mana_required_;
}

string MagicItem::ToString()//returns values as 1 string.
{
  string output;
  stringstream ss;
  ss.str();
  
  ss << Item::ToString() << ", " << description_ << ", requires " << mana_required_ << " mana";
  output = ss.str();
  return output;
}