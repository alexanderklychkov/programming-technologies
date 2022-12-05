#include <stdio.h>
#include <string.h>

main()
{
    int taskNumber;
    char str[100];
    printf("Write string: ");
    gets(str);

    // 1. Создайте одномерный массив символов, впишите туда с клавиатуры данные и выведите на экран только 2-й символ данного слова.
    // 2. Создайте одномерный массив, далее заполните его данными, например словом «Hello», после чего пропишите код так, чтобы он определил последний элемент строки.
    //    После измените код так, чтобы программа меняла два элемента строки местами.
    // 3. Создайте одномерный массив, и заполните его данными, например словом «Hello». После чего пропишите код так, чтобы он удалял нужный пользователю символ из строки.
    printf("Select task(1, 2, 3): ");
    scanf("%i", &taskNumber);

    switch(taskNumber) 
    {
        case 1:
            printf("Second symbol - %c", str[1]);
            break;
        case 2:
            {
                int q = strlen(str);
                char buffer = str[0];

                str[0] = str[q - 1];
                str[q - 1] = buffer;

                puts(str);
            }
            break;
        case 3:
            {
                int symbolNumber;
                printf("Delete symbol number: ");
                scanf("%i", &symbolNumber);

                for (int j = symbolNumber - 1; j < strlen(str); j++)
                {
                    str[j] = str[j + 1];
                }

                puts(str);
            }
            break;
        default:
            printf("Task not found");
            break;
    }
    
}