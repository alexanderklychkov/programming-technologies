#include <iostream>
#include <string>

using namespace std;

class BasePerson
{
protected:
    string type;
    int discount = 0;
public:
    string getType()
    {
        return type;
    }

    int getDiscount()
    {
        return discount;
    }
};

class Student : public BasePerson
{
public:
    Student()
    {
        type = "student";
        discount = 15;
    }
};

class Teacher : public BasePerson
{
public:
    Teacher()
    {
        type = "teacher";
        discount = 10;
    }    
};

class Scientist : public BasePerson
{
public:
    Scientist()
    {
        type = "scientist";
        discount = 20;
    }    
};

class TechnicalWorker : public BasePerson
{
public:
    TechnicalWorker()
    {
        type = "technical worker";
        discount = 5;
    }    
};

int main()
{
    Student student;
    Teacher teacher;
    Scientist scientist;
    TechnicalWorker technicalWorker;

    cout << student.getDiscount() << endl;
    cout << teacher.getDiscount() << endl;
    cout << scientist.getDiscount() << endl;
    cout << technicalWorker.getDiscount() << endl;
    
    return 0;
}