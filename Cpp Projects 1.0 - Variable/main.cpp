#include <iostream>

using namespace std;

int main()
{

    int a;    // declare an integer variable named a
    int x, y; // declare two integer variables named x,y

    int b;
    b = 1;     // copy assignment

    int c = 2; // copy initialization
    int d(3);  // direct initialization

    int e{4};     // direct brace initialization(prefered)
    int f = {5};  // copy brace initialization

    int g{};      // zero initialization
//  int h{4.2};   // brace initialization doesn't allow narrowing conversions











    return 0;
}
