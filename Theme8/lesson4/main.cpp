#include <iostream>

struct Data
{
    Data()
    {

    }

    virtual void func_1() {};
    virtual void func_2() {};
};

struct DerivedData : Data
{
    void func_2() override
    {

    }
};



int main()
{
    Data* data = new DerivedData;
    data->func_2();
    delete data;
    return 0;
}