#include <iostream>

using namespace std;

int main()
{   
    int number = 10;
    string text = "text";

    int *normalPtr = &number;
//  ptr = &text   // invalid

    auto *autoPtr = &number;
//  auto_ptr = &text; // invalid

//  ptr is a void pointer and can point to objects of any data type
    void *voidPtr = &number;  // valid
    voidPtr = &text; // valid

//  cout << *voidPtr << "\n"; // invalid
    string *stringPtr = static_cast<string*>(voidPtr);
    cout << *stringPtr << "\n";

    return 0;



}
