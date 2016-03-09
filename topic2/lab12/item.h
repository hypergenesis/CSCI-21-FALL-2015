/*
 * Name        : item.h
 * Author      : River Roseveare-Hunt
 * Description : Follows instructions.
 */

#ifndef ITEM_H_
#define ITEM_H_

Class Item 
{
    public://contructor and destructor
    Item (string name_ = "item", unsigned int value_ = 0);
    virtual ~Item();
    
    string GetName(string name_);//getters and setters
    void SetName();
    int GetValue(unsigned int value_);
    void SetValue();
    
    string ToString();//converts to string an returns
    
    private://values for base class
    string name_;
    unsigned int value_;
}

#endif