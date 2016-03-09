/*
 * Name        : food_item.h
 * Author      : River Roseveare-Hunt
 * Description : Follows instructions.
 */

#ifndef FOOD_ITEM_H_
#define FOOD_ITEM_H_

class FoodItem : public Item
{
    public://constructor and destructor
    FoodItem(string name_ = "fooditem", unsigned int value_ = 0, unsigned int calories_ = 0, string unit_of_measure = "nounits", double units_ = 0.0)
    virtual ~FoodItem();
    
    int GetCalories();//Getters and setters
    void SetCalories(unsigned int calories_);
    string GetUnitOfMeasure();
    void SetUnitOfMeasure(string unit_of_measure);
    double GetUnits();
    void SetUnits(double units_);
    
    string ToString();//reutrn as string function
    
    private://subclass variables
    unsigned int calories_;
    string unit_of_measure;
    double units_;
}

#endif