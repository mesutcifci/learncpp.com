#include <iostream>
class A;
class B {
public:
    void printA(A a);
};

class A {
private:
    int m_number1;
    int m_number2;
public:
    A(int number1, int number2){m_number1 = number1; m_number2 = number2;}
    friend void B::printA(A a);

};

void B::printA(A a) {
    std::cout << a.m_number1 << " " << a.m_number2 << "\n";
}

int main()
{
    A a{5,6};
    B b;
    b.printA(a);

    return 0;
}
