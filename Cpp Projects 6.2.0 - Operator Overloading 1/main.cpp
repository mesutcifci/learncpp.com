#include <iostream>

class X{
private:
    int m_number;
public:
    X(int number){m_number = number;}
    int getNumber(){return m_number;}
};

class A{
private:
    int m_number;
public:
    A(int number){m_number = number;}
    friend A operator+(A &a1, A &a2);
    int getNumber(){return m_number;}
};

A operator+(A &a1, A &a2){
    return A(a1.getNumber() + a2.getNumber());
}

int main()
{

    X x1{10};
    X x2{20};
//  X xSum{x1 + x2};

    A a1{10};
    A a2{20};
    A aSum{a1 + a2};

    std::cout << aSum.getNumber() << "\n";

    return 0;
}
