//Cars.hpp
#include <string>
#ifndef cars_h
#define cars_h

namespace ECE17{
    class Car{
        public:
            Car(std::string make);
            void setMake(std::string make);
            std::string getMake();
        protected:
            std::string makeOfCar;
    };
}

#endif