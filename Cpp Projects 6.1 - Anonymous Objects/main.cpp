#include <iostream>

class Cents
{
private:
    int m_cents;
public:
    Cents(int cents) { m_cents = cents; }
    int getCents() const { return m_cents; }
};

Cents add(const Cents &c1, const Cents &c2)
// Cents &c1 = Cents(10) Cents &c2 = Cents(20)
{
    // return Cents(30)
    return Cents(c1.getCents() + c2.getCents());
}

int main()
{
//    std::cout << Cents(30).getCents();
      std::cout<<add(Cents(10),Cents(20)).getCents() << "\n";
    return 0;
}
