#include <iostream>

using namespace std;

void changeArray(int array[]) {
   for(int i = 0; i < 5; i++) {
        array[i] *= 10;
   }
}

int main()
{
    int numbers[]{1,2,3,4,5};
    cout << "Before\n";

    for(int number:numbers){
        cout << number << " ";
    }

    changeArray(numbers);

    cout << "\nAfter\n";
    for(int number:numbers){
        cout << number << " ";
    }

    return 0;
}
