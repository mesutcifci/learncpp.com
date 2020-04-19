#include <iostream>
#include <array>
#include <iterator>

int main()
{
  /*
    std::array numbers {1,2,3};

    auto  begin{numbers.begin()};
    auto end{numbers.end()};

    for(auto i{begin}; i != end; ++i) {
        std::cout << *i << "\n";
    }
*/

    std::array numbers {1,2,3};
    auto begin{std::begin(numbers)};
    auto end{std::end(numbers)};

    for(auto i {begin}; i != end; ++i){
        std::cout << *i << "\n";
    }



    return 0;
}
