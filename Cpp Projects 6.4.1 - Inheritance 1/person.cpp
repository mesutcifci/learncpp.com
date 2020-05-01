#include <person.h>

Person::Person(std::string name, int age):m_name{name},m_age{age} {}

std::string Person::getName(){
    return m_name;
}
void Person::setName(std::string name){
    m_name = name;
}

int Person::getAge(){
    return m_age;
}
void Person::setAge(int age){
    m_age = age;
}
