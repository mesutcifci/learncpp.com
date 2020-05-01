#include <iostream>

class Person{
private:
    std::string m_name;
    int m_age;
public:
    Person() = default;
    Person(std::string name, int age):m_name{name}, m_age{age}
    {
        std::cout << "Person's Class Contructed \n";
    }

    std::string getName(){return m_name;}
    void setName(std::string name){m_name = name;}

    int getAge(){return m_age;}
    void setAge(int age){m_age = age;}
};

class Player : public Person{
private:
    double m_score;
public:
    Player(std::string name, int age, double score) :
        Person{name,age}, // call Person's constructor
        m_score{score}
    {
        std::cout << "Player's Class Contructed \n";
    }

    double getScore(){return m_score;}
    void setScore(double score) {m_score = score;}
};


int main()
{
    Player p1{"Mesut",23,57.6};
    std::cout << p1.getName() << "\n";

    return 0;
}
