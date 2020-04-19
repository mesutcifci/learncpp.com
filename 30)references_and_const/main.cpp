#include <iostream>

using namespace std;

int main()
{

    const int number_1 = 10;
    const int &ref_1 = number_1;

    int number_2 = 20;
    const int &ref_2 = number_2;

    number_2 = 21;
//  ref_2 = 22;  // ref_2 can't change

    return 0;
}
