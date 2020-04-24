#include <iostream>

class Something
{
public:
    static int number;
};

int Something::number{10};

int main()
{
    Something first;
    Something second;

    first.number = 10;

    std::cout << first.number << "\n";  // result = 10
    std::cout<< second.number << "\n";  // result = 10

    Something::number = 20;

    std::cout << first.number << "\n";  // result = 20
    std::cout<< second.number << "\n";  // result = 20

    return 0;
}
