#include <iostream>

template<typename T>
T returnSomething(T something) {
    return something;
}

int main()
{
    returnSomething(10);
    returnSomething("text");
    returnSomething(10.2);

    return 0;
}
