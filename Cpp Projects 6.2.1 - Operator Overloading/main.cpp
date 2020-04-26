#include <iostream>

class A{
private:
    int m_number;
public:
    A(int number){m_number = number;}
    friend A operator+(A &a1, A &a2);
    friend A operator+(A &a1, int number);
    friend A operator+(int number, A &a1);
    int getNumber(){return m_number;}
};

A operator+(A &a1, A &a2){
    return A(a1.getNumber() + a2.getNumber());
}

A operator+(A &a1, int number){
    return A(a1.getNumber() + number);
}

A operator+(int number, A &a1){
    return A(number + a1.getNumber());
}

int main()
{
    A a1{10};
    A a2{20};
    A aSum{a1 + a2};
    A aSum2{100 + a2};
    A aSum3{a1 + 200};

    std::cout << aSum.getNumber()  << "\n";
    std::cout << aSum2.getNumber() << "\n";
    std::cout << aSum3.getNumber() << "\n";

    return 0;
}
