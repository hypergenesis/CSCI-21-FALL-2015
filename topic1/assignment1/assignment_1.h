/*
 * Name        : River Roseveare-Hunt
 * Author      : River Roseveare-Hunt
 * Description : Semi-working
 */

#ifndef ASSIGNMENT_1_H
#define ASSIGNMENT_1_H

// Add any includes and using statements Here

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <streambuf>
#include <cctype>
using namespace std;
// Declare Function Prototypes Here (What goes above main)
bool CheckAlphabetic (const string&);

int CountWords (string phrase);

bool EncryptString (string&, int shift_value);

bool DecryptString (string&, int shift_value);

double ComputeAverage (double values[], unsigned int size);

double FindMinValue (double values[], unsigned int size);

double FindMaxValue (double values[], unsigned int size);

#endif /* ASSIGNMENT_1_H */
