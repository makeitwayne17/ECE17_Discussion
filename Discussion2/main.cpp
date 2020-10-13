#include <iostream>
#include <stdio.h>

class Car
{
public:
  Car(std::string make)
  {
    makeOfCar = make;
  }
  void setMake(std::string make)
  {
    makeOfCar = make;
  }
  std::string getMake()
  {
    return makeOfCar;
  }
  friend std::ostream &operator<<(std::ostream &os, const Car &car);

protected:
  std::string makeOfCar;
};

std::ostream& operator<<(std::ostream& os1, const Car& car)
{
    os1 << "Make of the car is: " << car.makeOfCar << "\n";
    return os1;
}

int main(int argc, const char *argv[])
{
  Car myCar("Toyota");
  std::cout << "My car's make is: " << myCar.getMake() << "\n";
  myCar.setMake("Ferrari");
  std::cout << "My car's make is: " << myCar.getMake() << "\n";

  std::cout << "What is the make of your car? \n";
  std::string input;
  std::cin >> input;

  Car myCar2(input);
  std::cout << "My car2's make is: " << myCar2.getMake() << "\n";
  std::cout << myCar2;

  return 0;
}
