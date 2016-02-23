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
    int size = cypher_string.size();
    string holder;
    
    }
}


bool DecryptString (string&, int shift_value)
{
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
    
    return total;
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


