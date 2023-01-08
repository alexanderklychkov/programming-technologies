#include <iostream>

struct Data
{
    Data(int value)
        : m_value(value)
    {
    }

    ~Data()
    {
        if (m_value > 1000)
        {
            throw std::invalid_argument("number is too big");
        }
    }

private:
    int m_value;
};

void func()
{
    Data data_3(5000);
    std::runtime_error("error");
}

int main()
{
    try {
        func();
    } catch (const std::invalid_argument& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}