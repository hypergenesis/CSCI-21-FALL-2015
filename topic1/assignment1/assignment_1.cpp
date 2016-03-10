/*
 * Name        : FILL IN
 * Author      : FILL IN
 * Description : FILL IN
 * Sources     : FILL IN
 */

#include "assignment_1.h"

// Write Function Definitions Here (What goes below main)

bool CheckAlphabetic (const string& phrase)
{
    if (phrase == "")
    {
        return false;
    }
    
    for (int i = 0; i < phrase.size(); i++)
    {
        if (!isalpha(phrase[i]))
        {
            return false;
        }
    }
    return true;
}


int CountWords (string phrase)
{
    int word_count = 0;
    if (phrase == "")
    {
        return 0;
    }
    
    else
    word_count++;
    {
    for (int i = 0; i < phrase.size(); i++)
    {
        if (phrase[i] == ' ')
        {
            word_count++;
        }
    }
    return word_count;
    }
}


bool EncryptString (string& cypher_string, int shift_value)
{
    stringstream ss;//using string stream
    ss.str();
    int size = cypher_string.size();
    int int_array[size];
    
    for (int i = size; i < size; i++)
    {
        int_array[i] = (int)cypher_string.at(i);
    }
    
    for (int i = 0; i < size; i++)
    {
        if (int_array[i] >= 65 && int_array[i] <= 90)
        {
            if (int_array[i] + shift_value <= 90)
            {
                int_array[i] = int_array[i] + shift_value;
            }
            
            else if (int_array[i] + shift_value >= 90)
            {
                int_array[i] = int_array[i] + shift_value - 26;
            }
        }
        
        else if (int_array[i] >= 97 && int_array[i] <= 122)
        {
            if (int_array[i] + shift_value <= 122)
            {
                int_array[i] = int_array[i] + shift_value;
            }
            
            else if (int_array[i] + shift_value >= 122)
            {
                int_array[i] = int_array[i] + shift_value - 26;
            }
        }
        
        else 
        {
            return false;
        }
    }
    
    ss << int_array;
    
    cypher_string = ss.str();
    
    return true;
}


bool DecryptString (string& cypher_string, int shift_value)
{
    stringstream ss;//using string stream
    ss.str();
    int size = cypher_string.size();
    int int_array[size];
    
    for (int i = size; i < size; i++)
    {
        int_array[i] = (int)cypher_string.at(i);
    }
    
    for (int i = 0; i < size; i++)
    {
        if (int_array[i] >= 65 && int_array[i] <= 90)
        {
            if (int_array[i] - shift_value <= 65)
            {
                int_array[i] = int_array[i] - shift_value;
            }
            
            else if (int_array[i] - shift_value >= 65)
            {
                int_array[i] = int_array[i] - shift_value + 26;
            }
        }
        
        else if (int_array[i] >= 97 && int_array[i] <= 122)
        {
            if (int_array[i] - shift_value <= 97)
            {
                int_array[i] = int_array[i] - shift_value;
            }
            
            else if (int_array[i] - shift_value >= 97)
            {
                int_array[i] = int_array[i] - shift_value + 26;
            }
        }
        
        else 
        {
            return false;
        }
    }
    
    ss << int_array;
    
    cypher_string = ss.str();
    
    return true;
}


double ComputeAverage (double values[], unsigned int size)
{
    double total = 0.0;
    
    for (int i = 0; i < size; i++)
    {
        total = total + values[i];
    }
    double average = total/size;
    
    return average;
}


double FindMinValue (double values[], unsigned int size)
{
    double min_value = values[0];
    for (int i = 0; i < size; i++)
    {
        if (min_value > values[i])
        {
            min_value = values[i];
        }
    }
    return min_value;
}


double FindMaxValue (double values[], unsigned int size)
{
    double max_value = values[0];
    for (int i = 0; i < size; i++)
    {
        if (max_value < values[i])
        {
            max_value = values[i];
        }
    }
    return max_value;
}


