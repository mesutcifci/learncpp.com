#include <iostream>

class B; // Declariton of class B

class A {
private:
    int m_value;
public:
    A(int value){m_value = value;}
    friend void isEqual(const A &value1, const A &value2);
    friend void sum(const A &value1, const B &value2);
};

class B {
private:
    int m_value;
public:
    B (int value){m_value = value;}
    friend void sum(const A &value1, const B &value2);

};


void isEqual(const A &value1, const A &value2){
    // We have access private members of class A
    if(value1.m_value == value2.m_value)
        std::cout << "Equal\n";
    else
        std::cout << "Not Equal\n";
}

void sum(const A &value1, const B &value2) {
    // We have access private members of class A and B
    std::cout << value1.m_value + value2.m_value << "\n";
}


int main()
{
    A a1{1};
    A a2{2};

//  a1.isEqual(a1,a2); // invalid
    isEqual(a1,a2);

    B b1{10};
    sum(a1,b1); // result 11
    sum(a2,b1); // result 12


    return 0;
}
