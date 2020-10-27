#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include "cars.hpp"

using namespace std;
using namespace ECE17;

int main(int argc, const char *argv[])
{
    Car car1("toyota");
    Car car2("honda");

    car1.setNext(car2);

    // cout << "First car: " << car1.getMake() << "\n";
    // cout << "Second car: " << car1.getNextCar()->getMake() << "\n";

    //create mutiple chain of cars
    Car firstCar("tesla");
    Car secondCar("bmw");
    firstCar.setNext(secondCar);
    Car thirdCar("ford");
    secondCar.setNext(thirdCar);
    Car fourthCar("audi");
    thirdCar.setNext(fourthCar);
    Car fifthCar("mazda");
    fourthCar.setNext(fifthCar);
    Car sixthCar("toyota");
    fifthCar.setNext(sixthCar);

    Car *temp = &firstCar;
    while (temp != nullptr)
    {
        cout << temp->getMake() << "\t";
        temp = temp->getNextCar();
    }
    cout << endl;

    return 0;
}
