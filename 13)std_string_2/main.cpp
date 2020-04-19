#include <iostream>
#include <limits>
using namespace std;

void printNameAndAge() {
    cout << "Enter your age ";
    int age{};

//  when user enter a number(for example '10')
//  cin take 10\n
    cin >> age;

    cout << "Enter name: ";
    string name{};

//  and getline() take "\n" then assigns it to name
//  and user is never given a chance to enter an age.
    getline(cin, name);

    cout << "name = " << name << "\n" << "age = " << age << "\n";
}

void printNameAndAge_2() {
    cout << "Enter your age ";
    int age{};
    cin >> age;
    cin.ignore(32767, '\n'); // ignore up to 32767 characters until a \n is removed

//  cin.ignore(numeric_limits<streamsize>::max(), '\n');
//  ignore unlimited characters until a \n is removed

    cout << "Enter name: ";
    string name{};
    getline(cin, name);

    cout << "name = " << name << "\n" << "age = " << age << "\n";
}

int main()
{
    printNameAndAge();
    printNameAndAge_2();
    return 0;
}
