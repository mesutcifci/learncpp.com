#include <iostream>

class Person{
private:
  std::string m_name;
  std::string m_surname;
public:
 /* Person(){ // default constructor
      m_name = "John";
      m_surname = "Doe";
  }
*/
  Person(std::string name = "John", std::string surname = "Doe"){
      m_name = name;
      m_surname = surname;
  }

  std::string getName(){return m_name;}
  void setName(std::string name){m_name = name;}

  std::string getSurname(){return m_surname;}
  void setSurname(std::string surname){m_surname = surname;}

  void printFullName(){std::cout << "Full Name = " << m_name + " " + m_surname << "\n";}

};

class Country {
    std::string m_name = "Somewhere";
    int m_population = 0;
public:

    Country() = default; //  Country country_1{}; Country country_1;

    Country(std::string name, int population){
       m_name = name;
       m_population = population;
    }

    void printInfo() {
        std::cout << "Name = " + m_name + " Population = " << m_population << "\n";
    }
};

class A
{
public:
    A() { std::cout << "A\n"; }
};

class B
{
private:
    A m_a; // B contains A as a member variable

public:
    B() { std::cout << "B\n"; }
};

int main()
{
    Person person_1{"Mesut", "Çifci"};
    person_1.printFullName();

    Person person_2{};
    person_2.printFullName();

    Country country_1;
    country_1.printInfo();

    B b;



    return 0;
}
