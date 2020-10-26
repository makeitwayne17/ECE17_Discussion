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
    string Car::getModels(string make)
    {
        string output = make + " has ";
        string makeLowerCase;

        //convert to lowercase
        for (char c : make)
        {
            makeLowerCase += c >= 'A' ? tolower(c) : c;
        }
        
        if (makeLowerCase.compare("toyota") == 0)
        {
            output += "Camry, Corolla, C-HR, Avalon, RAV4, 4Runner, Land Cruiser, Prius, Sienna\n";
        }
        else if (makeLowerCase.compare("tesla") == 0)
        {
            output += "S, 3, X, Y\n";
        }
        else if (makeLowerCase.compare("jeep") == 0)
        {
            output += "Cherokee, Compass, Wrangler, Renegade\n";
        }
        else if (makeLowerCase.compare("bmw") == 0)
        {
            output += "2, 3, 4, 5, 7, 8, i3, i8, X1, X2, X3, X4, X5, X6, X7, Z4, M3, M5, M7\n";
        }
        else if (makeLowerCase.compare("audi") == 0)
        {
            output += "A3, A4, A5, A6, A7, A8, e-tron, Q3, Q5, Q7, Q8, R8, S4, RS4, S6, TT\n";
        }
        else if (makeLowerCase.compare("mazda") == 0)
        {
            output += "3, 6, CX-3, CX-5, CX-9, Miata\n";
        }
        else if (makeLowerCase.compare("ferrari") == 0)
        {
            output += "488, F8, Roma, Portofino, 488GTB, California, LaFerrari, FF\n";
        }
        else if (makeLowerCase.compare("lamborghini") == 0)
        {
            output += "Aventador, Hurancan, Urus, Gallardo\n";
        }
        else
        {
            output += "a lot of different models\n";
        }
        return output;
    }
} // namespace ECE17