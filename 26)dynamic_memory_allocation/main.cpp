#include <iostream>

using namespace std;

int main()
{
    /*
     * memory is allocated and the 'new' operator creates
     * the object using that memory and then returns a pointer
     * containing the address of the memory that has been allocated.
     * but we cant reach this pointer.
     */
    new int; // dynamically allocate an integer.

    int *ptr{new int}; // assign the address to ptr so we can access it later.
    *ptr = 99;   // assign value of 99 to allocated memory
    delete ptr; // return the memory to the operating system.

    std::cout << *ptr; // undefined behavior
    ptr = nullptr;


    // value will be set to a null pointer if the integer allocation fails
    int *value = new (nothrow) int;






    return 0;
}
