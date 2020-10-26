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
        string getModels(string make);

    protected:
        string makeOfCar;
    };
} // namespace ECE17

#endif