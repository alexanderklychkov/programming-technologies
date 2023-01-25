#include <iostream>

struct Base
{
    void do_1()
    {
        std::cout << "do_1_impl" << std::endl;
        do_1_impl();
    }

    void do_2()
    {
        std::cout << "do_2_impl" << std::endl;
        do_1_impl();
    }

    virtual void do_1_impl() {}
    virtual void do_2_impl() {}
};

struct Derived : Base
{
    void do_1_impl() override
    {

    }

    void do_2_impl() override
    {
        
    }
};



int main()
{
    Derived d;
    Base& b = d;
    b.do_1();
    b.do_2();

    std::cout << "asdasd";
    return 0;
}