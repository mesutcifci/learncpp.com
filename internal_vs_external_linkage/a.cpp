constexpr int number1 = 1; // the internal linkage is only accessible within a.cpp
const     int number2 = 2; // the internal linkage is only accessible within a.cpp

extern constexpr int number3 = 3; // the extern linkage is  accessible within other files
extern const     int number4 = 4; // the extern linkage is  accessible within other files

int number5 = 5;           // the external linkage is accesible other files
static int number6 = 6;    // the internal linkage is only accessible within a.cpp

int add(int x, int y) {    // the external linkage is accesible other files
    return x + y;
}

static int subtract(int x, int y) { // the internal linkage is only accessible within a.cpp
    return x - y;
}
