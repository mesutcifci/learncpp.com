#include <iostream>

using namespace std;

// This will give 'multiple definition' error
 int number_1;

// it's OK. we say that number_1 is defined somewhere
// and this is forward declaration, not definition
//extern int number_1;

int number_2; // it's OK. we can't reach the number_2 in a.cpp

// it's OK. we say that number_3 is defined somewhere
// and this is forward declaration, not definition
extern const int number_3;

// forward declaration of number_4
extern const int number_4;

// constexpr variables can't be forward declared
// extern constexpr int number_5;



int main()
{
    cout << number_1 << "\n";
    cout << number_2 << "\n";
    cout << number_3 << "\n";

//  This will give error because
//  we can't find the number_4 variable anywere.
//  cout << number_4 << "\n";



    return 0;
}
