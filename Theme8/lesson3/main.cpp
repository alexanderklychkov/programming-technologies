#include <iostream>

struct Figure
{
    Figure()
    {
        draw();
    }

    virtual void draw() {

    }

    ~Figure()
    {
        draw();
    }
};

struct Square : Figure
{
    void draw() override
    {
        std::cout << "Square" << std::endl;
    }
};

// struct Line : Figure
// {
//     void draw() override
//     {
//         std::cout << "Line" << std::endl;
//     }
// };


int main() 
{
    Square square;
    // Line line;

    // Figure* figures[2] = {&square, &line};

    // for (size_t i = 0; i < 2; i++)
    // {
    //     figures[i]->draw();
    // }

    return 0;
}