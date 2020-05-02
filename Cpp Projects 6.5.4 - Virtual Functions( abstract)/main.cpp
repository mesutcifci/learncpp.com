#include <iostream>

class Base {
public:
    std::string function1(){return "function 1";}         // non-virtual function

    virtual std::string function2(){return "function 2";} // normal virtual function

    virtual std::string function3() = 0;                  // pure virtual function

//  std::string function4() = 0;                          // invalid

};


class A : public Base {
    // We forgot to redefine function3
};


class B : public Base {
public:
    virtual std::string function3(){
        return "Class B";
    }
};

/******************************************************************************************/


class Base2 {
public:
    virtual std::string function1() = 0;
};

// Abstract function can have a body
std::string Base2::function1() {
    return "Base2";
}

class C : public Base2 {
public:
    virtual std::string function1() {
        return Base2::function1();  // return default function1
    }
};


int main()
{
//  Base classes has pure virtual(abstract) function
//  so we can't instantiated
//  Base baseA;


//  to instantiate class A
//  we must redefine its abstract function(function3)
//  A a1;

    B b1;
    std::cout << b1.function3() << "\n";

    C c1;
    std::cout << c1.function1() << "\n";
    return 0;
}
