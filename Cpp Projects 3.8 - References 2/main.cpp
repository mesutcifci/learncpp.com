#include <iostream>

using namespace std;

void changeVariable(int &ref) {
    ref = 20;
}


int main()
{

    int number = 10;
    cout << "number = " << number << "\n"; // 10

    changeVariable(number); // int &ref = number;
    cout << "number = " << number << "\n"; // 20



    return 0;
}
