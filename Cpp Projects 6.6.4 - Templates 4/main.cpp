#include <iostream>


class A {
public:
    template<typename T>
    void printSomething(T something) {
        std::cout << something << "\n";
    }

};

template<>
void A::printSomething(std::string something) {
    std::cout << "Template Specilization ";
    std::cout << something << "\n";
}

int main()
{
    A a1;
    a1.printSomething<int>(78541); // 78541
    a1.printSomething<std::string>("text"); // Template Specilization Text




}
