/*
 * Name        : lab_9.cpp
 * Author      : River Roseveare-Hunt
 * Description : Building a Spaceship Class
 */
#include "lab_9.h"

// CODE HERE -- CLASS FUNCTION DEFINITIONS
void Spaceship::set_name(string name)//sets name_
{
    name_ = name;
}

void Spaceship::set_top_speed(double top_speed)//sets top_speed_
{
    top_speed_ = top_speed;
}

void Spaceship::set_fuel_source(string fuel_source)//sets fuel_source_
{
    fuel_source_ = fuel_source;
}

void Spaceship::set_crew_capacity(int crew_capacity)//sets crew_capacity_
{
    crew_capacity_ = crew_capacity;
}

string Spaceship::fuel_source() const//gets fuel_source_
{
    return fuel_source_;
}

string Spaceship::name() const//gets name_
{
    return name_;
}

double Spaceship::top_speed() const// gets top_speed_
{
    return top_speed_;
}

int Spaceship::crew_capacity() const//gets crew_capacity
{
    return crew_capacity_;
}

string Spaceship::ToString() const//saes entire information as a string
{
    stringstream ss;
    ss.str();
    string output_string;
    
    ss.setf(std::ios::fixed);
    ss.setf(std::ios::showpoint);
    ss.precision(2);
    
    ss << name_ << "\nTop Speed:     Warp " << top_speed_ << "\nFuel Source:   " << fuel_source_ << "\nCrew Capacity: " << crew_capacity_;
    
    output_string = ss.str();
    
    return output_string;
}