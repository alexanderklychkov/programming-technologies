#include <iostream>

struct Integer
{
public:
    explicit Integer(int value)
        : m_value(value) {}

    Integer& operator ++ ()
    {
        ++m_value;
        return *this;
    }

    Integer& operator ++ (int)
    {
        Integer temp(m_value);
        ++m_value;
        return *this;
    }

    int operator * () const
    {
        return m_value;
    }

    operator int ()
    {
        return m_value;
    }

    friend bool operator < (Integer lhs, Integer rhs);
private:
    int m_value;
};

bool operator < (Integer lhs, Integer rhs)
{
    return lhs.m_value < rhs.m_value;
}

int main()
{
    Integer value1(100);
    Integer value2(200);
    int source = value1;

    ++value1;

    bool result = value1 < value2;

    std::cout << source;

    return 0;
}