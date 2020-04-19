#include <iostream>

using namespace std;

int main()
{
    int number = 10;
    int &ref = number; // reference to variable number

    cout << "number = " << number << "\n";  // 10
    cout << "ref = "    << ref    << "\n";  // 10

    cout << "&number = " << &number << "\n";
    cout << "&ref = "    << &ref    << "\n"; // same output &number

    ref = 5;
    cout << "number = " << number << "\n"; // 5
    cout << "ref = "    << ref    << "\n"; // 5

    number = 15;
    cout << "number = " << number << "\n"; // 15
    cout << "ref = "    << ref    << "\n"; // 15

//  int &ref_2;     // references must be initialized
//  int &ref_3 = 5; // references can not initialized by r-value

    int number_2 = 20;
    int number_3 = 30;

    cout << "number 2 = " << number_2 << "\n"; // 20
    cout << "number 3 = " << number_3 << "\n"; // 30

    int &ref_4 = number_2;
    ref_4 = number_3; // assigns the value of number_3 to number_2, reference does not change

    cout << "number 2 = " << number_2 << "\n"; // 30
    cout << "number 3 = " << number_3 << "\n"; // 30





    return 0;
}
