#include <iostream>

#define FIVE_APPLE
#define FOO 9

int main()
{
// if APPLE macro is defined
#ifdef FIVE_APPLE
    std::cout << "We have five apple\n";
#endif

//if ORANGE macro is not defined
#ifndef TWO_ORANGE
    std::cout << "We dont have two orange\n";
#endif

#if 0
    std::cout << "This code is not compiled\n";
#endif

#ifdef FOO // This FOO does not get replaced because it’s part of another preprocessor directive
    std::cout << FOO; // This FOO gets replaced with 9 because it's part of the normal code
#endif


    return 0;
}
