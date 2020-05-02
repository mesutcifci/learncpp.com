#include <iostream>

class A
{
public:
    virtual const char* getName() { return "A"; }
};

class B : public A
{
public:
//  It's OK. We can override A::getName
    virtual const char* getName() override { return "B"; }
};


/***********************************************************************/

class C
{
public:
    virtual const char* getName() final { return "C"; }
};

class D : C
{
public:
//    We can't override. Because C::getName has final specifier
//    virtual const char* getName()  { return "C"; }
};

/***********************************************************************/


class E final
{
public:
    virtual const char* getName() final { return "E"; }
};

/*
class F : E // We can't inherit from E class because E has final specifier
{
public:
    virtual const char* getName() final { return "E"; }
}; */

/***********************************************************************/


int main()
{

    return 0;
}
