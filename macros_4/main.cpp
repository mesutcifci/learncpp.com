#include <iostream>

#define PRINT_MESSAGE(message) {   \
    std::cout << "This is a \n";   \
    std::cout << message << "\n";  \
    std::cout << "Macro\n";        \
}

int main()
{
    int num = 1;
    if(num)
        PRINT_MESSAGE("Good")
    else
        PRINT_MESSAGE("Bad")

    return 0;
}
