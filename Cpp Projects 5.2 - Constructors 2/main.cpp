#include <iostream>

class Example {
private:
    int m_number1;
    int m_number2;
public:
    Example():m_number1{10},m_number2{20}{}
    Example(int number1, int number2):m_number1{number1},m_number2{number2}{}

    void printNumber(){
        std::cout << "Number 1 = " << m_number1 << "\nNumber 2 = "
                  << m_number2 << "\n";
    }
};

int main()
{
    Example example1;
    example1.printNumber();

    Example example2{55,65};
    example2.printNumber();




    return 0;
}
