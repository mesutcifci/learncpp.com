#include <iostream>

constexpr int number1 = 10;
const     int number2 = 20;

constexpr int number3 = 30;
const     int number4 = 40;

// these extern's are an forward declaration of a variables
// named number3 and number4 defined elsewhere
// extern constexpr int number3 = 30;
// extern const     int number4 = 40;

// int number5 = 30;        // gives error because the variable of number5 in a.cpp is internal linkage.
int number6 = 40;

int add(int x, int y);      // forward declaration
int subtract(int x, int y); // forward declaration

int main()
{
    add(10,20);      // matches the add function in a.cpp
//  subtract(10,20); // don't matches the subtract function in a.cpp

    return 0;
}
