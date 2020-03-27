#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
    int number = 5;
    cout << number     << "\n";  // print value of variable number
    cout << &number    << "\n";  // print memory adress of variable number
    cout << *(&number) << "\n";  // print the value at the memory address of variable number
    cout << typeid(&number).name() << "\n";

    int *ptr = &number;   // ptr points to number
    cout << ptr << "\n";  // print the address that ptr is holding
    cout << *ptr << "\n"; // print the value that ptr is pointing

    return 0;
}
