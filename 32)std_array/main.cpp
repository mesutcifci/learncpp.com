#include <iostream>
#include <array>

using namespace std;

void printLength(array<int,5> myArray) {
    cout << "length = " << myArray.size() << "\n";
}

int main()
{
    array<int,5> numbers;
    array<int,6>primeNumbers = {2,3,5,7,11,13};

//  array<int> numbers_2 = {1,5,9}; // array length must be provided
//  array<5> numbers_3 = {7,3,7};   // array type must be provided

    array numbers_4 = {1,2,3};      // it's OK.
    numbers_4[2]=10;
    numbers_4[20] = 46;             // doesn't throw error
    numbers_4.at(20) = 87;          // throws error
    cout << "length = " << numbers_4.size() << "\n";

    printLength(numbers);
//  printLength(primeNumbers) invalid

    return 0;
}
