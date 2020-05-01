#include <iostream>

class A{
public:
    int public_number;
private:
    int private_number;
protected:
    int protected_number;
};

class B : private A { // private inheritance
public:
    B(){
        public_number    = 10;  // We can access here
//      private_number   = 20;  // We can not access here
        protected_number = 30;  // We can access here
    }
};

class C{
public:
    int public_number;
private:
    int private_number;
protected:
    int protected_number;
};

class D : public C { // public inheritance
public:
    D(){
        public_number    = 10;  // We can access here
//      private_number   = 20;  // We can not access here
        protected_number = 30;  // We can access here
    }
};



int main()
{
    A a1;
    a1.public_number    = 10; // We can access here
//  a1.private_number   = 20; // We can not access here
//  a1.protected_number = 30; // We can not access here

    B b1;
//  b1.public_number    = 10; // We can not access here
//  b1.private_number   = 20; // We can not access here
//  b1.protected_number = 30; // We can not access here

    C c1;
    c1.public_number    = 10; // We can access here
//  c1.private_number   = 20; // We can not access here
//  c1.protected_number = 30; // We can not access here

    D d1;
    d1.public_number    = 10; // We can  access here
//  d1.private_number   = 20; // We can not access here
//  d1.protected_number = 30; // We can not access here




    return 0;
}
