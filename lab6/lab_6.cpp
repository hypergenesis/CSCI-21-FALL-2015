/*
 * Name        : lab_6.cpp
 * Author      : River Roseveare-Hunt
 * Description : Working with Arrays
 */

#include "lab_6.h"

// CODE HERE (FUNCTION DEFINITIONS)
string PrepareForDisplay(int values[], int size, char separator)
{
    stringstream ss;
    ss.str();
    string output_string;
    
    for (int i = 0; i < size; i++)
    {
        ss << values[i];
        if (i < size - 1)
        {
            ss << separator;
        }
    }
    output_string = ss.str();
    return output_string;
}


bool HasValue(int values[], int size, int value)
{
    bool true_false = false;
    for (int i = 0; i < size; i++)
    {
        if (values[i] == value)
        {
            true_false = true; 
        }
    }
    return true_false;
}


int ValueAt(int values[], int size, int index, bool &error)
{
    int re_value;
    if (index < size)
    {
        error = false;
    }
    
    else
    {
        error = true;
        return 0;
    }
    
    re_value = values[index];
    return re_value;
}


int Sum(int values[], int size)
{
    int re_add = 0;
    for (int i = 0; i < size; i++)
    {
        re_add = re_add + values[i];
    }
    return re_add;
}


bool SwapValues(int values[], int size, int index1, int index2)
{
    int temp_hold;//decleration of necessary variables
    int original_value_1 = values[index1];
    int original_value_2 = values[index2];
    
    if ((index1 < size) && (index1 >= 0) && (index2 < size) && (index2 >= 0))//checks to make sure variables are within array limits
    {
        temp_hold = values[index1];//swaps values
        values[index1] = values[index2];
        values[index2] = temp_hold;
        
        if ((values[index1] == original_value_2) && (values[index2] == original_value_1))//if they swapped correctly, return true
        {
          return true;
        }
    }
    
    else//otherwise...
    {
        return false;
    }
}