//Cars.hpp
#include <string>
#ifndef cars_h
#define cars_h
using namespace std;

namespace ECE17
{
    class Car
    {
    public:
        Car();
        Car(string make);
        void setMake(string make);
        string getMake();
        void setNext(Car &car);
        Car *getNextCar();

    protected:
        string makeOfCar;
        Car *nextCar;
    };
} // namespace ECE17

#endif