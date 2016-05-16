/*
 * Name        : sorting.cpp
 * Author      : FILL IN
 * Description : Working with Insertion and Shell Sort
 */
#include "sorting.h"

// CODE HERE -- FUNCTION DEFINITIONS


int BubbleSort(int the_array[], unsigned int size)
{

    int passes = -1;
    int total = 0;
    while (total < size)
    {
        for (int runs = 0; runs < size - 1; runs++)
        {
            if (the_array[runs] > the_array[runs + 1])
            {
                SwapValues(the_array[runs], the_array[runs + 1]);
            }
        }
        passes++;
        total++;
    }
    return passes;
}


int OptimizedBubbleSort(int the_array[], unsigned int size)
{
    int passes = 0;
    int total = 1;
    
    while (total != 0 && (passes != (size - 1)))
    {
        total = 0;
        for (int i = 0; i < (size - 1); i++)
        {
            if (the_array[i] > the_array[i + 1])
            {
                SwapValues(the_array[i], the_array[i + 1]);
                total++;
            }
        }
        passes++;
    }
    return passes;
}


int SelectionSort(int the_array[], unsigned int size)
{
    int passes = 0;
    
    for (int start = 0; start < size; start++)
    {
        int lowest = start;
        for (int comp = start; comp < size; comp++)
        {
            if (the_array[comp] < the_array[lowest])
            {
                lowest = comp;
            }
        }
        if (the_array[start] != the_array[lowest])
        {
            SwapValues(the_array[start], the_array[lowest]);
        }
        passes++;
    }
    return passes;
}


int InsertionSort(int the_array[], unsigned int size)
{
    int passes = 0;
    for (int start = 0; start < size; start++)
    {
        for (int comp = start; comp > 0; comp--)
        {
            if (the_array[comp] < the_array[comp - 1])
            {
                SwapValues(the_array[comp], the_array[comp - 1]);
            }
        }
        passes++;
    }
    return passes;
}


int ShellSort(int the_array[], unsigned int size)
{
    int passes = 0;
    int distance = size;
    while (distance > 0)
    {
        int first_pos = 0;
        int second_pos = first_pos + distance;
        while (second_pos < size)
        {
            if (the_array[second_pos] < the_array[first_pos])
            {
                SwapValues(the_array[second_pos], the_array[first_pos]);
            }
            second_pos++;
            first_pos++;
        }
        distance = distance/2;
        passes++;
    }
    return passes;
}


void SwapValues(int &value_1, int &value_2) {
  // DO NOT ALTER THE NEXT 3 LINES!!!
  if (GRADER) {
    cout << value_1 << " " << value_2 << endl;
  }
  // Code SWAP Algorithm Here
    int temp = value_1;
    value_1 = value_2;
    value_2 = temp;
}