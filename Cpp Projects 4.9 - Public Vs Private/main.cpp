#include <iostream>

struct PersonStruct{
  std::string name; // public by default, can be accessed by anyone
  int age;          // public by default, can be accessed by anyone
};

class PersonClass{
  std::string name; // private by default, can only be accessed by other members
  int age;          // private by default, can only be accessed by other members
public:
  std::string job;  // public member
};



int main()
{
    PersonStruct person1;
    person1.name = "Mesut";

    PersonClass person2;
//  person2.name = "Elif";
    person2.job  = "Doctor";



    return 0;
}
