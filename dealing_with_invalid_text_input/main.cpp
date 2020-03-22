#include <iostream>

using namespace std;

void getInteger() {
    int x;
    int y;

    // let's say user entered '5a'
    // 5 will be extracted and converted to an integer and assigned to variable x
    cin >> x;

    // in here the buffer keep 'a' and tries to assign to variable y
    // the user cannot find a chance to enter the second input
    cin >> y;

    // x = 5, y = 0
    cout << "x = " << x << "\ny = " << y << "\n";
}

void getInteger_2() {
    int x;
    int y;

    // let's say user entered '5a'
    // 5 will be extracted and converted to an integer and assigned to variable x
    cin >> x;
    cin.ignore(32767, '\n'); // letter 'a' is destroyes

    // now buffer is empty
    cin >> y;
    cout << "x = " << x << "\ny = " << y << "\n";
}

void getInteger_3() {

    while (true) { // Loop until user enters a valid input

        int x;
        int y;

        cout << "Enter two integer value: ";
        cin >> x;
        cin >> y;

        if (cin.fail()) {

            cout << "fail!\n";
            cout << "x = "<< x << "\n" << "y = " << y << "\n";
            cin.clear();
            cin.ignore(32767,'\n');
        }
        else {
            cin.ignore(32767, '\n');
            cout << "x = "<< x << "\n" << "y = " << y << "\n";
            break;
        }
     }
}

int main()
{

//  getInteger();
//  getInteger_2();
//  getInteger_3();


    return 0;
}
