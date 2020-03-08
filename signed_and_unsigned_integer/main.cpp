#include <iostream>

int main()
{
    short signed_number{0};            // -32,768 to 32,767
    unsigned short unsigned_number{0}; // 0 to 65,535

    signed_number   = -1;
    std::cout << "signed number   = " << signed_number   << "\n";

    signed_number   = 32768;
    std::cout << "signed number   = " << signed_number   << "\n";

    signed_number   = 32769;
    std::cout << "signed number   = " << signed_number   << "\n";

    signed_number   = -32769;
    std::cout << "signed number   = " << signed_number   << "\n";

    signed_number   = -32770;
    std::cout << "signed number   = " << signed_number   << "\n";




    unsigned_number = -1;
    std::cout << "unsigned number = " << unsigned_number << "\n";

    unsigned_number = -2;
    std::cout << "unsigned number = " << unsigned_number << "\n";

    unsigned_number = 65536;
    std::cout << "unsigned number = " << unsigned_number << "\n";

    unsigned_number = 65537;
    std::cout << "unsigned number = " << unsigned_number << "\n";

    unsigned_number = -65535;
    std::cout << "unsigned number = " << unsigned_number << "\n";

    unsigned_number = -65536;
    std::cout << "unsigned number = " << unsigned_number << "\n";


    return 0;
}
