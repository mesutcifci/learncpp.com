#include <iostream>

class A
{
public:
    virtual const char* getName1(int x) { return "A"; }
    virtual const char* getName2(int x) { return "A"; }
    virtual const char* getName3(int x) { return "A"; }
};

class B : public A
{
public:
    virtual const char* getName1(short int x) { return "B"; } // function doesn't match  A::getName1
    virtual const char* getName2(int x) const { return "B"; } // function doesn't match  A::getName2
    virtual const char* getName3(int x) { return "B"; } // function match  A::getName3

};

class C : public A
{
public:
//    compiler gives error because function doesn't match  A::getName1
//    virtual const char* getName1(short int x)  override { return "C"; }

//    compiler gives error because function doesn't match  A::getName2
//    virtual const char* getName2(int x) const  override { return "C"; }

//  it's OK! parameter match A::getName3
    virtual const char* getName3(int x)  override { return "C"; }

};



int main()
{
    B b;
    A &rBase = b;
    std::cout << rBase.getName1(1) << '\n';  // result A
    std::cout << rBase.getName2(2) << '\n';  // result A
    std::cout << rBase.getName3(3) << '\n';  // result B

    return 0;
}
