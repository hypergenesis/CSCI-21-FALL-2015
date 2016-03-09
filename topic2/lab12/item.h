/*
 * Name        : item.h
 * Author      : River Roseveare-Hunt
 * Description : Follows instructions.
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Item 
{
  public://contructor and destructor
    Item (string name_ = "item", unsigned int value_ = 0);
    virtual ~Item();
    
    string name();//getters and setters
    void set_name(string name_);
    unsint value();
    void set_value(unsigned int value_);
    
    string ToString();//converts to string an returns
    
  private://values for base class
    string name_;
    unsigned int value_;
};

#endif