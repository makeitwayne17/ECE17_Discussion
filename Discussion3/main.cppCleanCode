#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <fstream>
#include "stringCounter.hpp"

using namespace std;
using namespace ECE17;

int main(int argc, const char *argv[])
{
    //lets use streams to read a file
    ifstream fileToRead("./randomString.txt");
    string randomText;

    cout << "Starting file read:\n\n\n";
    getline(fileToRead, randomText);

    stringCounter strCounter(randomText);
    strCounter.countCapital();
    strCounter.countLower();
    strCounter.countNumbers();
    strCounter.sumNumbers();
    strCounter.countSymbolGroup();
    strCounter.countSpecificChar('^');
    strCounter.countSpecificChar('+');
    strCounter.countSpecificChar('=');
    strCounter.countSpecificChar('}');
    return 0;
}
