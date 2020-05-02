#include <iostream>

class Cents
{
private:
    int m_cents;
public:
    Cents(int cents)
        : m_cents{ cents }
    {
    }

    friend bool operator>(const Cents &c1, const Cents &c2)
    {
        return (c1.m_cents > c2.m_cents);
    }

    friend std::ostream& operator<< (std::ostream &out, const Cents &cents)
    {
        out << cents.m_cents;
        return out;
    }

    Cents& operator+=(const Cents &cents)
    {
        m_cents += cents.m_cents;
        return *this;
    }

    Cents& operator/=(int value)
    {
        m_cents /= value;
        return *this;
    }
};
template<class T>

T average(T *array, int length) {
    T sum(0);

    for(int count{}; count < length; count++)
        sum += array[count];

    sum /= length;

    return sum;
}


int main()
{

    Cents cents[]{Cents(5),Cents(4),Cents(3),Cents(2)};
    std::cout << average(cents,4);

    return 0;
}
