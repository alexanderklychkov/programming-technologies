#include <iostream>

struct Figure {
    virtual double area() = 0;
};

struct Parallelogram : Figure {
public:
    Parallelogram(double base, double height) 
        : m_base(base), m_height(height) {}

    double area() override { return m_base * m_height; }
protected:
    double m_base;
    double m_height;
};

struct Rectangle : Parallelogram {
    Rectangle(double base, double height) 
        : Parallelogram(base, height) {}
};

struct Square : Parallelogram {
    Square(double side) 
        : Parallelogram(side, side) {}
};

struct Rhombus : Parallelogram {
    Rhombus(double diagonal1, double diagonal2) 
        : Parallelogram(diagonal1, diagonal2) {}
    double area() override { return m_base * m_height / 2; }
};

struct Circle : Figure {
public:
    Circle(double radius) 
        : m_radius(radius) {}
    double area() override { return 3.14 * m_radius * m_radius; }
private:
    double m_radius;
};

int main() {
    Rectangle rectangle(2, 6);
    std::cout << "Rectangle area: " << rectangle.area() << std::endl;

    Square square(3);
    std::cout << "Square area: " << square.area() << std::endl;

    Rhombus rhombus(3, 6);
    std::cout << "Rhombus area: " << rhombus.area() << std::endl;

    Circle circle(8);
    std::cout << "Circle area: " << circle.area() << std::endl;

    return 0;
}
