/*
 * Name        : lab_5.cpp
 * Author      : River Roseveare-Hunt
 * Description : Practicing Functions. Use this file to write your
 *               Function Definitions (what goes below main()).
 */

#include "lab_5.h"

// CODE HERE (FUNCTION DEFINITIONS)
void Hello()
{
    cout << "Hello world!";
}

void PrintMessage(const string& input)
{
    cout << input;
}

int GetAnswer()
{
    return 42;
}

int FindLarger(int value1, int value2)
{
    if (value1 > value2)
    {
        return value1;
    }
    else
    {
        return value2;
    }
}

string BuildMessage(string message, bool upper_lower)
{
    string output;
    if (upper_lower == true)
    {
        for (int i = 0; i < message.size(); i ++)
        {
            message[i]=toupper(message[i]);
        }
    }
    if (message == "")
    {
        output = "Message: empty";
    }
    else
    {
        output = "Message: " + message;
    }
    return output;
}
