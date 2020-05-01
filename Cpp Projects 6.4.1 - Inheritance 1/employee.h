#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <person.h>

class Employee : public Person {
private:
    int m_salary;
public:
    Employee() = default;
    Employee(int salary);
    int getSalary();
    void setSalary(int salary);
};




#endif // EMPLOYEE_H
