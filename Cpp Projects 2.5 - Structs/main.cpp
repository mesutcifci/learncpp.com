#include <iostream>

using namespace std;

struct Person {
    string name;
    string gender;
    int age;
};

struct Company {
  Person employee;
  string company_name;
};

void printInformation(Person person)
{
    std::cout << "Name: "    << person.name   << "\n";
    std::cout << "Gender: "  << person.gender << "\n";
    std::cout << "Age: "     << person.age    << "\n";
}

int main()
{
    Person person_1;
    person_1.name   = "Mesut";
    person_1.gender = "male";
    person_1.age    = 23;

    Person person_2 = {"Elif","female",25};

    Person person_3 = {"Girgir", "male"};

 /* cout << person_1.age << "\n";
    cout << person_2.age << "\n";
    cout << person_3.age << "\n";
 */
    printInformation(person_1);
    printInformation(person_2);
    printInformation(person_3);

    Company company_1{person_1,"CXX"};
    cout << company_1.employee.name << "\n";

    Company company_2{{"Minik","Male",24},"CatCat"};
    cout << company_2.employee.name << "\n";

    Company company_3{{"xxx","yyy",24}};
    cout << company_3.company_name << "\n";





    return 0;
}
