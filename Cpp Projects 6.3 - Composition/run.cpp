#include <run.h>

void run(){
    std::cout << "Enter a name for your creature \n";
    std::string name;
    std::cin >> name;
    Creature creature{name, {4,7} };

    while (true) {

        std::cout << creature << "\n";

        std::cout << "Enter new X location (-1 to quit) \n";
        int x{0};
        std::cin >> x;
        if(x == -1)
            break;

        std::cout << "Enter new Y location (-1 to quit) \n";
        int y{0};
        std::cin >> y;
        if(y == -1)
            break;
        creature.moveTo(x,y);
    }



}
