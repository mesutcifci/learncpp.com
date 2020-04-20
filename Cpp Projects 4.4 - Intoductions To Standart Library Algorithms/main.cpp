#include <iostream>
#include <algorithm>
#include <array>

bool someFunction(int i) { // i = 2,3,5,5,5,7,11,13,17,23

    return i % 5 == 0;
}

bool greater(int x, int y) {

    return x < y;
}


int main()
{
    std::array numbers {2,3,5,5,5,7,11,13,17,23};

//  if std::find found the number it returns the address of the number
//  else returns end iterators
//  auto found {std::find(numbers.begin(),numbers.end(),2)};
//  std::cout << numbers.begin() << "\n";
//  std::cout << found << "\n";
//  std::cout << numbers.end() << "\n";


//  if someFunction return true it returns the address of number
//  else returns end iterators
//  auto found_2 {std::find_if(numbers.begin(),numbers.end(),someFunction)};
//  std::cout << numbers.begin() << "\n";
//  std::cout << found_2 << "\n";
//  std::cout << numbers.end() << "\n";

//  How many 5 in the series
//  auto count{std::count(numbers.begin(),numbers.end(),5)};
//  std::cout << count << "\n";

//    auto count_2{std::count_if(numbers.begin(),numbers.end(),someFunction)};
//    std::cout << count_2 << "\n";


    std::sort(numbers.begin(),numbers.end(),greater);
    for (int i : numbers)
     {
       std::cout << i << ' ';
     }

    return 0;
}
