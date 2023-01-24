#include <iostream>
#include <cmath>

struct Function
{
    virtual double calculate(double x) = 0;
    virtual void print() = 0;
};

struct Ellipse : Function
{
private:
    double a, b;
public:
    Ellipse(double value1, double value2)
    {
        a = value1;
        b = value2;
    }

    double calculate(double x)
    {
        return b / a * sqrt(pow(a, 2) - pow(x, 2));
    }

    void print()
    {
        std::cout << "y = sqrt(" << pow(a, 2) << " - x^2) * " << b / a << std::endl;
    }
};

struct Hyperbola : Function
{
private:
    double a, b;
public:
    Hyperbola(double value1, double value2)
    {
        a = value1;
        b = value2;
    }

    double calculate(double x)
    {
        return b / a * sqrt(pow(x, 2) - pow(a, 2));
    }

    void print()
    {
        std::cout << "y = sqrt(x^2 - " << pow(a, 2) << ") * " << b / a << std::endl;
    }
};

struct Parabola : Function
{
private:
    double a, b, c;
public:
    Parabola(double value1, double value2, double value3)
    {
        a = value1;
        b = value2;
        c = value3;
    }

    double calculate(double x)
    {
        return a * pow(x, 2) + b * x + c;
    }

    void print()
    {
        std::cout << "y = " << a << "x^2 + " << b << "x + " << c << std::endl;
    }
};

void print(Function& func)
{
    func.calculate(2);
    func.print();
}


int main()
{
    Ellipse ellipse(3, 2);
    Hyperbola hyperbola(1, 3);
    Parabola parabola(5, 4, 3);

    print(ellipse);
    print(hyperbola);
    print(parabola);

    return 0;
}