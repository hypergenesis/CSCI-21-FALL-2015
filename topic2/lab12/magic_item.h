/*
 * Name        : magic_item.h
 * Author      : River Roseveare-Hunt
 * Description : Follows instructions.
 */

#ifndef MAGIC_ITEM_H_
#define MAGIC_ITEM_H_

class MagicItem : public Item
{
    public://constructor and destructor
    MagicItem(string name_ = "magicitem", unsigned int value = 0, string description = "no description", unsigned int mana_required_= 0);
    virtual ~Destructor():
    
    string GetDescription(string description_);//getters and setters
    void SetDescription();
    int GetManaRequired(unsigned int mana_required_);
    int SetManaRequired();
    
    string ToString();//returns as string
    
    private://values for sub class
    string description_;
    unsigned int mana_required_;
}

#endif