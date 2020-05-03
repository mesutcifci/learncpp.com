#include <iostream>

template<class T>
class A {
private:
    T m_variable;
public:
    A(T variable) : m_variable{variable} {}

    T getVariable() {return m_variable;}

    void printSomething(T something);

};

template<class T>
void A<T>::printSomething(T something) {
    std::cout << something << "\n";
}

int main()
{
    A<int> a1{15};
    a1.printSomething(12);
 // a1.printSomething("text")  // invalid

    std::cout << a1.getVariable() << "\n";

    A<std::string> a2{"Hello"};
    a2.printSomething("text");
    std::cout << a2.getVariable() << "\n";

    return 0;
}
