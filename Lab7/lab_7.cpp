/*
 * Name        : lab_7.cpp
 * Author      : River Roseveare-Hunt
 * Description : Working with File I/O
 */
#include "lab_7.h"

// CODE HERE -- FUNCTION DEFINITION FOR ProcessFile()
bool ProcessFile(string filename)
{
    int input_number = 0;//declare variable int
    
    ifstream InStream;//declare stream
    InStream.open(filename.c_str());//open stream
    
    if (InStream.fail())//checks failure
    {
        return false;
    }
    
    while (!InStream.eof())//checks for end of stream.
    {
        InStream >> input_number;
        
        if (input_number == 10)//checks input
        {
            OnTen();
        }
        
        else if (input_number == 20)//checks input
        {
            OnTwenty();
        }
        
        else if (input_number == 30)//checks input
        {
            OnThirty();
        }
        
        else if (input_number == 40)//checks input
        {
            OnForty();
        }
        
        else if (input_number == 50)//checks input
        {
            OnFifty();
        }
        
        else//otherwise
        {
            OnError();
        }
    }
    InStream.close();
    return true;
}

void ProcessArguments(int argc, char* argv[])
{
    string argument;//declare string
    for (int i = 1; i < argc; i++)
    {
         argument = argv[i];//sets string = to
         
         if (argument == "10")//checks input
         {
             OnTen();
         }
         
         else if (argument == "20")//checks input
         {
             OnTwenty();
         }
         
         else if (argument == "30")//checks input
         {
             OnThirty();
         }
         
         else if (argument == "40")//checks input
         {
             OnForty();
         }
         
         else if (argument == "50")//checks input
         {
             OnFifty();
         }
         
         else//otherwise
         {
             OnError();
         }
    }
}