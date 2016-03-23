/*
 * Name        : lab_12.cpp
 * Author      : FILL IN
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "lab_14.h"

// CODE HERE -- FUNCTION DEFINITIONS
int* MakeDynoIntArray(unsigned int size)
{
    int * array;
    array = new int[size];
    for (int i = 0; i < size; i++)
    {
        array[i] = i + 1;
    }
    return array;
}

int Sum(int* the_array, unsigned int array_size)
{
    int sum = 0;
    
    //the_array = new /*(nothrow)*/ int [array_size];
    if (the_array == NULL || array_size == 0)
    {
        throw "NULL ARRAY REFERENCE";
    }
    for (int i = 0; i < array_size; i++)
    {
        //the_array[i] = i + 1;
        sum = sum + the_array[i];
    }
    return sum;
}

int Max(int* the_array, unsigned int array_size)
{
    if (the_array == NULL || array_size == 0)
    {
        throw "NULL ARRAY REFERENCE";
    }
    int max = the_array[0];
    //the_array = new /*(nothrow)*/ int[array_size];
    for (int i = 0; i < array_size; i++)
    {
        //the_array[i] = i + 1;
        if (max < the_array[i])
        {
            max = the_array[i];
        }
    }
    return max;
}

int Min(int* the_array, unsigned int array_size)
{
    if (the_array == NULL || array_size == 0)
    {
        throw "NULL ARRAY REFERENCE";
    }
    int min = the_array[0];
    //the_array = new /*(nothrow)*/ int[array_size];
    for (int i = 1; i < array_size; i++)
    {
        //the_array[i] = i + 1;
        if (min > the_array[i])
        {
            min = the_array[i];
        }
    }
    return min;
}