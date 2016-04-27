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


string decToBin(int num)
{
    stringstream ss;
    ss.str();
    
    if (num > 1)
    {
        ss << (num%2);
        ss << decToBin(num/2);
    }
    
    ss << (num%2);
    
    string re_string = ss.str();
    return re_string;
}

unsigned int binToDec(int num)
{
    while (num > 0)
    {
        int base = 10;
        int rem = num % 10;
        num = num + (rem * base);
        binToDec(num);
    }
    
    return num;
}

int main()
{
    cout << decToBin(256) << endl;
    cout << binToDec(101);
    
}