#include <iostream>


class A{
private:
    int m_number;
public:
    A(int number){m_number = number;}
    int getNumber(){return m_number;}
};

// note: this function is not a member function not a friend function!
A operator+(A &a1, A &a2){
    return A(a1.getNumber() + a2.getNumber());
}

int main()
{
    A a1{10};
    A a2{20};
    A aSum{a1+a2};

    return 0;
}
