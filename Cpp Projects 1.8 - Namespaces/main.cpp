#include <iostream>
#include <germany.h>
#include <japan.h>

void sayHello() {
    std::cout<<"Hello Turkey\n";
}

int main()
{
    ::sayHello();        // call sayHello function in main.cpp
    germany::sayHello(); // call sayHello function in germany.cpp
    japan::sayHello();   // call sayHello function in japan.cpp

    japan::morning::sayMorning(); // call sayMorning function in namespace morning

    return 0;
}
