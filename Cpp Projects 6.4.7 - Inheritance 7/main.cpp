#include <iostream>

class Animal
{
protected:
    std::string m_name;
    // Animal can't created directly but
    // subclasses can construct
    Animal(const std::string &name) : m_name{ name } {}

public:
    const std::string& getName() const { return m_name; }
    std::string speak() const { return "???"; }
};

class Cat: public Animal
{
public:
    Cat(const std::string &name) : Animal{ name } {}
    std::string speak() const { return "Feed mee"; }
};

class Dog: public Animal
{
public:
    Dog(const std::string &name) : Animal{ name } {}

    std::string speak() const { return "Love mee"; }
};

int main()
{
    Cat cat{ "Gırgır" };
    std::cout << "Cat's name is : " << cat.getName() << "\n";
    std::cout << "Cat says : "      << cat.speak() << "\n\n";

    Dog dog{ "Minik" };
    std::cout << "Dog's name is : " << dog.getName() << "\n";
    std::cout << "Dog says : "      << dog.speak() << "\n\n";


//  Animal *pAnimal{"animal"}; // Animal can not initialiaze like this.
//  pAnimal->speak() calls Animal::speak() rather than
//  the Dog::Speak() or Cat::speak() function.
    Animal *pAnimal{&cat};
    std::cout << "Animal's name is : " << pAnimal->getName() << "\n";
    std::cout << "Animal says : "      << pAnimal->speak() << "\n\n";

    pAnimal = &dog;
    std::cout << "Animal's name is : " << pAnimal->getName() << "\n";
    std::cout << "Animal says : "      << pAnimal->speak() << "\n";
    return 0;
}
