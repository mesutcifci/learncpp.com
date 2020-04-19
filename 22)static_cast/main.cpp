#include <iostream>

using namespace std;

int main()
{
    int number_1 = 10/2.8;
    cout << number_1 << "\n"; // result = 3

//  int number_2{10/2.8}; // error: type 'double' cannot be narrowed to 'int' in initializer list

    int number_3{static_cast<int>(10/2.8)}; // it's OK!
    cout << number_3 << "\n"; // result = 3

    double number_4 = 10/4;
    cout << number_4 << "\n"; // unexpected result 2

    double number_5 = static_cast<double>(10/4);
    cout << number_5 << "\n"; // unexpected result 2

    double number_6 = static_cast<double>(10)/4;
    cout << number_6 << "\n"; // expected result 2.5

    return 0;
}
