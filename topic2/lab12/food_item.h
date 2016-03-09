/*
 * Name        : food_item.h
 * Author      : River Roseveare-Hunt
 * Description : Follows instructions.
 */

#ifndef FOOD_ITEM_H_
#define FOOD_ITEM_H_

#include "item.h"

class FoodItem : public Item
{
    public://constructor and destructor
    FoodItem(string name_ = "fooditem", unsigned int value_ = 0, unsigned int calories_ = 0, string unit_of_measure = "nounits", double units_ = 0.0);
    virtual ~FoodItem();
    
    unsigned int calories();//Getters and setters
    void set_calories(unsigned int calories_);
    string unit_of_measure();
    void set_unit_of_measure(string unit_of_measure_);
    double units();
    void set_units(double units_);
    
    string ToString();//reutrn as string function
    
    private://subclass variables
    unsigned int calories_;
    string unit_of_measure_;
    double units_;
};

#endif