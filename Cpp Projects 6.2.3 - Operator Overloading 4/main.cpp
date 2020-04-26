#include <iostream>


class A{
private:
    int m_number;
public:
    A(int number){m_number = number;}

    A operator+(int number);
    A operator+(A &a1); // for a1 + a2

    int getNumber(){return m_number;}
};

A A::operator+(int number){
    return A(m_number + number);
}

A A::operator+(A &a1){
    return A(m_number + a1.m_number);
}


int main()
{
    A a1{10};
    A a2{20};

    A sum  = a1 + 5;
    A sum2 = 10 +30;
    A sum3 = a1 + a2;
//  A sum4 = 40 + a1; // we can't do this

    std::cout << sum.getNumber() << "\n";
    std::cout << sum2.getNumber() << "\n";
    std::cout << sum3.getNumber() << "\n";

    return 0;
}
