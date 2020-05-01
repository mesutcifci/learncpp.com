#include <person.h>
#include <employee.h>

int main()
{
    Person person1{"Mesut",23};
    std::cout << person1.getName() << "\n";
    std::cout << person1.getAge() << "\n";

    Employee employee1{2600};
    employee1.setName("Elif");
    employee1.setAge(25);
    std::cout << employee1.getName() << "\n";
    std::cout << employee1.getAge() << "\n";


    return 0;
}
