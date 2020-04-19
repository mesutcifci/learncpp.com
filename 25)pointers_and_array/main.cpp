#include <iostream>

using namespace std;

int main()
{

    int array[]{10,20,30,40,50};
    cout << &array << "\n";  // print address of the array's first element
    cout <<  array << "\n";  // print address of the array's first element
    cout << *array << "\n";  // print value of the array's first element

    int *ptr = &array[0];
    cout <<  ptr << "\n";    // print address of the array's first element
    cout << *ptr << "\n";    // print value of the array's first element

    cout << sizeof(array)  << "\n";  // 4 * 5 = 20
    cout << sizeof(*array) << "\n";  // 4
    cout << sizeof(ptr)  << "\n";    // 8
    cout << sizeof(*ptr) << "\n";    // 4



    cout << &array[1] << '\n';  // print memory address of array element 1
    cout << array+1   << '\n';  // print memory address of array pointer + 1

    cout << array[1]  << '\n';  // prints 20
    cout << *(array+1) << '\n'; // prints 20
    cout << *array+1  << '\n';  // prints 11

    *ptr = 100;
    cout << array[0] << "\n";   // 100



    return 0;
}
