#include <iostream>
#include <vector>

/* Length is how many elements are being used in the array,
 * whereas capacity is how many elements were allocated in memory.*/


int main()
{

    std::vector<int> numbers{1,2,3,4,5}; // length = 5
    std::cout << "length: " << numbers.size() << "  capacity: " << numbers.capacity() << '\n';

    numbers = {1,2,3}; // length = 3
    std::cout << "length: " << numbers.size() << "  capacity: " << numbers.capacity() << '\n';

    return 0;
}
