#include <iostream>

using namespace std;

int main()
{
    int *ptr { 0 };  // ptr is a null pointer

    int *ptr2; // ptr2 is uninitialized
    ptr2 = 0;  // ptr2 is now a null pointer

    cout << ptr2  << "\n";
//  cout << *ptr2 << "\n"; //  undefined behavior


    if (*ptr2)
        cout << "ptr2 is pointing to a integer value.";
    else
        cout << "ptr2 is a null pointer.";

    int *ptr3 = nullptr;   // ptr3 is a null pointer


    return 0;
}
