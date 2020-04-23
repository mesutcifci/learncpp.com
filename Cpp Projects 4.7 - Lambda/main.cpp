#include <iostream>

using namespace std;

void function1() {
   auto multiple =  [](int x){
        return x * 2;
    };
    cout << "Result = " << multiple << "\n";
}
void function2() {

    auto print{
        [](auto value) {
            static int counter{0};
            cout << counter++ << ")" << value << "\n";
        }
    };

    print("Mesut");
    print("Elif");
    print("Kedi");

    print(900);
    print(800);

    print("Mesut Elif Gırgır Minik");

}
void function3() {
   auto divide =  [](int x, int y, bool bInteger){
        if(bInteger)
            return x/y; // line A
        else
//          return type must match that in line A
//          return static_cast<double>(x)/y;
            cout << " ";
    };
    cout << "Result = " << divide << "\n";
}
void function4() {
   auto divide =  [](int x, int y, bool bInteger) -> double{
        if(bInteger)
            return x/y; // line A
        else
            return static_cast<double>(x)/y;
    };
    cout << "Result = " << divide << "\n";
}
void function5() {
    int x = 5;
    int z = 6;
    int q = 7;

    auto sum{
        [x](int y) {  // if we dont write x in [] lambda can't reach variable x
            return x + y;
        }
    };

    auto sum2{
        [=](int y) {  // lambda can reach all variable
            return x + y + z + q;
        }
    };
}
void function6() {
    int x = 5;
/*    auto increment{
        [x]() {
//          Illegal, x was captured as a const copy.
            ++x;
        }
    };
*/
    auto increment{
        [x]() mutable {
//          We're allowed to modify x now
            ++x;
        }
    };

    increment();
/*  expected result = 6
    but result = 5 because the variable x in lambda function
    is copy of x  */
    cout << "x = " << x << "\n";
}
void function7() {
    int x = 5;
    auto increment{
        [&x](){
            return ++x;
        }
    };
    increment();
    cout << "x = " << x << "\n"; // result = 6;
}

int main()
{
    []() {}; // defines a lambda with no captures, no parameters, and no return type




    return 0;
}
