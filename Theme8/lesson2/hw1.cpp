#include <iostream>

int divide(int value)
{
    if (value == 0) throw std::logic_error("Деление на 0 запрещено!");

    return 1024 / value;
}

int main()
{
    setlocale(LC_ALL, "ru");

    try {
        std::cout << divide(0) << std::endl;
    } catch (std::logic_error err) {
        std::cout << err.what() << std::endl;
    }

    return 0;
}