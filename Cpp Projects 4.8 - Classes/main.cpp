#include <iostream>

class Person {
public:
       std::string name;
       int age;
       using example_type = int;
       void print() {
           std::cout << "name = " << name << "\n";
           std::cout << "age = "  << age << "\n";
       }

};


int main()
{
    Person person1 {"Mesut",23};
    person1.print();
    person1.name = "MESUT";
    std::cout << person1.name << "\n";

    Person::example_type number = 10;

    return 0;
}
