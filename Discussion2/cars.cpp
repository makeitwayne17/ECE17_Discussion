#include <iostream>
#include <stdio.h>
#include "cars.hpp"

namespace ECE17{
    Car::Car(std::string make){
        makeOfCar = make;
    }
    void Car::setMake(std::string make){
        makeOfCar = make;
    }
    std::string Car::getMake(){
        return makeOfCar;
    }    
}