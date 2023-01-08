#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class FileWasNotOpenedException
{
public:
    FileWasNotOpenedException()
    {
    }

    string what()
    {
        return "Не удалось открыть файл!";
    }
private:
    string errMessage;
};

void readFile()
{
    string line;
    ifstream in("text.no");

    if (in.is_open())
    {
        while(getline(in, line))
        {
            cout << line << endl;
        }
    } else {
        throw FileWasNotOpenedException();
    }
    in.close();
}

int main()
{
    setlocale(LC_ALL, "ru");

    try
    {
        readFile();
    }
    catch(FileWasNotOpenedException e)
    {
        cout << e.what() << endl;
    }

    return 0;
}