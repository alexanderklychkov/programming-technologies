#include <stdio.h>
#include <string.h>

main()
{
    int taskNumber;
    char str[101];

    printf("Write string: ");
    gets(str);

    if (strlen(str) == 0) 
    {
        printf("String is empty!");
        return 0;
    }

    if (strlen(str) > 100) {
        printf("String cannot be more than 100");
        return 0;
    }

    // 1. Создать одномерный массив символов, вписать с клавиатуры данные, затем прописать код так, чтобы программа удаляла первую букву.
    // 2. Создать зеркальное отображение строки с использованием второй (буферной) строки.
    printf("Select task(1, 2): ");
    scanf("%i", &taskNumber);

    switch (taskNumber)
    {
        case 1:
            for (int i = 0; i < strlen(str); i++)
            {
                str[i] = str[i + 1];
            }

            puts(str);
            break;
        case 2:
            {
                char replacedStr[100];
                int i = 0;

                for (int j = strlen(str) - 1; j >= 0; j--)
                {
                    replacedStr[i] = str[j];
                    i++;    
                }

                replacedStr[i] = '\0';

                puts(replacedStr);
            }
            break;
        default:
            printf("Task not found!");
            break;
    }
}