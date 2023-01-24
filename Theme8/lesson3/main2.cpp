#include <iostream>

struct ICar
{
    virtual void go() = 0;
};

struct Bus : ICar
{
    void go() override
    {

    }
};

struct Car : ICar
{
    void go() override
    {

    }
};

enum CarType {
    BUS_TYPE,
    CAR_TYPE
};

ICar* create_concreate_car(CarType type)
{
    switch (type)
    {
        case CarType::BUS_TYPE:
            return new Bus;
        case CarType::CAR_TYPE:
            return new Car;
    }

    throw std::runtime_error("unknown type of car");
}

int main()
{
    ICar* car_1 = create_concreate_car(CarType::BUS_TYPE);
    ICar* car_2 = create_concreate_car(CarType::CAR_TYPE);
    ICar* car_3 = create_concreate_car(CarType::BUS_TYPE);

    return 0;
}