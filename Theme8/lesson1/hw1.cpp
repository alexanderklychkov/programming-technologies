#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    string gender;
    int age;
    int weight;
public:
    Person(string n, string g, int a, int w) {
        name = n;
        gender = g;
        age = a;
        weight = w;
    }

    string getName()
    {
        return name;
    }

    string getGender()
    {
        return gender;
    }

    int getAge()
    {
        return age;
    }

    int getWeight()
    {
        return weight;
    }
};

class Student : Person
{
private:
    const int YEARS_STUDY = 3;    
    int startStudy;
    int endStudy;
public:
    Student(string n, string g, int a, int w, int start) : Person(n, g, a, w)
    {
        startStudy = start;
        endStudy = start + YEARS_STUDY;
    }

    void printLastStudyYear()
    {
        cout << endStudy << endl;
    }
};

int main() 
{
    Person human("Ivan", "male", 20, 75);
    Student student("Alex", "male", 25, 70, 2022);

    cout << human.getName() << endl;
    student.printLastStudyYear();
    
    return 0;
}