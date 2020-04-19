#include <iostream>

const int num1 = 1;
constexpr int num2 = 2;

int main()
{
   /*
      constant variables can not change
      num1 = 10;
      num2 = 20;
   */

    int num3;
    std::cin>>num3;

    const int num4 = num3;        // const variables can initilaized compile time and run time
    // constexpr int num5 = num3; // constexpr can initilaized only compile time



    return 0;
}
