#include <employee.h>

Employee::Employee(int salary):m_salary{salary} {}
int Employee::getSalary(){
    return m_salary;
}
void Employee::setSalary(int salary){
    m_salary = salary;
};
