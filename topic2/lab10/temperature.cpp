#include "temperature.h"

// CLASS FUNCTION DEFINITIONS GO HERE
Temperature::Temperature()//constructor
{
    kelvin_ = 0;
}

Temperature::Temperature(double kelvin)//alt constructor
{
    kelvin_ = kelvin;
}

Temperature::Temperature(double temp, char unit)//alt alt constructor
{
    if (unit == 'C' || unit == 'c')
    {
        kelvin_ = temp + 273.15;
    }
    
    else if (unit == 'F' || unit == 'f')
    {
        kelvin_ = (5.0 * (temp - 32.0) / 9.0) + 273.15;
    }
    
    else
    {
        kelvin_ = temp;
    }
}

void Temperature::SetTempFromKelvin(double kelvin)//set tem in kelvin
{
    kelvin_ = kelvin;
}

void Temperature::SetTempFromCelsius(double celsius)//set temp in celsius
{
    kelvin_ = celsius + 273.15;
}

void Temperature::SetTempFromFahrenheit(double fahrenheit)// set temp in fahrenheit
{
    kelvin_ = (5.0 * (fahrenheit - 32.0) / 9.0) + 273.15;
}

double Temperature::GetTempAsKelvin() const//get temp as kelvin
{
    return kelvin_;
}

double Temperature::GetTempAsCelsius() const// get
{
    double celsius = kelvin_ - 273.15;
    return celsius;
}

double Temperature::GetTempAsFahrenheit() const// get
{
    double fahrenheit = (((kelvin_ - 273.15) * 9.0) / 5.0) + 32.0;
    return fahrenheit;
}

string Temperature::ToString(char unit) const// convert the c and value into a string to output
{
    stringstream ss;//using string stream
    ss.str();
    string output_string;
    
    
    ss.setf(std::ios::fixed);//change length of double
    ss.setf(std::ios::showpoint);
    ss.precision(2);
    
    if (unit == 'K' || unit == 'k')//checks if
    {
        ss << kelvin_ << " Kelvin"; 
    }
    
    else if (unit == 'C' || unit == 'c')//ditto
    {
        double celsius =  GetTempAsCelsius();//runs function
        ss << celsius << " Celsius";
    }
    
    else if (unit == 'F' || unit == 'f')//ditto
    {
        double fahrenheit = GetTempAsFahrenheit();
        ss  << fahrenheit << " Fahrenheit";
    }
    
    else
    {
        ss << "Invalid Unit";
    }
    
    output_string = ss.str();
    //outputs
    return output_string;
}