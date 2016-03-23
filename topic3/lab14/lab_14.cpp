/*
 * Name        : lab_12.cpp
 * Author      : FILL IN
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "lab_14.h"

// CODE HERE -- FUNCTION DEFINITIONS
int* MakeDynoIntArray(unsigned int size)
{
    //declare pointer
    int * array;
    //make it an array
    array = new int[size];
    //fill it with stuff
    for (int i = 0; i < size; i++)
    {
        array[i] = i + 1;
    }
    //return the array
    return array;
}

int Sum(int* the_array, unsigned int array_size)
{
    //initialize sum
    int sum = 0;
    
    //the_array = new /*(nothrow)*/ int [array_size];
    //the array checks throw
    if (the_array == NULL || array_size == 0)
    {
        throw "NULL ARRAY REFERENCE";
    }
    //adds stuff
    for (int i = 0; i < array_size; i++)
    {
        //the_array[i] = i + 1;
        sum = sum + the_array[i];
    }
    //return sum
    return sum;
}

int Max(int* the_array, unsigned int array_size)
{
    //all is same as last except...
    if (the_array == NULL || array_size == 0)
    {
        throw "NULL ARRAY REFERENCE";
    }
    int max = the_array[0];
    //the_array = new /*(nothrow)*/ int[array_size];
    //... this part now checks for the max value
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
    //same as above except...
    if (the_array == NULL || array_size == 0)
    {
        throw "NULL ARRAY REFERENCE";
    }
    int min = the_array[0];
    //the_array = new /*(nothrow)*/ int[array_size];
    //... this part now checks for min value
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