#include <iostream>

using namespace std;

void printNameAndAge() {
    cout << "Enter your full name: ";
    string name;
    cin >> name;

    cout << "Enter your age: ";
    string age;
    cin >> age;

    cout << "name = " << name << "\n" << "age = " << age << "\n";

}

void printNameAndAge_2() {
    cout << "Enter your full name: ";
    string name;
    getline(cin,name);

    cout << "Enter your age: ";
    string age;
    cin >> age;

    cout << "name = " << name << "\n" << "age = " << age << "\n";

}

int main()
{
    /*
    if user writes john doe as name:
    the program shows us 'name = john', 'age = doe'.
    And user is never given a chance to enter an age.
    */
//  printNameAndAge();

//  this function works correctly.
    printNameAndAge_2();

    return 0;
}
