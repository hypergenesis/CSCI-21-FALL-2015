/*
 * Name        : Temperature.h
 * Author      : River Roseveare-Hunt
 * Description : Class Header File
 */

// ADD HEADER GUARD HERE
#ifndef LAB_H
#define LAB_H

#include <string>
#include <sstream>
using std::string;
using std::stringstream;

/*
 * Class Temperature.
 * A class that converts Temperatures. It will always internally store the value
 * in kelvin.
 */
class Temperature {
 public:
  /*
   * Constructor #1.
   * Sets kelvin_ to 0
   */
  Temperature();

  /*
   * Constructor #2.
   * Sets kelvin_ to the supplied value
   * @param double kelvin - The value to set the internal kelvin to
   */
  Temperature(double kelvin);

  /*
   * Constructor #3.
   * Converts the supplied Temperature to kelvin and internally stores it.
   * The Temperature's unit will be provided in the second argument.
   * If the second argument is not value (i.e. not 'F' or 'C') assume the
   * Temperature is in kelvin
   * @param double temp - The value to set the internal kelvin to once
   *                    - converted.
   * @param char unit - The type of unit temp is. Will be either 'F' or 'C',
   *                    case-insensitive
   */
  Temperature(double temp, char unit);

  /*
   * The Temperature will come in as kelvin and this function will set the
   * internal temp to this value
   * @param double kelvin - The value to set the internal kelvin to.
   */
  void SetTempFromKelvin(double kelvin);


  /*
   * The Temperature will come in as Celsius and this function will set the
   * internal temp to this value, once converted to kelvin
   * Formula: k = c + 273.15
   * @param double celsius - The value (in celsius) to set the internal kelvin
   *                       - to.
   */
  void SetTempFromCelsius(double celsius);


  /*
   * The Temperature will come in as Fahrenheit and this function will set the
   * internal temp to this value, once converted to kelvin
   * Formula: k = (5.0 * (f - 32) / 9) + 273.15
   * @param double fahrenheit - The value (in fahrenheit) to set the internal
   *                          - kelvin to.
   */
  void SetTempFromFahrenheit(double fahrenheit);

  /*
   * Gets the internal Temperature in Kelvin.
   * @return double - The Temperature in Kelvin
   */
  double GetTempAsKelvin() const;

  /*
   * Returns the internal temp converted to Celsius
   * Formula: k - 273.15
   * @return double - The Temperature in Celsius
   */
  double GetTempAsCelsius() const;

  /*
   * Returns the internal temp converted to Fahrenheit
   * Formula: ((c * 9.0) / 5) + 32;
   * @return double - The Temperature in Fahrenheit
   */
  double GetTempAsFahrenheit() const;

  /*
   * Get a string representation of the Temperature.
   * The string will be formatted as:
   * "TEMP UNIT"
   * where TEMP is the Temperature to 2 decimal places and UNIT is either
   * "Kelvin", "Celsius", or "Fahrenheit".
   * The conversion to perform is denoted by the parameter.
   * If the unit given through the argument is invalid, set the string to:
   * "Invalid Unit"
   * @uses stringstream
   * @param char unit - The conversion to perform, either 'K', 'C' or 'F',
   *                    defaults to 'K' and is case-insensitive
   * @return string - A string representation of the Temperature or invalid if
   *                  the provided unit is not recognized
   */
  string ToString(char unit = 'K') const;

 private:
  double kelvin_;
};

// REST OF HEADER GUARD GOES HERE
#endif