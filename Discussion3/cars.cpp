#include <iostream>
#include <stdio.h>
#include "cars.hpp"

using namespace std;

namespace ECE17
{
    Car::Car()
    {
        makeOfCar = "Unknown";
    }
    Car::Car(string make)
    {
        makeOfCar = make;
    }
    void Car::setMake(string make)
    {
        makeOfCar = make;
    }
    string Car::getMake()
    {
        return makeOfCar;
    }

} // namespace ECE17