#include <iostream>
#include <string>

using namespace std;

class MathParser
{
private:
    int number1;
    int number2;
    char oper;

    void parse(string str)
    {
        if (str.length())
        {
            int i = 0;
            string beforeOperator;
            string afterOperator;

            // Ищем число до оператора
            if (isdigit(str[i])) {
                while (isdigit(str[i])) 
                {
                    beforeOperator += str[i];
                    i++;
                }
            } else {
                throw logic_error("Is not number!");
            }
            

            // Проверяем оператор
            if (str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
            {
                oper = str[i];
                i++;
            } 
            else 
            {
                throw logic_error("Not found operator!");
            }

            // Ищем число после оператора
            if (isdigit(str[i])) 
            {
                while (isdigit(str[i]))
                {
                    afterOperator += str[i];
                    i++;
                }
            } 
            else 
            {
                throw logic_error("Is not number!");
            }

            number1 = stoi(beforeOperator);
            number2 = stoi(afterOperator);
        }
        else
        {
            throw logic_error("String is empty!");
        }
    }
public:
    MathParser(string str)
    {
        parse(str);
    }

    int calc()
    {
        switch (oper)
        {
            case '+':
                return number1 + number2;
                break;
            case '-':
                return number1 - number2;
                break;
            case '/':
                return number1 / number2;
                break;
            case '*':
                return number1 * number2;
                break;
            default:
                break;
        }

        return 0;
    }
};

int main()
{
    setlocale(LC_ALL, "ru");

    try
    {
        MathParser parser("10*20");
        cout << parser.calc() << endl;
    }
    catch(logic_error e)
    {
        cout << e.what() << endl;
    }
    

    return 0;
}