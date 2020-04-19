#include <iostream>

enum class Color {
    RED,
    BLUE,
};


int main()
{
    Color color = Color::RED;

    if (color == Color::RED)
        std::cout << "The color is red!\n";
    else if (color == Color::BLUE)
        std::cout << "The color is blue!\n";

 // std::cout << color; // won't work, because there's no implicit conversion to int
    std::cout << static_cast<int>(color); // will print 1
    return 0;
}
