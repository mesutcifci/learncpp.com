#include <iostream>

using namespace std;

enum Color {
    COLOR_WHITE, // default assigned 0
    COLOR_BLUE,  // default assigned 1
    COLOR_GREEN,
    COLOR_RED,
};

enum Animal{
    ANIMAL_DONKEY = 5,  // assigned 5
    ANIMAL_CAT,         // assigned 6
    ANIMAL_MONKEY = -4, // assigned -4
    ANIMAL_DOG,         // assigned -3
    ANIMAL_LION = 5,   // shares same value as ANIMAL_DONKEY
};

Color color = COLOR_RED;

// Color color_2 = ANIMAL_CAT; // not allowed
Color color_3 = static_cast<Color>(5);

int myPet = ANIMAL_CAT;




int main()
{
    cout << color<< endl;
    return 0;
}
