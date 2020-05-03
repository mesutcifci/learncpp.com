#include <iostream>

int main()
{
    int number;
    std::cout << "Enter a positive number\n";
    std::cin >> number;
    try {
        
        if(number <= 0)
            throw "the number must be positive"; // throw exception of type const char*
        
    }  catch (const char* exception) { // catch exceptions of type const char*
        std::cerr << "Error: " << exception << "\n";
    } 
    
    return 0;
}
