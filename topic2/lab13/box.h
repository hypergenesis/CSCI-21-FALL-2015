/*
 * Name        : item.h
 * Author      : River Roseveare-Hunt
 * Description : Follows instructions.
 */

#ifndef BOX_H_
#define BOX_H_

#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
using namespace std;


template <class Type>
class Box
{
    public:
    //Constructor
    Box ()
    {
        
    }
    //overload consructor
     Box (Type value)
    {
        value_ = value;
    }
    //Getters
    Type getContents()
    {
        return value_;
    }
    //Setters
    void setContents(Type value)
    {
        value_ = value;
    }
    //Friends
    friend ostream& operator <<(ostream &out, Box<Type> value)
    {
        out << value.value_;
        return out;
    }
    
    private:
    Type value_;
};


template<typename T>
T Sum(T values[] = T(), unsigned int size = 0)
{
  T total = T();
  for (int i = 0; i < size; i++)
  {
    total = total + values[i];
  }
  
  return total;
}
#endif 