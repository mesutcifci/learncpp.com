#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person{
private:
    std::string m_name;
    int m_age;
public:
    Person() = default;
    Person(std::string name, int age);

    std::string getName();
    void setName(std::string name);

    int getAge();
    void setAge(int age);

};

#endif // PERSON_H
