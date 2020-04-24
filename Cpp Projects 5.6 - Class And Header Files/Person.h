#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person {
private:
    std::string m_name;
    std::string m_surname;
public:
  Person(std::string name, std::string surname); // Declaration of constructor
  void printInfo(); // Declaration of member function
};
#endif // PERSON_H
