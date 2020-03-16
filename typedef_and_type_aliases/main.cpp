#include <iostream>

using namespace std;

int main()
{
    typedef int x_t;

    x_t number = 5;
//  int number = 5;  two expressions are equal

    using y_t  = int;

    y_t number_2 = 15;
//  int number_2 = 15;  two expressions are equal

    return 0;
}
