#include <iostream>
#include <cassert>

using namespace std;

void enterNumber(int number) {

//  if number < 0 throw error messge
    assert(number >= 0 && "The number must be positive");
}


int main()
{
    enterNumber(-1);
    return 0;
}
