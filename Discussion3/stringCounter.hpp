//stringCounter.hpp
#include <string>
#ifndef stringCounter_h
#define stringCounter_h
using namespace std;

namespace ECE17
{
    class stringCounter
    {
    public:
        stringCounter(string input);
        void countCapital();
        void countLower();
        void countNumbers();
        void sumNumbers();
        void countSymbolGroup();
        //reusability
        void countSpecificChar(char toFind);

    protected:
        string inputString;
    };
} // namespace ECE17

#endif