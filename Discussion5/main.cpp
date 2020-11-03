#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include "train.hpp"

using namespace std;
using namespace ECE17;

int main(int argc, const char *argv[])
{
    Train myTrain;
    for (int i = 0; i < 5; i++)
    {
        string name = "Car" + to_string(i);
        myTrain.append(name);
    }

    cout << myTrain.showTrain();
    return 0;
}
