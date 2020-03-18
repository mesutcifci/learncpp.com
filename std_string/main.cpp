#include <iostream>

using namespace std;

void giveAndPrintName() {
    cout << "Enter your full name: ";
    string name;
    cin >> name;

    cout << "Enter your age: ";
    string age;
    cin >> age;

    cout << "name = " << name << "\n" << "age = " << age << "\n";

}

void giveAndPrintName_2() {
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
//  giveAndPrintName();

//  this function works correctly.
    giveAndPrintName_2();

    return 0;
}
