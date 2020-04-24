#include <iostream>

using namespace std;

class Something{
public:
    Something& A(){return *this;}
    Something& B(){return *this;}
    Something& C(){return *this;}
};



int main()
{
    Something something;
    something.A().B().C();
    return 0;
}
