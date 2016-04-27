/*
 * Name        : lab_recursion.cpp
 * Author      : River Roseveare-Hunt
 * Description : Recursive Functions
 */

#include "lab_recursion.h"

// CODE FUNCTION DEFINITIONS HERE

/*
 * UPDATE!!!! to match the requirements
 * Convert a decimal number to binary
 * @param number to be converted.
 * @return a stringstream.
 */


stringstream decToBin(int num)
{
    stringstream ss;
    ss.str();
    
    if (num > 1)
    {
        ss << (num%2);
        decToBin(num%2);
    }
    
    
    ss << (num%2);
    return ss;
}

unsigned int binToDec(int num)
{
    
    unsigned int base = 1;
    unsigned int add = 0;
    unsigned int dec = 0;
    if (num > 0)
    {
        add = num % 10;
        dec = dec + (add * base);
        base = base*2;
        binToDec(num/10);
    }
    
    return num;
}

int main()
{
    return 0;
}