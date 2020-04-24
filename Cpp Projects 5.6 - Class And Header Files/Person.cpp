#include <Person.h>

// Definition of constructor
Person::Person(std::string name, std::string surname) {
    m_name = name;
    m_surname = surname;
}

// Defition of member function
void Person::printInfo(){
    std::cout << "Name = " + m_name + " Surname = " + m_surname + "\n";
}
