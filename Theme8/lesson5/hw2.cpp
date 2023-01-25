#include <iostream>

struct Car {
public:
    Car(std::string company, std::string model) 
        : m_company(company), m_model(model) {}
    
    void printData() {
        std::cout << "Company: " << m_company << " Model: " << m_model << std::endl;
    }
protected:
    std::string m_company;
    std::string m_model;
};

struct PassengerCar : Car {
    PassengerCar(std::string company, std::string model) 
        : Car(company, model) {}
};

struct Bus : Car {
    Bus(std::string company, std::string model) 
        : Car(company, model) {}
};

struct Minivan : virtual PassengerCar, virtual Bus {
    Minivan(std::string company, std::string model) 
        : PassengerCar(company, model), Bus(company, model) {}
};

int main() {
    return 0;
}
