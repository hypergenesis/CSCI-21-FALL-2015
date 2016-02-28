#include "temperature.h"

// CLASS FUNCTION DEFINITIONS GO HERE
Tempurature::Temperature()
{
    kelvin_ = 0;
}

Tempurature::Temperature(double kelvin)
{
    kelvin_ = kelvin;
}

Tempurature::Temperature(double temp, char unit)
{
    if (unit = 'C')
    {
        kelvin_ = temp - 273.15;
    }
    
    else if (unit = 'F')
    {
        kelvin = (temp + 459.67) * (5 / 9);
    }
    
    else
    {
        kelvin_ = temp;
    }
}

Tempurature::void SetTempFromKelvin(double kelvin)
{
    kelvin_ = kelvin;
}

Tempurature::void SetTempFromCelsius(double celsius)
{
    kelvin_ = celsius + 273.15;
}

Tempurature::void SetTempFromFahrenheit(double fahrenheit)
{
    kelvin_ = (5.0 * (f - 32) / 9) + 273.15;
}

Tempurature::double GetTempAsKelvin() const
{
    return kelvin_;
}

Tempurature::double GetTempAsCelsius() const
{
    double celsius = kelvin_ - 273.15;
    return celsius;
}

Tempurature::double GetTempAsFahrenheit() const
{
    double fahrenheit = (((kelvin_ - 273.15) * .0) / 5) + 32;
    return fahrenheit;
}

Tempurature::string ToString(char unit = 'K') const
{
    stringstream ss;
    ss.str();
    string output_string;
    
    
    if (unit = 'K')
    {
        ss << "Kelvin " << kelvin_; 
    }
    
    else if (unit = 'C')
    {
        double celsius =  GetTempAsCelsius();
        ss << "Celsius " << celsius;
    }
    
    else if (unit = 'F')
    {
        double fahrenheit = GetTempAsFahrenheit();
        ss << "Fahrenheit" << fahrenheit;
    }
    
    else
    {
        ss << "Invalid Unit";
    }
    
    output_string = ss.str();
    
    return output_string;
}