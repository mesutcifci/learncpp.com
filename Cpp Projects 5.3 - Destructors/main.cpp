#include <iostream>
#include <cassert>

class IntArray
{
private:
    int *m_array;
public:
    IntArray(int length) // constructor
    {
        assert(length > 0);
        m_array = new int[length]{};
    }

    ~IntArray() // destructor
    {
        // Dynamically delete the array we allocated earlier
        delete[] m_array;
    }

    void setValue(int index, int value) { m_array[index] = value; }
    int getValue(int index) { return m_array[index]; }
};

int main()
{
    IntArray intArray(1); // allocate 10 integers
    intArray.setValue(0,0);
    intArray.setValue(1,1);
    intArray.setValue(2,2);
    intArray.setValue(3,3);

    std::cout << "The value of element 3 is: " << intArray.getValue(3) << '\n';

    return 0;
} // intArray is destroyed here, so the ~IntArray() destructor function is called here
