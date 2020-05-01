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

void report(const Animal &rAnimal)
{
    std::cout << "Name = "  << rAnimal.getName() << "\n";

    // rAnimal.speak() will call Animal::speak() instead of the derived version of speak().
    std::cout << "Speak = " << rAnimal.speak() << '\n';
}
int main()
{
    Cat cat{ "Gırgır" };
    report(cat); // Animal &rAnimal{cat}

    Dog dog{ "Minik" };
    report(dog);

    Animal &pAnimal{cat};
    report(pAnimal);

    return 0;
}
