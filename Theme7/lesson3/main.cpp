#include <stdio.h>
#include <time.h>
#include <stdlib.h>


// Функция, возвращающая искомое значение
int sqrt()
{
    int value = rand() % 25;

    for (int i = 0; i <= value; i++)
    {
        if (i * i == value)
        {
            return i;
        }
    }

    return 0;
}

// Функция, возвращающая искомое значение через дополнительный аргумент - указатель
int sqrt(int *value)
{
    for (int i = 0; i <= *value; i++)
    {
        if (i * i == *value)
        {
            return i;
        }
    }

    return 0;
}

// Функция, возвращающая искомое значение через дополнительный аргумент - ссылку
int sqrt(int &value)
{
    for (int i = 0; i <= value; i++)
    {
        if (i * i == value)
        {
            return i;
        }
    }

    return 0;
}

void drawArray(int arr[], size_t count)
{
    for (int i = 0; i < count; i++)
    {
        if (arr[i] != 0) 
        {
            printf("Root - %d", arr[i]);
        }
        else 
        {
            printf("Not root");
        }
        printf("\n");
    }

    printf("\n");
}

int main()
{
    srand(time(NULL));

    int first = 9, second = 25, third = 3;
    int *pointerFirst = &first, *pointerSecond = &second, *pointerThird = &third;

    int numbersFirst[3] = {sqrt(), sqrt(), sqrt()};
    int numbersSecond[3] = {sqrt(pointerFirst), sqrt(pointerSecond), sqrt(pointerThird)};
    int numbersThird[3] = {sqrt(first), sqrt(second), sqrt(third)};
    
    drawArray(numbersFirst, 3);
    drawArray(numbersSecond, 3);
    drawArray(numbersThird, 3);

    return 1;
}