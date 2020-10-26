#include <iostream>
#include <stdio.h>
#include <string>
#include "stringCounter.hpp"

using namespace std;

namespace ECE17
{
    stringCounter::stringCounter(string input)
    {
        inputString = input;
    }

    void stringCounter::countCapital()
    {
        //count of capital letters
        int capital = 0;
        for (char c : inputString)
        {
            if (c >= 'A' && c <= 'Z')
            {
                capital++;
            }
        }
        cout << "There are " << capital << " capitalized letters\n";
    }

    void stringCounter::countLower()
    {

        //count of lower case letters
        int lower = 0;
        for (char c : inputString)
        {
            if (c >= 'a' && c <= 'z')
            {
                lower++;
            }
        }
        cout << "There are " << lower << " lowercase letters\n";
    }

    void stringCounter::countNumbers()
    {
        //count of numbers
        int numbers = 0;
        for (char c : inputString)
        {
            if (c >= '0' && c <= '9')
            {
                numbers++;
            }
        }
        cout << "There are " << numbers << " numbers\n";
    }

    void stringCounter::sumNumbers()
    {
        //sum of all numbers
        int sum = 0;
        for (char c : inputString)
        {
            if (c >= '0' && c <= '9')
            {
                sum += int(c - '0');
            }
        }
        cout << "Sum of all numbers are " << sum << "\n";
    }

    void stringCounter::countSymbolGroup()
    {
        //count of any of these characters: '@#$%'
        int symbol1 = 0;
        for (char c : inputString)
        {
            if (c == '@' || c == '#' || c == '$' || c == '%')
            {
                symbol1++;
            }
        }
        cout << "There are " << symbol1 << " of these characters: '@#$%'\n";
    }

    //reusability
    void stringCounter::countSpecificChar(char toFind)
    {
        //count of toFind
        int symbol = 0;
        for (char c : inputString)
        {
            if (c == toFind)
            {
                symbol++;
            }
        }
        cout << "There are " << symbol << " of '" << toFind << "'\n";
    }

} // namespace ECE17