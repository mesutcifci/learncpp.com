#include <iostream>

class A{
public:
    void printer(){
        std::cout << "I'm A \n";
    }
};

class B :public  A{};

class C : public A{
public:
    void printer(){
        std::cout << "I'm C \n";
    }
};

int main()
{
    A a1;
    a1.printer();  // I'm A

    B b1;
    b1.printer();  // I'm A

    C c1;
    c1.printer();  // I'm C

    return 0;
}
