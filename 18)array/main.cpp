#include <iostream>

using namespace std;

int main()
{

    int numbers[] = {0,1,2};
    int numbers_2[3] = {0,1,2};
    int numbers_3[3];
    numbers_3[0] = 0;
    numbers_3[1] = 1;
    numbers_3[2] = 2;


    struct Student{
      int age;
    };

    Student students[100];
    students[50].age = 24;

    int input;
    cin >> input;
    int numbers_4[input];




    return 0;
}
