#include <iostream>

class B;

class A {
private:
    int m_number1;
    int m_number2;
public:
    A(int number1, int number2){m_number1 = number1; m_number2 = number2;}

    friend class B;
};

class B {
public:
    B (A &a) {
        // we have directly access private members of class A
        std::cout << a.m_number1 << " " << a.m_number2 << "\n";
    }
};


int main()
{
    A a(10,20);
    B b(a);
    return 0;
}
