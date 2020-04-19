#include <iostream>

using namespace std;

int main()
{

    const int number = 10;
//  int *ptr = &number; // cannot convert const int* to int*


    const int *ptr2 = &number; // it's OK
//  *ptr2 = 5;    // const value cannot be changed


    int number2 = 20;
    const int *ptr3 = &number2;
    number2 = 21; // it's OK
//  *ptr3 = 24;   // const value cannot be changed

    int number3 = 30;
    int number4 = 40;
    const int *ptr4 = &number3;
    ptr4 = &number4; // okay, ptr now points at some other const int


    int *const ptr5 = &number3; // ptr5 will always point to number3
//  ptr5 = &number4; // const pointer can not be changed.
    *ptr5 = 6; // it's OK

    const int *const ptr6 = &number3;
//  ptr6 = &number4; // const pointer can not be changed.
//  *ptr6 = 6; // const value cannot be changed















    return 0;
}
