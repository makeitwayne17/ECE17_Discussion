#include <iostream>
#include <stdio.h>
#include "cars.hpp"

using namespace std;

namespace ECE17
{
    Car::Car()
    {
        makeOfCar = "Unknown";
        nextCar = nullptr;
    }
    Car::Car(string make)
    {
        makeOfCar = make;
        nextCar = nullptr;
    }

    void Car::setMake(string make)
    {
        makeOfCar = make;
    }
    string Car::getMake()
    {
        return makeOfCar;
    }

    void Car::setNext(Car &car)
    {
        nextCar = &car;
    }

    Car *Car::getNextCar()
    {
        if (nextCar == nullptr)
        {
            return nullptr;
        }
        return nextCar;
    }
} // namespace ECE17