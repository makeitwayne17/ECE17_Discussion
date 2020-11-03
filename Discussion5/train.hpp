//Cars.hpp
#include <string>
#ifndef train_h
#define train_h
using namespace std;

namespace ECE17
{

    //Lets make a train's car
    struct Car
    {
        Car(string name, Car *aNext = nullptr)
        {
            carName = name;
            aNext = nullptr;
        }

        //TODO: implement delete
        void operator delete(void *car)
        {
        }

        string carName; //this is the value you want to save
        Car *next;      //this points to the next car in the list (or nullptr)
    };

    class Train
    {
    public:
        Train()
        {
            root = nullptr;
        }

        //TODO: implement destructor
        ~Train()
        {
        }

        string showTrain()
        {
            string output = "";
            Car *tempPtr = root;
            while (tempPtr != nullptr)
            {
                output += tempPtr->carName + "  <---   ";
                tempPtr = tempPtr->next;
            }
            output += "\n";
            return output;
        }

        void append(const string &aValue)
        {
            auto *theNew = new Car(aValue, nullptr);
            if (root == nullptr)
            {
                root = theNew;
                return;
            }
            Car *tempPtr = root;
            while (tempPtr != nullptr && tempPtr->next != nullptr)
            {
                tempPtr = tempPtr->next;
                // cout << "in append" << tempPtr->carName << "\n";
            }
            tempPtr->next = theNew;
        }

    protected:
        Car *root;
    };
} // namespace ECE17

#endif