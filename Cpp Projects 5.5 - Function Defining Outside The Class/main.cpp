#include <iostream>

class Person {
private:
    std::string m_name;
    std::string m_surname;
public:
  Person(std::string name, std::string surname); // Declaration of constructor
  void printInfo(); // Declaration of member function
};

// Definition of constructor
Person::Person(std::string name, std::string surname) {
    m_name = name;
    m_surname = surname;
}

// Defition of member function
void Person::printInfo(){
    std::cout << "Name = " + m_name + " Surname = " + m_surname + "\n";
}

int main()
{
    Person person{"Elif","Bat"};
    person.printInfo();
    return 0;
}
