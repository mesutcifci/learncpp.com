#include <iostream>

class A {
public:
    std::string getName(){return "Class A";}
};

class B : public A{
public:
    std::string getName(){return "Class B";}
};

class C {
public:
   virtual std::string getName(){return "Class C";}
};

class D : public C {
public:
   virtual std::string getName(){return "Class D";}
};

class E : public C {
public:
   virtual std::string getName(){return "Class E";}
};


int main()
{
    B b;
    A &a{b};
    std::cout << a.getName() << "\n"; // return "Class A"

    D d;
    C &c{d};
    std::cout << c.getName() << "\n"; // return "Class D"

    E e;
    C &c2{e};
    std::cout << c2.getName() << "\n"; // return "Class E"



    return 0;
}
