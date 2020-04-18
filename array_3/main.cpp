#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int numbers[]{50,10,30,40,20};
    sort(begin(numbers),end(numbers));

    for(int i = 0; i < size(numbers); ++i)
        cout << numbers[i] << "\n";


    return 0;
}
