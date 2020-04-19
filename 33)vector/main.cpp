#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;
    vector<int> numbers_2 = { 1,2,3,4,5};
    vector<int> numbers_3 { 4,5,6,1 };

    // as with std::array, the type can be omitted since C++17
    vector numbers_4 { 8, 3, 1 }; // deduced to std::vector<int>

    numbers_4[47] = 8;     // no bounds checking
 // numbers_4.at(47) = 8;  // does bounds checking

    vector<int> numbers_5 {1,2,3,4,5,6,7};
    numbers_5.resize(3); // numbers = {1,2,3}
    cout << "length = " << numbers_5.size() << "\n";

    vector<int> numbers_6(4); // 0 0 0 0




    return 0;
}
