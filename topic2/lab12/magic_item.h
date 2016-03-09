/*
 * Name        : magic_item.h
 * Author      : River Roseveare-Hunt
 * Description : Follows instructions.
 */

#ifndef MAGIC_ITEM_H_
#define MAGIC_ITEM_H_

#include "item.h"

class MagicItem : public Item
{
    public://constructor and destructor
    MagicItem(string name_ = "magicitem", unsigned int value = 0, string description = "no description", unsigned int mana_required_= 0);
    virtual ~MagicItem();
    
    string description();//getters and setters
    void set_description(string description_);
    unsigned int mana_required();
    void set_mana_required(unsigned int mana_required_);
    
    string ToString();//returns as string
    
    private://values for sub class
    string description_;
    unsigned int mana_required_;
};

#endif