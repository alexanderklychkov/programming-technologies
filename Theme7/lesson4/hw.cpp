#include <stdio.h>
#include <conio.h>
#include <string.h>

void replaceFirstAndLastSymbol(char str[], char symbol)
{
    str[0] = symbol;
    str[strlen(str) - 1] = symbol;
    puts(str);
}

void trim(char str[])
{
    int beforeTrimPosition = 0, afterTrimPosition = strlen(str) - 1;

    // Удаляем пробелы в начале
    while (str[beforeTrimPosition] == ' ')
    {
        beforeTrimPosition++;
    }

    if (beforeTrimPosition)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[i + beforeTrimPosition];
        }
    }

    // Удаляем пробелы в конце
    while (str[afterTrimPosition] == ' ')
    {
        afterTrimPosition--;
    }

    if (afterTrimPosition)
    {
        str[afterTrimPosition + 1] = '\0';
    }
    

    puts(str);
}

int main()
{
    int taskNumber;
    char str[101];

    printf("Write string: ");
    gets(str);

    // 1. Создать функцию, получающую на вход строку и символ, и возвращающую строку с измененной первой и последней буквой на входной символ.
    // 2. Создать функцию, получающую на вход строку и возвращающую строку с удалением начальных и конечных пробелов.
    printf("Select task(1, 2): ");
    scanf("%d", &taskNumber);

    switch (taskNumber)
    {
        case 1:
            {
                printf("Write symbol: ");
                char symbol = getch();
                printf("%c\n", symbol);
                replaceFirstAndLastSymbol(str, symbol);
            }
            break;
        case 2:
            trim(str);
            break;
        default:
            printf("Task not found!");
            break;
    }

    return 1;
}